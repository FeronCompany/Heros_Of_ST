// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/CharacterSearcher.h"
#include "Characters/STCharacter.h"
#include "States/STHolding.h"
#include "States/STState.h"
#include "States/STTitle.h"
#include "Heros_Of_ST/macros.h"

ASTCharacter* UCharacterSearcher::FindCharacterByID(const FName& CharacterID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found."), *CharacterID.ToString());
		return nullptr;
	}
}

FName UCharacterSearcher::GenerateCharacterID()
{
    FName ID = *FString::FromInt(CurrentIDCounter++);
	//UE_LOG(LogTemp, Display, TEXT("Generated Character ID: \"%s\""), *ID.ToString());
    return ID;
}

bool UCharacterSearcher::RegisterCharacter(ASTCharacter* Character, const FName& CharacterID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("Character ID \"%s\" is already registered."), *CharacterID.ToString());
		return false;
	}
	CharacterMap.Add(CharacterID, Character);
	PRINT_SCREEN("Registered Character ID: \"%s\"", *CharacterID.ToString());
	return true;
}

void UCharacterSearcher::UnregisterCharacter(const FName& CharacterID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		CharacterMap.Remove(CharacterID);
		PRINT_SCREEN("Unregistered Character ID: \"%s\"", *CharacterID.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found for unregistration."), *CharacterID.ToString());
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
	ASTHolding* DebugHolding = World->SpawnActor<ASTHolding>();
	DebugHolding->HoldingID = GenerateCharacterID();
	DebugHolding->HoldingName = TEXT("Xiaoyao City");
	USTTitle* DebugTitle = NewObject<USTTitle>(DebugState);
	DebugTitle->TitleName = TEXT("Xiayo Governor");
	DebugTitle->TitleDescription = TEXT("This is a debug title.");
	DebugTitle->TitleRank = ETitleRank::Count;
	// 关联Title、State和Holding
	DebugHolding->OwnerState = DebugState; // holding只与基层state关联
	DebugState->InitTitles({ DebugTitle }, DebugHolding);
	currentControlledCharacter->AccuireTitle(DebugTitle, true);

	// Placeholder for loading character list from save data
	// TODO: Implement actual loading logic here
	PRINT_SCREEN("Loaded character list from save data (placeholder).");
	return true;
}

void UCharacterSearcher::SaveCharacterListToSaveData()
{
	// Placeholder for saving character list to save data
	// TODO: Implement actual saving logic here
	PRINT_SCREEN("Saved character list to save data (placeholder).");
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

ASTState* UCharacterSearcher::FindStateByID(const FName& StateId)
{
	FScopeLock Lock(&SyncLock);
	auto itor = StateMap.Find(StateId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("State ID \"%s\" not found."), *StateId.ToString());
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterState(ASTState* State, const FName& StateID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = StateMap.Find(StateID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("State ID \"%s\" is already registered."), *StateID.ToString());
		return false;
	}
	StateMap.Add(StateID, State);
	PRINT_SCREEN("Registered State ID: \"%s\"", *StateID.ToString());
	return true;
}

void UCharacterSearcher::UnregisterState(const FName& StateID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = StateMap.Find(StateID);
	if (itor)
	{
		StateMap.Remove(StateID);
		PRINT_SCREEN("Unregistered State ID: \"%s\"", *StateID.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("State ID \"%s\" not found for unregistration."), *StateID.ToString());
	}
}

ASTHolding* UCharacterSearcher::FindHoldingByID(const FName& HoldingId)
{
	FScopeLock Lock(&SyncLock);
	auto itor = HoldingMap.Find(HoldingId);
	if (itor)
	{
		return *itor;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Holding ID \"%s\" not found."), *HoldingId.ToString());
		return nullptr;
	}
}

bool UCharacterSearcher::RegisterHolding(ASTHolding* Holding, const FName& HoldingID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = HoldingMap.Find(HoldingID);
	if (itor)
	{
		UE_LOG(LogTemp, Error, TEXT("Holding ID \"%s\" is already registered."), *HoldingID.ToString());
		return false;
	}
	HoldingMap.Add(HoldingID, Holding);
	PRINT_SCREEN("Registered Holding ID: \"%s\"", *HoldingID.ToString());
	return true;
}

void UCharacterSearcher::UnregisterHolding(const FName& HoldingID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = HoldingMap.Find(HoldingID);
	if (itor)
	{
		HoldingMap.Remove(HoldingID);
		PRINT_SCREEN("Unregistered Holding ID: \"%s\"", *HoldingID.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Holding ID \"%s\" not found for unregistration."), *HoldingID.ToString());
	}
}
