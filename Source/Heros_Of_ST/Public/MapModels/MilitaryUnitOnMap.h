// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MilitaryUnitOnMap.generated.h"

class UArrowComponent;
class UStaticMeshComponent;
class UWidgetComponent;
struct FSTRegimentData;
class USTRegiment;

UCLASS()
class HEROS_OF_ST_API AMilitaryUnitOnMap : public APawn
{
	GENERATED_BODY()

public:
	AMilitaryUnitOnMap();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "AMilitaryUnitOnMap")
	void Init(USTRegiment* RegimentData);

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AMilitaryUnitOnMap")
	UArrowComponent* ArrowComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AMilitaryUnitOnMap")
	USkeletalMeshComponent* SkeletalMeshComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AMilitaryUnitOnMap")
	UStaticMeshComponent* PlainCircle;
	UPROPERTY(EditAnywhere, Category = "AMilitaryUnitOnMap")
	UWidgetComponent* UIComponent;

private:
	USTRegiment* RegimentDataM;
};
