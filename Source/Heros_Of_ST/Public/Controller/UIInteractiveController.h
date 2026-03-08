// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UIInteractiveController.generated.h"

/**
 * 
 */
UCLASS()
class HEROS_OF_ST_API AUIInteractiveController : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UIInteractiveController")
	void LoadGame(const FString& SlotName);
	virtual void LoadGame_Implementation(const FString& SlotName);

	UFUNCTION(BlueprintCallable, Category = "UIInteractiveController")
	void CursorTraceBase();

protected:
	virtual void Tick(float DeltaSeconds) override;

private:
	void UnHoverLastActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	AActor* LastHoveredActor = nullptr;
};
