// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/STCharacter.h"
#include "ResourceManagment/CharacterSearcher.h"

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

