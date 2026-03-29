// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndInterfaces/STInteractable.h"
#include "HoldingModel.generated.h"

class UArrowComponent;
class UStaticMeshComponent;
class ASTHolding;

UCLASS(Blueprintable)
class HEROS_OF_ST_API AHoldingModel : public AActor, public ISTInteractable
{
	GENERATED_BODY()
	
public:
	AHoldingModel();
	virtual void Tick(float DeltaTime) override;

	// 鼠标交互接口实现
	virtual void OnHover_Implementation() override;
	virtual void OnCursorAway_Implementation() override;
	virtual void OnCursorPick_Implementation() override;
	virtual void OnCursorDrop_Implementation() override;

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UArrowComponent* ArrowComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UStaticMeshComponent* PlainCircle;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	ASTHolding* Holding;
private:
	UMaterialInterface* HoverOverlayMaterial;
};
