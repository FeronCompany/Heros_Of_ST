// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STHolding.generated.h"

class ASTState;

UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTHolding : public AActor
{
	GENERATED_BODY()
	
public:	
	ASTHolding();
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	ASTState* OwnerState{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	FName HoldingID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Holding")
	FString HoldingName;
};
