// Fill out your copyright notice in the Description page of Project Settings.


#include "ResourceManagment/STSaveGame.h"

USTSaveGame::USTSaveGame()
{
	CurrentSavedVersion = 1;
}

void USTSaveGame::PostLoad()
{
	Super::PostLoad();
	// You can add version upgrade logic here if needed in the future
}
