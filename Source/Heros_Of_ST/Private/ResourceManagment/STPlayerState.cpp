// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/STPlayerState.h"
#include "ResourceManagment/CharacterSearcher.h"

void ASTPlayerState::BeginPlay()
{
	Super::BeginPlay();
}

void ASTPlayerState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UCharacterSearcher::Get()->ClearAll("ASTPlayerState::EndPlay");
}
