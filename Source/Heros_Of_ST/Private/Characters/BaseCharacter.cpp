// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseCharacter.h"
#include "ResourceManagment/CharacterSearcher.h"

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	// Register this character with the CharacterSearcher in the PlayerState
	auto CharacterSearcher = UCharacterSearcher::Get();
	CharacterID = CharacterSearcher->GenerateCharacterID();
	if (!CharacterSearcher->RegisterCharacter(this, CharacterID))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to register character with ID \"%s\"."), *CharacterID.ToString());
	}
}

void ABaseCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// Unregister this character from the CharacterSearcher
	UCharacterSearcher::Get()->UnregisterCharacter(CharacterID);
}
