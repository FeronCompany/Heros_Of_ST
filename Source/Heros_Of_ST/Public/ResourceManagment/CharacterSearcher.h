// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <atomic>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Characters/STCharacter.h"
#include "CharacterSearcher.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API UCharacterSearcher : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTCharacter* FindCharacterByID(const FName& CharacterID);

	FName GenerateCharacterID();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterCharacter(ASTCharacter* Character, const FName& CharacterID);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterCharacter(const FName& CharacterID);

	virtual void BeginDestroy() override;

private:
	TMap<FName, ASTCharacter*> CharacterMap;
	std::atomic<int64> CurrentIDCounter{ 0 };
	FCriticalSection SyncLock;
};
