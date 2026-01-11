// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/STPlayerState.h"
#include "ResourceManagment/CharacterSearcher.h"

void ASTPlayerState::BeginPlay()
{
	Super::BeginPlay();
	if(!UCharacterSearcher::Get()->LoadCharacterListFromSaveData())
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load character list from save data in PlayerState."));
	}
}

void ASTPlayerState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UCharacterSearcher::Get()->ClearCharacters();
}
