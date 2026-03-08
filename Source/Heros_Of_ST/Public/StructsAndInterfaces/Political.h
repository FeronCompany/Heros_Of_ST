

#pragma once

#include "CoreMinimal.h"
#include "Political.generated.h"

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FPopulationUnit
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Population Unit")
	FString PopID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Population Unit")
	FString CultureID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Population Unit")
	int32 Population;
};
