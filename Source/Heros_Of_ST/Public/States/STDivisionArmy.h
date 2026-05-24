// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "STDivisionArmy.generated.h"

UENUM(Blueprintable)
enum class ERegimentType : uint8
{
	LightInfantry UMETA(DisplayName = "LightInfantry"),
	HeavyInfantry UMETA(DisplayName = "HeavyInfantry"),
	Archery UMETA(DisplayName = "Archery"),
	LightCavalry UMETA(DisplayName = "LightCavalry"),
	HeavyCavalry UMETA(DisplayName = "HeavyCavalry"),
	HorseArcher UMETA(DisplayName = "HorseArcher"),
	Siege UMETA(DisplayName = "Siege"),
	MAX UMETA(Hidden),
};

USTRUCT(Blueprintable)
struct HEROS_OF_ST_API FSTRegimentData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString RegimentID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString RegimentName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Experience = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxExperience = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Size = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxSize = 0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ERegimentType RegimentType = ERegimentType::MAX;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString RegimentLeaderID;
};

USTRUCT(Blueprintable)
struct HEROS_OF_ST_API FSTDivisionArmyData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FSTRegimentData> RegimentData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyLeaderID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString SecondArmyLeaderID;
};

UCLASS(Blueprintable)
class HEROS_OF_ST_API USTRegiment : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSTRegimentData Data;
};

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API USTDivisionArmy : public UObject
{
	GENERATED_BODY()
public:
	FSTDivisionArmyData ToFSTDivisionArmyData();
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<FString, USTRegiment*> RegimentData;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ArmyLeaderID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString SecondArmyLeaderID;
};
