// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <atomic>
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterSearcher.generated.h"

class ASTCharacter;
class ASTState;
class ASTHolding;
class USaveGame;
struct FCharacterSavedData;
struct FStateSavedData;
struct FHoldingSavedData;
struct FTitleSavedData;

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FSavedDataBriefInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved Data Brief Info")
	FString SlotName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Saved Data Brief Info")
	FDateTime SaveTime;
};

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
	ASTCharacter* FindCharacterByID(const FString& CharacterID);

	FString GenerateID();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterCharacter(ASTCharacter* Character, const FString& CharacterID);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterCharacter(const FString& CharacterID);

	virtual void BeginDestroy() override;

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool LoadSaveData(const FString& SlotName, int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void SaveData(const FString& SlotName, int32 UserIndex);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool DeleteSaveData(const FString& SlotName);

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	TArray<FSavedDataBriefInfo> GetAllSavedFileInfos();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool LoadHistory();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool LoadRules();

	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void ClearAll();

	// States Related
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTState* FindStateByID(const FString& StateId);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterState(ASTState* State, const FString& StateID);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterState(const FString& StateID);

	// Holdings Related
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	ASTHolding* FindHoldingByID(const FString& HoldingId);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	bool RegisterHolding(ASTHolding* Holding, const FString& HoldingID);
	UFUNCTION(BlueprintCallable, Category = "Character Searcher")
	void UnregisterHolding(const FString& HoldingID);

private:
	void OnSaveGameComplete(const FString& SlotName, const int32 UserIndex, bool bSuccess);
	void OnLoadGameComplete(const FString& SlotName, const int32 UserIndex, USaveGame* LoadedSaveGame);
	UWorld* GetGameWorld() const;
	void SetupDatabase(const TArray<FCharacterSavedData>& CharacterDatas,
		const TArray<FStateSavedData>& StateDatas,
		const TArray<FHoldingSavedData>& HoldingDatas);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ASTCharacter* currentControlledCharacter = nullptr;

private:
	// Maps for storing characters, states, and holdings
	// Key: ID (FName), Value: Pointer to the object
	// 不需要存储Titles，因为Title是State和Character的属性，生命周期由State管理
	// 几种数据耦合度较高，因此统一管理
	TMap<FString, ASTCharacter*> CharacterMap;
	TMap<FString, ASTState*> StateMap;
	TMap<FString, ASTHolding*> HoldingMap;
	std::atomic<int64> CurrentIDCounter{ 0 };
	FCriticalSection SyncLockChar;
	FCriticalSection SyncLockState;
	FCriticalSection SyncLockHolding;
};
