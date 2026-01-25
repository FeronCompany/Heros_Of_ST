// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Characters/STCharacter.h"
#include "States/STHolding.h"
#include "States/STState.h"
#include "States/STTitle.h"
#include "STSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class HEROS_OF_ST_API USTSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	USTSaveGame();
	void PostLoad() override;

	UPROPERTY(SaveGame) TArray<FCharacterSavedData> SavedCharacters;
	UPROPERTY(SaveGame) TArray<FStateSavedData> SavedStates;
	UPROPERTY(SaveGame) TArray<FHoldingSavedData> SavedHoldings;
	UPROPERTY(SaveGame) int32 CurrentSavedVersion;
	UPROPERTY(SaveGame) FString MainCharacterID;
	UPROPERTY(SaveGame) FDateTime SaveTime;
};
