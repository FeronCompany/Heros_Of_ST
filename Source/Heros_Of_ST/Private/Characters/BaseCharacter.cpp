// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BaseCharacter.h"
#include "ResourceManagment/CharacterSearcher.h"

void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	// Register this character in the global searcher
	//if (UCharacterSearcher* Searcher = GetGameInstance()->GetSubsystem<UCharacterSearcher>()) // TODO...
	//{
	//	if (CharacterID.IsNone())
	//	{
	//		CharacterID = Searcher->GenerateCharacterID();
	//	}
	//	if (!Searcher->RegisterCharacter(this, CharacterID))
	//	{
	//		UE_LOG(LogTemp, Error, TEXT("Failed to register character with ID \"%s\"."), *CharacterID.ToString());
	//	}
	//}
}

void ABaseCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// Unregister this character from the global searcher
	//if (UCharacterSearcher* Searcher = GetGameInstance()->GetSubsystem<UCharacterSearcher>()) // TODO...
	//{
	//	Searcher->UnregisterCharacter(CharacterID);
	//}
}
