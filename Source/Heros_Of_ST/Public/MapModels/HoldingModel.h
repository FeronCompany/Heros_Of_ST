// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HoldingModel.generated.h"

class UArrowComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class HEROS_OF_ST_API AHoldingModel : public AActor
{
	GENERATED_BODY()
	
public:
	AHoldingModel();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UArrowComponent* ArrowComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UStaticMeshComponent* StaticMeshComponent;
	FString HoldingID;
};
