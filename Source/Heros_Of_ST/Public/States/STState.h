// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "States/STTitle.h"
#include "STState.generated.h"

class ASTHolding;

UENUM(Blueprintable)
enum class EOverlordType : uint8
{
	Independent UMETA(DisplayName = "Independent"),
	Administrative UMETA(DisplayName = "Administrative"),
	Vassalage UMETA(DisplayName = "Vassalage"),
	Tributary UMETA(DisplayName = "Tributary"),
	MAX UMETA(Hidden)
};

UENUM(Blueprintable)
enum class EStateLevel : uint8
{
	Default UMETA(DisplayName = "Default"),
	Commoner UMETA(DisplayName = "Commoner"),	// None Government Organizations
	County UMETA(DisplayName = "County"), 		// County Level State
	Duchy UMETA(DisplayName = "Duchy"), 		// Duchy Level State
	Kingdom UMETA(DisplayName = "Kingdom"), 	// Kingdom Level State
	Empire UMETA(DisplayName = "Empire"), 		// Empire Level State
	MAX UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FStateSavedData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	FString StateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	FName StateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	FString OverlordStateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	EOverlordType OverlordType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	TArray<FTitleSavedData> Titles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	FString CapitalHoldingID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State Saved Data")
	EStateLevel StateLevel;
};

/**
 * Empires, Kingdoms, and States; Not status
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTState : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTState();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "State")
	TArray<USTTitle*> GetTitles() const { return Titles; }

	UFUNCTION(BlueprintCallable, Category = "State")
	ASTHolding* GetCaptial() const { return Captial; }

	UFUNCTION(BlueprintCallable, Category = "State")
	void InitTitles(const TArray<USTTitle*>& NewTitles, ASTHolding* capital);

	UFUNCTION(BlueprintCallable, Category = "State")
	void SubjectTo(ASTState* Overlord, EOverlordType NewOverlordType, bool IsInitial);

	UFUNCTION(BlueprintCallable, Category = "State")
	void AbandonOverlord();

	UFUNCTION(BlueprintCallable, Category = "State")
	void BreakTitle(bool IsEndGame);

	UFUNCTION(BlueprintCallable, Category = "State")
	TArray<ASTHolding*> GetAllHoldings() const;

	UFUNCTION(BlueprintCallable, Category = "State")
	FStateSavedData GetSavedStateData() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	FString StateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	FName StateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	ASTState* OverlordState{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	EOverlordType OverlordType{ EOverlordType::Independent };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	TArray<ASTState*> VassalStates;
	// 治所
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	ASTHolding* Captial{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	EStateLevel StateLevel{ EStateLevel::Default };

private:
	// 所属头衔列表 * 初始化后不允许修改
	TArray<USTTitle*> Titles;
};
