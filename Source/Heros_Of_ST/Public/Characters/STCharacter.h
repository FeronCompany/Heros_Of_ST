// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndInterfaces/CharAttributes.h"
#include "STCharacter.generated.h"

class USTTitle;
class FJsonObject;

UENUM(BlueprintType)
enum class ECharacterStatus : uint8
{
	Healthy UMETA(DisplayName = "Healthy"),
	Wounded  UMETA(DisplayName = "Wounded"),
	Ill  UMETA(DisplayName = "Ill"),
	Disabled  UMETA(DisplayName = "Disabled"),
	Dead  UMETA(DisplayName = "Dead"),
	MAX UMETA(Hidden)
};

UENUM(BlueprintType)
enum class EDeathReason : uint8
{
	Alive  UMETA(DisplayName = "Alive"),
	Natural UMETA(DisplayName = "Natural"),
	Disease  UMETA(DisplayName = "Disease"),
	KIA  UMETA(DisplayName = "KIA"),
	Murder  UMETA(DisplayName = "Murder"),
	Disappearance  UMETA(DisplayName = "Disappearance"),
	Execution  UMETA(DisplayName = "Execution"),
	NaturalDisaster  UMETA(DisplayName = "Natural Disaster"),
	Accident  UMETA(DisplayName = "Accident"),
	Slaughter  UMETA(DisplayName = "Slaughter"),
	MAX UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FCharacterSavedData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	FString CharacterID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	FName CharacterName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	TArray<FString> TitleIDs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	FCharAttributes Attributes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	ECharacterStatus CharacterStatus;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character Saved Data")
	EDeathReason DeathReason;
};

UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Character")
	void Death(EDeathReason ActualDeathReason);

	UFUNCTION(BlueprintCallable, Category = "Character")
	bool AccuireTitle(USTTitle* NewTitle, bool IsInitial);
	UFUNCTION(BlueprintCallable, Category = "Character")
	bool RelinquishTitle(USTTitle* TitleToRelinquish, bool IsEndGame);

	UFUNCTION(BlueprintCallable, Category = "Character")
	FCharacterSavedData GetSavedData() const;

	static bool ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FCharacterSavedData& OutSavedData);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	FString CharacterID;
	// Character名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FName CharacterName;
	// 头衔列表
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	TArray<USTTitle*> Titles;
	// 属性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FCharAttributes Attributes;
	// 状态
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	ECharacterStatus CharacterStatus = ECharacterStatus::Healthy;
	// 死亡原因
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	EDeathReason DeathReason = EDeathReason::Alive;
};
