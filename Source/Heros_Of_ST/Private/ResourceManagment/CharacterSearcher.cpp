// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/CharacterSearcher.h"
#include "ResourceManagment/STSaveGame.h"
#include "Characters/STCharacter.h"
#include "States/STHolding.h"
#include "States/STState.h"
#include "States/STTitle.h"
#include "Identity/STCulture.h"
#include "Identity/STHouse.h"
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

FString UCharacterSearcher::GenerateID()
{
	FString ID = FDateTime::Now().ToString(TEXT("yyyyMMdd")) + FString::FromInt(CurrentIDCounter++);
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
	UE_LOG(LogTemp, Log, TEXT("Registered Character ID: \"%s\""), *CharacterID);
	return true;
}

void UCharacterSearcher::UnregisterCharacter(const FString& CharacterID)
{
	FScopeLock Lock(&SyncLockChar);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		CharacterMap.Remove(CharacterID);
		UE_LOG(LogTemp, Log, TEXT("Unregistered Character ID: \"%s\""), *CharacterID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found for unregistration."), *CharacterID);
	}
}

TArray<ASTCharacter*> UCharacterSearcher::GetPlayableCharacters()
{
	TArray<ASTCharacter*> PlayableList;
	for (auto& CharacterID : PlayableCharacterList)
	{
		auto itor = CharacterMap.Find(CharacterID);
		if (itor)
		{
			PlayableList.Add(*itor);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found for GetPlayableCharacters."), *CharacterID);
		}
	}
	return PlayableList;
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
	for (const auto& Pair : CultureMap)
	{
		USTCulture* Culture = Pair.Value;
		if (Culture)
		{
			FSTCultureData SavedData = Culture->GetSavedCultureData();
			SaveData->SavedCultures.Add(SavedData);
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
		FDateTime FileTime = IFileManager::Get().GetTimeStamp(*(SaveDir + SlotName + TEXT(".sav")));
		FSavedDataBriefInfo Info;
		Info.SlotName = SlotName;
		Info.SaveTime = FileTime;
		SaveFileInfos.Add(Info);
	}
	return SaveFileInfos;
}

bool UCharacterSearcher::LoadHistory()
{
	FString ConfigDir = FPaths::ProjectConfigDir() + "History/";
	FString CharacterFilePath = ConfigDir + "Characters.json";
	FString CharacterJsonContent;
	TArray<FCharacterSavedData> CharacterHistories;
	if (FFileHelper::LoadFileToString(CharacterJsonContent, *CharacterFilePath))
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(CharacterJsonContent);
		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			auto& CharactersArray = JsonObject->GetArrayField(TEXT("characters"));
			for (const TSharedPtr<FJsonValue>& CharacterValue : CharactersArray)
			{
				TSharedPtr<FJsonObject> CharacterObject = CharacterValue->AsObject();
				if (CharacterObject.IsValid())
				{
					FCharacterSavedData CharacterData;
					if (ASTCharacter::ParseFromJson(CharacterObject, CharacterData)) {
						CharacterHistories.Add(CharacterData);
					}
				}
			}
			auto& PlayableArray = JsonObject->GetArrayField(TEXT("playable"));
			for (const TSharedPtr<FJsonValue>& CharacterID : PlayableArray)
			{
				auto CharID = CharacterID->AsString();
				PlayableCharacterList.Add(CharID);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Load JSON failed: %s"), *CharacterFilePath);
		}
		PRINT_SCREEN("Loaded history file: %s", *CharacterFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load character history file: %s"), *CharacterFilePath);
	}

	FString StateFilePath = ConfigDir + "States.json";
	FString StateJsonContent;
	TArray<FStateSavedData> StateHistories;
	if (FFileHelper::LoadFileToString(StateJsonContent, *StateFilePath))
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(StateJsonContent);
		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			auto& StatesArray = JsonObject->GetArrayField(TEXT("states"));
			for (const TSharedPtr<FJsonValue>& StateValue : StatesArray)
			{
				TSharedPtr<FJsonObject> StateObject = StateValue->AsObject();
				if (StateObject.IsValid())
				{
					FStateSavedData StateData;
					if (ASTState::ParseFromJson(StateObject, StateData)) {
						StateHistories.Add(StateData);
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Load JSON failed: %s"), *StateFilePath);
		}
		PRINT_SCREEN("Loaded history file: %s", *StateFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load state history file: %s"), *StateFilePath);
	}

	FString HoldingFilePath = ConfigDir + "Holdings.json";
	FString HoldingJsonContent;
	TArray<FHoldingSavedData> HoldingHistories;
	if (FFileHelper::LoadFileToString(HoldingJsonContent, *HoldingFilePath))
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(HoldingJsonContent);
		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			auto& HoldingsArray = JsonObject->GetArrayField(TEXT("holdings"));
			for (const TSharedPtr<FJsonValue>& HoldingValue : HoldingsArray)
			{
				TSharedPtr<FJsonObject> HoldingObject = HoldingValue->AsObject();
				if (HoldingObject.IsValid())
				{
					FHoldingSavedData HoldingData;
					if (ASTHolding::ParseFromJson(HoldingObject, HoldingData)) {
						HoldingHistories.Add(HoldingData);
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Load JSON failed: %s"), *HoldingFilePath);
		}
		PRINT_SCREEN("Loaded history file: %s", *HoldingFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load holding history file: %s"), *HoldingFilePath);
	}

	FString CultureFilePath = ConfigDir + "Cultures.json";
	FString CultureJsonContent;
	TArray<FSTCultureData> CultureHistories;
	if (FFileHelper::LoadFileToString(CultureJsonContent, *CultureFilePath))
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(CultureJsonContent);
		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			auto& CulturesArray = JsonObject->GetArrayField(TEXT("cultures"));
			for (const TSharedPtr<FJsonValue>& CultureValue : CulturesArray)
			{
				TSharedPtr<FJsonObject> CultureObject = CultureValue->AsObject();
				if (CultureObject.IsValid())
				{
					FSTCultureData CultureData;
					if (USTCulture::ParseFromJson(CultureObject, CultureData)) {
						CultureHistories.Add(CultureData);
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Load JSON failed: %s"), *CultureFilePath);
		}
		PRINT_SCREEN("Loaded history file: %s", *CultureFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load culture history file: %s"), *CultureFilePath);
	}

	FString HouseFilePath = ConfigDir + "Houses.json";
	FString HouseJsonContent;
	TArray<FHouseSavedData> HouseHistories;
	if (FFileHelper::LoadFileToString(HouseJsonContent, *HouseFilePath))
	{
		TSharedPtr<FJsonObject> JsonObject;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(HouseJsonContent);
		if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
		{
			auto& HousesArray = JsonObject->GetArrayField(TEXT("houses"));
			for (const TSharedPtr<FJsonValue>& HouseValue : HousesArray)
			{
				TSharedPtr<FJsonObject> HouseObject = HouseValue->AsObject();
				if (HouseObject.IsValid())
				{
					FHouseSavedData HouseData;
					if (USTHouse::ParseFromJson(HouseObject, HouseData)) {
						HouseHistories.Add(HouseData);
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Load JSON failed: %s"), *HouseFilePath);
		}
		PRINT_SCREEN("Loaded history file: %s", *HouseFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load house history file: %s"), *HouseFilePath);
	}
	SetupDatabase(
		CharacterHistories,
		StateHistories,
		HoldingHistories,
		CultureHistories,
		HouseHistories);
	return true;
}

bool UCharacterSearcher::LoadRules()
{
	PRINT_SCREEN("Loading rules ...");
	FString ConfigDir = FPaths::ProjectConfigDir() + "Rules/";
	FString StateTemplatesFilePath = ConfigDir + "StateTemplates.json";
	FString StateTemplatesJsonContent;
	// TODO: Load rules from JSON files
	PRINT_SCREEN("Loaded rules.");
	return true;
}

void UCharacterSearcher::OnSaveGameComplete(const FString& SlotName, const int32 UserIndex, bool bSuccess)
{
	PRINT_SCREEN("Save game completed. Result: %s", bSuccess ? TEXT("True") : TEXT("False"));
}

void UCharacterSearcher::OnLoadGameComplete(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedSaveGame)
{
	USTSaveGame* SaveData = Cast<USTSaveGame>(LoadedSaveGame);
	if (!SaveData)
	{
		PRINT_SCREEN("Failed to load save game data from slot: %s", *SlotName);
		return;
	}
	// Clear existing data
	ClearAll();
	SetupDatabase(
		SaveData->SavedCharacters,
		SaveData->SavedStates,
		SaveData->SavedHoldings,
		SaveData->SavedCultures,
		SaveData->SavedHouses);
	// Set current controlled character
	if (SaveData->MainCharacterID.IsEmpty())
	{
		currentControlledCharacter = nullptr;
	}
	else
	{
		currentControlledCharacter = FindCharacterByID(SaveData->MainCharacterID);
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

void UCharacterSearcher::SetupDatabase(
	const TArray<FCharacterSavedData>& CharacterDatas,
	const TArray<FStateSavedData>& StateDatas,
	const TArray<FHoldingSavedData>& HoldingDatas,
	const TArray<FSTCultureData>& CultureDatas,
	const TArray<FHouseSavedData>& HouseDatas)
{
	UWorld* World = GetGameWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Error, TEXT("LoadCharacterListFromSaveData failed: no valid game world found."));
		return;
	}

	// Load Holdings
	for (const FHoldingSavedData& HoldingData : HoldingDatas)
	{
		ASTHolding* Holding = World->SpawnActor<ASTHolding>();
		Holding->HoldingID = HoldingData.HoldingID;
		Holding->HoldingName = HoldingData.HoldingName;
		RegisterHolding(Holding, HoldingData.HoldingID);
		// 稍后设置关联信息
	}
	// Load States
	for (const FStateSavedData& StateData : StateDatas)
	{
		ASTState* State = World->SpawnActor<ASTState>();
		State->StateID = StateData.StateID;
		State->StateName = StateData.StateName;
		State->StateLevel = StateData.StateLevel;
		RegisterState(State, StateData.StateID);
		// 稍后设置关联信息
	}
	// Load Characters
	for (const FCharacterSavedData& CharacterData : CharacterDatas)
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
		RegisterCharacter(SpawnedCharacter, CharacterData.CharacterID);
		// 稍后设置关联信息
	}
	for (const FSTCultureData& CultureData : CultureDatas)
	{
		USTCulture* Culture = NewObject<USTCulture>();
		Culture->CultureID = CultureData.CultureID;
		Culture->CultureName = CultureData.CultureName;
		Culture->Description = CultureData.Description;
		RegisterCulture(Culture, CultureData.CultureID);
		// 稍后设置关联信息
	}
	for (const FHouseSavedData& HouseData : HouseDatas)
	{
		USTHouse* House = NewObject<USTHouse>();
		House->HouseID = HouseData.HouseID;
		House->HouseName = HouseData.HouseName;
		House->Motto = HouseData.Motto;
		RegisterHouse(House, HouseData.HouseID);
		// 稍后设置关联信息
	}
	// Holdings 设置关联信息
	for (const FHoldingSavedData& HoldingData : HoldingDatas)
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
	for (const FStateSavedData& StateData : StateDatas)
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
	for (const FCharacterSavedData& CharacterData : CharacterDatas)
	{
		// cultrue
		ASTCharacter* Character = FindCharacterByID(CharacterData.CharacterID);
		if (Character)
		{
			USTCulture* Culture = FindCultureByID(CharacterData.CultureID);
			if (Culture)
			{
				Character->Culture = Culture;
			}
			else
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Culture ID \"%s\" not found for Character ID \"%s\"."),
					*CharacterData.CultureID,
					*CharacterData.CharacterID);
			}
			USTHouse* House = FindHouseByID(CharacterData.HouseID);
			if (House)
			{
				House->AddMember(Character, true);
			}
			else
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("House ID \"%s\" not found for Character ID \"%s\"."),
					*CharacterData.HouseID,
					*CharacterData.CharacterID);
			}
		}
	}
	// culture 设置关联信息
	for (const FSTCultureData& CultureData : CultureDatas)
	{
		USTCulture* Culture = FindCultureByID(CultureData.CultureID);
		if (Culture)
		{
			if (!CultureData.ParentCultureID.IsEmpty())
			{
				USTCulture* ParentCulture = FindCultureByID(CultureData.ParentCultureID);
				if (ParentCulture)
				{
					Culture->ParentCulture = ParentCulture;
				}
				else
				{
					UE_LOG(
						LogTemp,
						Warning,
						TEXT("Parent Culture ID \"%s\" not found for Culture ID \"%s\"."),
						*CultureData.ParentCultureID,
						*CultureData.CultureID);
				}
			}
		}
	}
	// House 设置关联信息
	for (const FHouseSavedData& HouseData : HouseDatas)
	{
		USTHouse* House = FindHouseByID(HouseData.HouseID);
		if (House)
		{
			ASTCharacter* LeaderCharacter = FindCharacterByID(HouseData.LeaderID);
			if (LeaderCharacter)
			{
				House->Leader = LeaderCharacter;
			}
			else
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Leader ID \"%s\" not found for House ID \"%s\"."),
					*HouseData.LeaderID,
					*HouseData.HouseID);
			}
			if (!HouseData.ParentHouseID.IsEmpty())
			{
				USTHouse* ParentHouse = FindHouseByID(HouseData.ParentHouseID);
				if (ParentHouse)
				{
					House->ParentHouse = ParentHouse;
				}
				else
				{
					UE_LOG(
						LogTemp,
						Warning,
						TEXT("Parent House ID \"%s\" not found for House ID \"%s\"."),
						*HouseData.ParentHouseID,
						*HouseData.HouseID);
				}
			}
		}
	}
}

void UCharacterSearcher::ClearAll()
{
	FScopeLock Lock(&SyncLockChar);
	CharacterMap.Empty();
	currentControlledCharacter = nullptr;
	StateMap.Empty();
	HoldingMap.Empty();
	CultureMap.Empty();
	HouseMap.Empty();
	PlayableCharacterList.Empty();
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
	UE_LOG(LogTemp, Log, TEXT("Registered State ID: \"%s\""), *StateID);
	return true;
}

void UCharacterSearcher::UnregisterState(const FString& StateID)
{
	FScopeLock Lock(&SyncLockState);
	auto itor = StateMap.Find(StateID);
	if (itor)
	{
		StateMap.Remove(StateID);
		UE_LOG(LogTemp, Log, TEXT("Unregistered State ID: \"%s\""), *StateID);
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
	UE_LOG(LogTemp, Log, TEXT("Registered Holding ID: \"%s\""), *HoldingID);
	return true;
}

void UCharacterSearcher::UnregisterHolding(const FString& HoldingID)
{
	FScopeLock Lock(&SyncLockHolding);
	auto itor = HoldingMap.Find(HoldingID);
	if (itor)
	{
		HoldingMap.Remove(HoldingID);
		UE_LOG(LogTemp, Log, TEXT("Unregistered Holding ID: \"%s\""), *HoldingID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Holding ID \"%s\" not found for unregistration."), *HoldingID);
	}
}

USTCulture* UCharacterSearcher::FindCultureByID(const FString& CultureId)
{
	FScopeLock Lock(&SyncLockCulture);
	auto itor = CultureMap.Find(CultureId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Culture ID \"%s\" not found."), *CultureId);
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterCulture(USTCulture* Culture, const FString& CultureID)
{
	FScopeLock Lock(&SyncLockCulture);
	auto itor = CultureMap.Find(CultureID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("Culture ID \"%s\" is already registered."), *CultureID);
		return false;
	}
	CultureMap.Add(CultureID, Culture);
	UE_LOG(LogTemp, Log, TEXT("Registered Culture ID: \"%s\""), *CultureID);
	return true;
}

void UCharacterSearcher::UnregisterCulture(const FString& CultureID)
{
	FScopeLock Lock(&SyncLockCulture);
	auto itor = CultureMap.Find(CultureID);
	if (itor)
	{
		CultureMap.Remove(CultureID);
		UE_LOG(LogTemp, Log, TEXT("Unregistered Culture ID: \"%s\""), *CultureID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Culture ID \"%s\" not found for unregistration."), *CultureID);
	}
}

USTHouse* UCharacterSearcher::FindHouseByID(const FString& HouseId)
{
	FScopeLock Lock(&SyncLockHouse);
	auto itor = HouseMap.Find(HouseId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("House ID \"%s\" not found."), *HouseId);
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterHouse(USTHouse* House, const FString& HouseID)
{
	FScopeLock Lock(&SyncLockHouse);
	auto itor = HouseMap.Find(HouseID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("House ID \"%s\" is already registered."), *HouseID);
		return false;
	}
	HouseMap.Add(HouseID, House);
	UE_LOG(LogTemp, Log, TEXT("Registered House ID: \"%s\""), *HouseID);
	return true;
}

void UCharacterSearcher::UnregisterHouse(const FString& HouseID)
{
	FScopeLock Lock(&SyncLockHouse);
	auto itor = HouseMap.Find(HouseID);
	if (itor)
	{
		HouseMap.Remove(HouseID);
		UE_LOG(LogTemp, Log, TEXT("Unregistered House ID: \"%s\""), *HouseID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("House ID \"%s\" not found for unregistration."), *HouseID);
	}
}
