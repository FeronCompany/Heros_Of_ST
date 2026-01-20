// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/STCharacter.h"
#include "ResourceManagment/CharacterSearcher.h"
#include "Heros_Of_ST/macros.h"
#include "States/STTitle.h"

// Sets default values
ASTCharacter::ASTCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTCharacter::BeginPlay()
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

void ASTCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// Unregister this character from the CharacterSearcher
	UCharacterSearcher::Get()->UnregisterCharacter(CharacterID);
}

// Called every frame
void ASTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTCharacter::Death(EDeathReason ActualDeathReason)
{
	CharacterStatus = ECharacterStatus::Dead;
	DeathReason = ActualDeathReason;
	PRINT_SCREEN("Character %s has died due to %s.",
		*CharacterID.ToString(),
		*StaticEnum<EDeathReason>()->GetNameStringByValue(static_cast<uint8>(DeathReason)));
	// TODO: Handle death logic based on DeathReason
}

bool ASTCharacter::AccuireTitle(USTTitle* NewTitle, bool IsInitial)
{
	if (NewTitle && !Titles.Contains(NewTitle))
	{
		Titles.Add(NewTitle);
		NewTitle->TitleHolder = this;
		PRINT_SCREEN("Character %s has acquired title: %s.",
			*CharacterID.ToString(),
			*NewTitle->TitleName);
		if (!IsInitial)
		{
			// TODO: Handle any additional logic for acquiring a new title (e.g., notifications, effects)
		}
		return true;
	}
	return false;
}

bool ASTCharacter::RelinquishTitle(USTTitle* TitleToRelinquish, bool IsEndGame)
{
	if (TitleToRelinquish && Titles.Contains(TitleToRelinquish))
	{
		Titles.Remove(TitleToRelinquish);
		TitleToRelinquish->TitleHolder = nullptr;
		PRINT_SCREEN("Character %s has relinquished title: %s.",
			*CharacterID.ToString(),
			*TitleToRelinquish->TitleName);
		if (!IsEndGame)
		{
			// TODO: Handle any additional logic for relinquishing a title (e.g., notifications, effects)
		}
	}
	return true;
}

