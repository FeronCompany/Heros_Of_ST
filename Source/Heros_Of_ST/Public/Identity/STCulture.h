// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "STCulture.generated.h"

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FSTCultureData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture Data")
	FString CultureID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture Data")
	FName CultureName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture Data")
	FName Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture Data")
	FString ParentCultureID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture Data")
	FString SecondaryParentCultureID;
};

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API USTCulture : public UObject
{
	GENERATED_BODY()
public:
	FSTCultureData GetSavedCultureData() const;
	static bool ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FSTCultureData& OutSavedData);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture")
	FString CultureID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture")
	FName CultureName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture")
	FName Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture")
	USTCulture* ParentCulture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Culture")
	USTCulture* SecondaryParentCulture;
};
