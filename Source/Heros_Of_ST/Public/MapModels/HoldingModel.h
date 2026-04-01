// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndInterfaces/STInteractable.h"
#include "HoldingModel.generated.h"

class UArrowComponent;
class UStaticMeshComponent;
class ASTHolding;
class UWidgetComponent;

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

	void InitHoldingDispaly();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HoldingModel")
	UArrowComponent* ArrowComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HoldingModel")
	UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HoldingModel")
	UStaticMeshComponent* PlainCircle;
	UPROPERTY(EditAnywhere, Category = "HoldingModel")
	UWidgetComponent* UIComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HoldingModel")
	ASTHolding* Holding;
private:
	UMaterialInterface* HoverOverlayMaterial;
};
