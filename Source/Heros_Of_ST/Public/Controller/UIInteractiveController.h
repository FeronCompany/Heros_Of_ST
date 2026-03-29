// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UIInteractiveController.generated.h"

class ASTCharacter;
class ASTHolding;

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
	UFUNCTION(BlueprintCallable, Category = "UIInteractiveController")
	void PickCheckBase();

	UFUNCTION(BlueprintCallable, Category = "UIInteractiveController")
	void RemoveFocus();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UIInteractiveController")
	void DispalyCharacterInfo(const ASTCharacter* CharacterInfo);
	virtual void DispalyCharacterInfo_Implementation(const ASTCharacter* CharacterInfo) {};
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UIInteractiveController")
	void HideCharacterInfo();
	virtual void HideCharacterInfo_Implementation() {};

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UIInteractiveController")
	void DispalyHoldingInfo(const ASTHolding* HoldingInfo);
	virtual void DispalyHoldingInfo_Implementation(const ASTHolding* HoldingInfo) {};
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UIInteractiveController")
	void HideHoldingInfo();
	virtual void HideHoldingInfo_Implementation() {};

protected:
	virtual void Tick(float DeltaSeconds) override;

private:
	void UnHoverLastActor();
	void UnPickLastActor();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	AActor* LastHoveredActor = nullptr;
	AActor* LastPickedActor = nullptr;
};
