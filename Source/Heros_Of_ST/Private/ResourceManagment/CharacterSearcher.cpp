// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/CharacterSearcher.h"
#include "ResourceManagment/STSaveGame.h"
#include "Characters/STCharacter.h"
#include "States/STHolding.h"
#include "States/STState.h"
#include "States/STTitle.h"
#include "Heros_Of_ST/macros.h"
#include "Kismet/GameplayStatics.h"

ASTCharacter* UCharacterSearcher::FindCharacterByID(const FString& CharacterID)
{
	FScopeLock Lock(&SyncLockChar);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found."), *CharacterID);
		return nullptr;
	}
}

FString UCharacterSearcher::GenerateCharacterID()
{
    FString ID = FString::FromInt(CurrentIDCounter++);
	//UE_LOG(LogTemp, Display, TEXT("Generated Character ID: \"%s\""), *ID);
    return ID;
}

bool UCharacterSearcher::RegisterCharacter(ASTCharacter* Character, const FString& CharacterID)
{
	FScopeLock Lock(&SyncLockChar);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("Character ID \"%s\" is already registered."), *CharacterID);
		return false;
	}
	CharacterMap.Add(CharacterID, Character);
	PRINT_SCREEN("Registered Character ID: \"%s\"", *CharacterID);
	return true;
}

void UCharacterSearcher::UnregisterCharacter(const FString& CharacterID)
{
	FScopeLock Lock(&SyncLockChar);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		CharacterMap.Remove(CharacterID);
		PRINT_SCREEN("Unregistered Character ID: \"%s\"", *CharacterID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found for unregistration."), *CharacterID);
	}
}

void UCharacterSearcher::BeginDestroy()
{
	Super::BeginDestroy();
	ClearAll();
}

bool UCharacterSearcher::LoadSaveData(const FString& SlotName, int32 UserIndex)
{
	if (!UGameplayStatics::DoesSaveGameExist(SlotName, UserIndex))
	{
		PRINT_SCREEN("存档不存在: %s", *SlotName);
		return false;
	}
	UGameplayStatics::AsyncLoadGameFromSlot(
		SlotName,
		UserIndex,
		FAsyncLoadGameFromSlotDelegate::CreateUObject(this, &UCharacterSearcher::OnLoadGameComplete));
	PRINT_SCREEN("Loaded character list from save data (placeholder).");
	return true;
}

void UCharacterSearcher::SaveData(const FString& SlotName, int32 UserIndex)
{
	USTSaveGame* SaveData = Cast<USTSaveGame>(UGameplayStatics::CreateSaveGameObject(USTSaveGame::StaticClass()));
	if (!SaveData) {
		PRINT_SCREEN("Failed to create save game object.");
		return;
	}
	for (const auto& Pair : CharacterMap)
	{
		ASTCharacter* Character = Pair.Value;
		if (Character)
		{
			FCharacterSavedData SavedData = Character->GetSavedData();
			SaveData->SavedCharacters.Add(SavedData);
		}
	}
	for (const auto& Pair : StateMap)
	{
		ASTState* State = Pair.Value;
		if (State)
		{
			FStateSavedData SavedData = State->GetSavedStateData();
			SaveData->SavedStates.Add(SavedData);
		}
	}
	for (const auto& Pair : HoldingMap)
	{
		ASTHolding* Holding = Pair.Value;
		if (Holding)
		{
			FHoldingSavedData SavedData = Holding->GetSavedHoldingData();
			SaveData->SavedHoldings.Add(SavedData);
		}
	}
	SaveData->MainCharacterID = currentControlledCharacter ? currentControlledCharacter->CharacterID : TEXT("");
	SaveData->SaveTime = FDateTime::Now();
	UGameplayStatics::AsyncSaveGameToSlot(
		SaveData,
		SlotName,
		UserIndex,
		FAsyncSaveGameToSlotDelegate::CreateUObject(this, &UCharacterSearcher::OnSaveGameComplete));
	//PRINT_SCREEN("Saved character list to save data (placeholder).");
}

bool UCharacterSearcher::DeleteSaveData(const FString& SlotName)
{
	if (!UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		PRINT_SCREEN("存档不存在: %s", *SlotName);
		return false;
	}
	bool bSuccess = UGameplayStatics::DeleteGameInSlot(SlotName, 0);
	PRINT_SCREEN("Deleted save data in slot %s. Result: %s", *SlotName, bSuccess ? TEXT("True") : TEXT("False"));
	return bSuccess;
}

TArray<FSavedDataBriefInfo> UCharacterSearcher::GetAllSavedFileInfos()
{
	TArray<FSavedDataBriefInfo> SaveFileInfos;
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString SaveDir = FPaths::ProjectSavedDir() + TEXT("SaveGames/");
	if (!PlatformFile.DirectoryExists(*SaveDir))
	{
		PlatformFile.CreateDirectory(*SaveDir);
	}
	FString SearchPattern = SaveDir + "*.sav";
	TArray<FString> SaveFileNames;
	IFileManager::Get().FindFiles(SaveFileNames, *SearchPattern, true, false);
	for (const FString& FileName : SaveFileNames)
	{
		FString SlotName = FPaths::GetBaseFilename(FileName);
		FDateTime FileTime = IFileManager::Get().GetTimeStamp(*SlotName);
		FSavedDataBriefInfo Info;
		Info.SlotName = SlotName;
		Info.SaveTime = FileTime;
		SaveFileInfos.Add(Info);
	}
	return SaveFileInfos;
}

void UCharacterSearcher::OnSaveGameComplete(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	PRINT_SCREEN("Save game completed. Result: %s", bSuccess ? TEXT("True") : TEXT("False"));
}

void UCharacterSearcher::OnLoadGameComplete(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedSaveGame)
{
	UWorld* World = GetGameWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("LoadCharacterListFromSaveData failed: no valid game world found."));
		return;
	}

	USTSaveGame* SaveData = Cast<USTSaveGame>(LoadedSaveGame);
	if (!SaveData)
	{
		PRINT_SCREEN("Failed to load save game data from slot: %s", *SlotName);
		return;
	}
	// Clear existing data
	ClearAll();
	// Load Holdings
	for (const FHoldingSavedData& HoldingData : SaveData->SavedHoldings)
	{
		ASTHolding* Holding = World->SpawnActor<ASTHolding>();
		Holding->HoldingID = HoldingData.HoldingID;
		Holding->HoldingName = HoldingData.HoldingName;
		// 稍后设置关联信息
	}
	// Load States
	for (const FStateSavedData& StateData : SaveData->SavedStates)
	{
		ASTState* State = World->SpawnActor<ASTState>();
		State->StateID = StateData.StateID;
		State->StateName = StateData.StateName;
		State->StateLevel = StateData.StateLevel;
		// 稍后设置关联信息
	}
	// Load Characters
	for (const FCharacterSavedData& CharacterData : SaveData->SavedCharacters)
	{
		ASTCharacter* SpawnedCharacter = World->SpawnActor<ASTCharacter>();
		if (!SpawnedCharacter)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn controlled character."));
			continue;
		}
		SpawnedCharacter->CharacterID = CharacterData.CharacterID;
		SpawnedCharacter->CharacterName = CharacterData.CharacterName;
		SpawnedCharacter->Attributes = CharacterData.Attributes;
		SpawnedCharacter->CharacterStatus = CharacterData.CharacterStatus;
		SpawnedCharacter->DeathReason = CharacterData.DeathReason;
		// 稍后设置关联信息
	}
	// Set current controlled character
	if (SaveData->MainCharacterID.IsEmpty())
	{
		currentControlledCharacter = nullptr;
	}
	else
	{
		currentControlledCharacter = FindCharacterByID(SaveData->MainCharacterID);
	}
	// Holdings 设置关联信息
	for (const FHoldingSavedData& HoldingData : SaveData->SavedHoldings)
	{
		ASTHolding* Holding = FindHoldingByID(HoldingData.HoldingID);
		if (Holding)
		{
			ASTState* OwningState = FindStateByID(HoldingData.OwningStateID);
			if (OwningState)
			{
				Holding->OwnerState = OwningState;
			}
			else
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Owning State ID \"%s\" not found for Holding ID \"%s\"."),
					*HoldingData.OwningStateID,
					*HoldingData.HoldingID);
			}
		}
	}
	// States 设置关联信息
	for (const FStateSavedData& StateData : SaveData->SavedStates)
	{
		ASTState* State = FindStateByID(StateData.StateID);
		if (State)
		{
			// 设置OverlordState
			if (!StateData.OverlordStateID.IsEmpty())
			{
				ASTState* OverlordState = FindStateByID(StateData.OverlordStateID);
				if (OverlordState)
				{
					State->SubjectTo(OverlordState, StateData.OverlordType, true);
				}
				else
				{
					UE_LOG(
						LogTemp,
						Warning,
						TEXT("Overlord State ID \"%s\" not found for State ID \"%s\"."),
						*StateData.OverlordStateID,
						*StateData.StateID);
				}
			}
			// 设置Titles
			TArray<USTTitle*> LoadedTitles;
			for (const FTitleSavedData& TitleData : StateData.Titles)
			{
				USTTitle* Title = NewObject<USTTitle>();
				Title->TitleName = TitleData.TitleName;
				Title->TitleDescription = TitleData.TitleDescription;
				Title->TitleRank = TitleData.TitleRank;
				// 设置TitleHolder
				ASTCharacter* TitleHolder = FindCharacterByID(TitleData.TitleHolderID);
				if (TitleHolder)
				{
					TitleHolder->AccuireTitle(Title, true);
				}
				else
				{
					UE_LOG(
						LogTemp,
						Warning,
						TEXT("Title Holder ID \"%s\" not found for Title \"%s\"."),
						*TitleData.TitleHolderID,
						*TitleData.TitleName);
				}
				LoadedTitles.Add(Title);
			}
			// 设置Capital
			ASTHolding* CapitalHolding = FindHoldingByID(StateData.CapitalHoldingID);
			State->InitTitles(LoadedTitles, CapitalHolding);
		}
	}
	// Characters 设置关联信息
	for (const FCharacterSavedData& CharacterData : SaveData->SavedCharacters)
	{
		//ASTCharacter* Character = FindCharacterByID(CharacterData.CharacterID);
		//if (Character)
		//{
		//	//
		//}
	}
	PRINT_SCREEN("Loaded character list from save data: %s", *SlotName);
}

UWorld* UCharacterSearcher::GetGameWorld() const
{
	UWorld* World = nullptr;
	if (GEngine)
	{
		for (const FWorldContext& Context : GEngine->GetWorldContexts())
		{
			UWorld* CandidateWorld = Context.World();
			if (CandidateWorld && CandidateWorld->IsGameWorld())
			{
				World = CandidateWorld;
				break;
			}
		}
	}
	return World;
}

void UCharacterSearcher::ClearAll()
{
	FScopeLock Lock(&SyncLockChar);
	for (auto& Pair : CharacterMap)
	{
		if (Pair.Value)
		{
			Pair.Value->ConditionalBeginDestroy();
		}
	}
	CharacterMap.Empty();
	//currentControlledCharacter->Destroy();
	currentControlledCharacter = nullptr;
	for (auto& Pair : StateMap)
	{
		if (Pair.Value)
		{
			Pair.Value->ConditionalBeginDestroy();
		}
	}
	StateMap.Empty();
	for (auto& Pair : HoldingMap)
	{
		if (Pair.Value)
		{
			Pair.Value->ConditionalBeginDestroy();
		}
	}
	HoldingMap.Empty();
	PRINT_SCREEN("Cleared all registered characters, states, and holdings.");
}

ASTState* UCharacterSearcher::FindStateByID(const FString& StateId)
{
	FScopeLock Lock(&SyncLockState);
	auto itor = StateMap.Find(StateId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("State ID \"%s\" not found."), *StateId);
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterState(ASTState* State, const FString& StateID)
{
	FScopeLock Lock(&SyncLockState);
	auto itor = StateMap.Find(StateID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("State ID \"%s\" is already registered."), *StateID);
		return false;
	}
	StateMap.Add(StateID, State);
	PRINT_SCREEN("Registered State ID: \"%s\"", *StateID);
	return true;
}

void UCharacterSearcher::UnregisterState(const FString& StateID)
{
	FScopeLock Lock(&SyncLockState);
	auto itor = StateMap.Find(StateID);
	if (itor)
	{
		StateMap.Remove(StateID);
		PRINT_SCREEN("Unregistered State ID: \"%s\"", *StateID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("State ID \"%s\" not found for unregistration."), *StateID);
	}
}

ASTHolding* UCharacterSearcher::FindHoldingByID(const FString& HoldingId)
{
	FScopeLock Lock(&SyncLockHolding);
	auto itor = HoldingMap.Find(HoldingId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Holding ID \"%s\" not found."), *HoldingId);
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterHolding(ASTHolding* Holding, const FString& HoldingID)
{
	FScopeLock Lock(&SyncLockHolding);
	auto itor = HoldingMap.Find(HoldingID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("Holding ID \"%s\" is already registered."), *HoldingID);
		return false;
	}
	HoldingMap.Add(HoldingID, Holding);
	PRINT_SCREEN("Registered Holding ID: \"%s\"", *HoldingID);
	return true;
}

void UCharacterSearcher::UnregisterHolding(const FString& HoldingID)
{
	FScopeLock Lock(&SyncLockHolding);
	auto itor = HoldingMap.Find(HoldingID);
	if (itor)
	{
		HoldingMap.Remove(HoldingID);
		PRINT_SCREEN("Unregistered Holding ID: \"%s\"", *HoldingID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Holding ID \"%s\" not found for unregistration."), *HoldingID);
	}
}
