// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <atomic>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSearcher.generated.h"

class ASTCharacter;

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API UCharacterSearcher : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	static UCharacterSearcher* Get()
	{
		static UCharacterSearcher* Instance = nullptr;
		if (!Instance)
		{
			Instance = NewObject<UCharacterSearcher>(GetTransientPackage(), NAME_None);
			Instance->AddToRoot(); // ∑¿÷πGCªÿ ’
		}
		return Instance;
	}

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTCharacter* FindCharacterByID(const FName& CharacterID);

	FName GenerateCharacterID();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterCharacter(ASTCharacter* Character, const FName& CharacterID);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterCharacter(const FName& CharacterID);

	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool LoadCharacterListFromSaveData();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void SaveCharacterListToSaveData();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void ClearCharacters();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ASTCharacter* currentControlledCharacter = nullptr;

private:
	TMap<FName, ASTCharacter*> CharacterMap;
	std::atomic<int64> CurrentIDCounter{ 0 };
	FCriticalSection SyncLock;
};
