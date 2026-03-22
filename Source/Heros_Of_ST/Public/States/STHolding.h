// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndInterfaces/Political.h"
#include "StructsAndInterfaces/Storage.h"
#include "STHolding.generated.h"

class ASTState;
class ASTCharacter;

UENUM(Blueprintable)
enum class HoldingStatus : uint8
{
	Normal UMETA(DisplayName = "Normal"),
	Destroyed UMETA(DisplayName = "Destroyed"),
	UnderSiege UMETA(DisplayName = "Under Siege"),
	Looted UMETA(DisplayName = "Looted"),
	Prosperous UMETA(DisplayName = "Prosperous"),
	MAX UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FHoldingSavedData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	FString HoldingID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	FName HoldingName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	FString OwningStateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	FIntVector2 Location;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	TMap<FString, FPopulationUnit> Pops; // Population by culture ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	int32 TotalPopulation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	int32 ControlLevel; // 0-100, representing the level of control the owning state has over this holding
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	TMap<StorageType, int32> Resources; // Resources by type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	HoldingStatus Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding Saved Data")
	int32 GarrisonSize;
};

UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTHolding : public AActor
{
	GENERATED_BODY()
	
public:	
	ASTHolding();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Holding")
	FHoldingSavedData GetSavedHoldingData() const;
	UFUNCTION(BlueprintCallable, Category = "Holding")
	ASTCharacter* GetHolder() const;

	static bool ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FHoldingSavedData& OutSavedData);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	ASTState* OwnerState{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	FString HoldingID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	FName HoldingName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	FIntVector2 Location;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	TMap<FString, FPopulationUnit> Pops; // Population by culture ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	int32 TotalPopulation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	int32 ControlLevel; // 0-100, representing the level of control the owning state has over this holding
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	TMap<StorageType, int32> Resources; // Resources by type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	HoldingStatus Status;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	int32 GarrisonSize;
};
