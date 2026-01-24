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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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

bool UCharacterSearcher::LoadCharacterListFromSaveData()
{
	// Create controlled character
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
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("LoadCharacterListFromSaveData failed: no valid game world found."));
		return false;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Name = FName(TEXT("CurrentControlledCharacter"));
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.ObjectFlags |= RF_Transient;
	ASTCharacter* SpawnedCharacter = World->SpawnActor<ASTCharacter>(SpawnParams);
	if (!SpawnedCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn controlled character."));
		return false;
	}
	SpawnedCharacter->CharacterID = GenerateCharacterID();
	SpawnedCharacter->CharacterName = TEXT("李世民");
	SpawnedCharacter->Attributes.Health = 100;
	SpawnedCharacter->Attributes.Comprehension = 90;
	SpawnedCharacter->Attributes.Ingenuity = 80;
	SpawnedCharacter->Attributes.Perception = 70;
	SpawnedCharacter->Attributes.Willpower = 60;
	SpawnedCharacter->Attributes.Charisma = 50;
	SpawnedCharacter->Attributes.Strategy = 40;
	SpawnedCharacter->Attributes.Governance = 30;
	currentControlledCharacter = SpawnedCharacter;
	// 初始化State, Title和Holding的基础属性
	ASTState* DebugState = World->SpawnActor<ASTState>();
	DebugState->StateID = GenerateCharacterID();
	DebugState->StateName = TEXT("Xiaoyao County");
	DebugState->StateLevel = EStateLevel::County;
	ASTState* Empire = World->SpawnActor<ASTState>();
	Empire->StateID = GenerateCharacterID();
	Empire->StateName = TEXT("Tang Empire");
	Empire->StateLevel = EStateLevel::Empire;
	ASTHolding* DebugHolding = World->SpawnActor<ASTHolding>();
	DebugHolding->HoldingID = GenerateCharacterID();
	DebugHolding->HoldingName = TEXT("Xiaoyao City");
	USTTitle* DebugTitle = NewObject<USTTitle>();
	DebugTitle->TitleName = TEXT("Xiayo Governor");
	DebugTitle->TitleDescription = TEXT("This is a debug title.");
	DebugTitle->TitleRank = ETitleRank::Count;
	USTTitle* HouseTitle = NewObject<USTTitle>();
	HouseTitle->TitleName = TEXT("Dynast Of Li");
	HouseTitle->TitleDescription = TEXT("Dynast of Li.");
	HouseTitle->TitleRank = ETitleRank::Commoner;
	USTTitle* EmpireTitle = NewObject<USTTitle>();
	EmpireTitle->TitleName = TEXT("Empire Of Tang");
	EmpireTitle->TitleDescription = TEXT("Empire of Tang.");
	EmpireTitle->TitleRank = ETitleRank::Emperor;
	// 关联Title、State和Holding
	DebugHolding->OwnerState = DebugState; // holding只被基层state占有，但其它等级的state的治所也可以是这个holding
	DebugState->InitTitles({ DebugTitle }, DebugHolding);
	DebugState->SubjectTo(Empire, EOverlordType::Administrative, false);
	Empire->InitTitles({ EmpireTitle }, DebugHolding);
	currentControlledCharacter->AccuireTitle(HouseTitle, true);
	currentControlledCharacter->AccuireTitle(DebugTitle, true);
	currentControlledCharacter->AccuireTitle(EmpireTitle, true);

	// Placeholder for loading character list from save data
	// TODO: Implement actual loading logic here
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
	UGameplayStatics::AsyncSaveGameToSlot(
		SaveData,
		SlotName,
		UserIndex,
		FAsyncSaveGameToSlotDelegate::CreateUObject(this, &UCharacterSearcher::OnSaveGameComplete));
	//PRINT_SCREEN("Saved character list to save data (placeholder).");
}

void UCharacterSearcher::OnSaveGameComplete(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	PRINT_SCREEN("Save game completed. Result: %s", bSuccess ? TEXT("True") : TEXT("False"));
}

void UCharacterSearcher::ClearAll()
{
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
	FScopeLock Lock(&SyncLock);
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
