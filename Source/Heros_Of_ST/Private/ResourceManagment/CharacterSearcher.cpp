// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/CharacterSearcher.h"
#include "Characters/STCharacter.h"
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
	ClearCharacters();
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
	if (!RegisterCharacter(SpawnedCharacter, SpawnedCharacter->CharacterID))
	{
		SpawnedCharacter->Destroy();
		return false;
	}
	currentControlledCharacter = SpawnedCharacter;
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

void UCharacterSearcher::ClearCharacters()
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
}
