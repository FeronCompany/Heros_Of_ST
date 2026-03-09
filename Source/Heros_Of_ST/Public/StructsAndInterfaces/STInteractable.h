

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/Interface.h"
#include "STInteractable.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class USTInteractable : public UInterface
{
    GENERATED_BODY()
};

class ISTInteractable
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnHover();
    virtual void OnHover_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
    void OnCursorAway();
	virtual void OnCursorAway_Implementation() {}
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnCursorPick();
	virtual void OnCursorPick_Implementation() {}

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnCursorDrop();
	virtual void OnCursorDrop_Implementation() {}
};
