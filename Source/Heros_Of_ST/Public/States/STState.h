// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STState.generated.h"

class USTTitle;
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
	void SubjectTo(ASTState* Overlord, EOverlordType NewOverlordType);

	UFUNCTION(BlueprintCallable, Category = "State")
	void BreakTitle(bool IsEndGame);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	FName StateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	FString StateName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	ASTState* OverlordState{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	EOverlordType OverlordType{ EOverlordType::Independent };
	// 治所
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "State")
	ASTHolding* Captial{ nullptr };

private:
	// 所属头衔列表 * 初始化后不允许修改
	TArray<USTTitle*> Titles;
};
