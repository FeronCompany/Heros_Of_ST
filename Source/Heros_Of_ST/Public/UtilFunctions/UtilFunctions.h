

#pragma once

#include "CoreMinimal.h"
#include "StructsAndInterfaces/Storage.h"
#include "UtilFunctions.generated.h"

UCLASS(Blueprintable)
class HEROS_OF_ST_API UUtilFunctions : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "Enum Utilities")
	static FText GetEnumDisplayName(StorageType type);
};
