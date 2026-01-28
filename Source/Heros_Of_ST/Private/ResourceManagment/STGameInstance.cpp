// Fill out your copyright notice in the Description page of Project Settings.

#include "Heros_Of_ST/macros.h"
#include "ResourceManagment/CharacterSearcher.h"
#include "ResourceManagment/STGameInstance.h"

void USTGameInstance::Init()
{
	Super::Init();
	// Load rules
	UCharacterSearcher::Get()->LoadRules();
}
