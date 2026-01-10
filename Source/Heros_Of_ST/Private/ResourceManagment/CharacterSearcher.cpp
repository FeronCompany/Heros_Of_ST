// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/CharacterSearcher.h"

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
	UE_LOG(LogTemp, Warning, TEXT("Generated Character ID: \"%s\""), *ID.ToString());
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
	CharacterMap[CharacterID] = Character;
	return true;
}

void UCharacterSearcher::UnregisterCharacter(const FName& CharacterID)
{
	FScopeLock Lock(&SyncLock);
	auto itor = CharacterMap.Find(CharacterID);
	if (itor)
	{
		(*itor)->ConditionalBeginDestroy();
		CharacterMap.Remove(CharacterID);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Character ID \"%s\" not found for unregistration."), *CharacterID.ToString());
	}
}

void UCharacterSearcher::BeginDestroy()
{
	Super::BeginDestroy();
	FScopeLock Lock(&SyncLock);
	for (auto& Pair : CharacterMap)
	{
		if (Pair.Value)
		{
			Pair.Value->ConditionalBeginDestroy();
		}
	}
	CharacterMap.Empty();
}
