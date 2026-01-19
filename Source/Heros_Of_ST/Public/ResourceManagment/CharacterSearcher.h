// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <atomic>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSearcher.generated.h"

class ASTCharacter;
class ASTState;
class ASTHolding;

/**
 * 游戏中角色的全局搜索器，负责注册和查找角色实例
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
			Instance->AddToRoot(); // 防止GC回收
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
	void ClearAll();

	// States Related
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTState* FindStateByID(const FName& StateId);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterState(ASTState* State, const FName& StateID);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterState(const FName& StateID);

	// Holdings Related
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTHolding* FindHoldingByID(const FName& HoldingId);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterHolding(ASTHolding* Holding, const FName& HoldingID);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterHolding(const FName& HoldingID);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ASTCharacter* currentControlledCharacter = nullptr;

private:
	// Maps for storing characters, states, and holdings
	// Key: ID (FName), Value: Pointer to the object
	// 不需要存储Titles，因为Title是State和Character的属性，生命周期由State管理
	// 几种数据耦合度较高，因此统一管理
	TMap<FName, ASTCharacter*> CharacterMap;
	TMap<FName, ASTState*> StateMap;
	TMap<FName, ASTHolding*> HoldingMap;
	std::atomic<int64> CurrentIDCounter{ 0 };
	FCriticalSection SyncLock;
};
