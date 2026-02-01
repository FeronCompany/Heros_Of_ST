// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "STHouse.generated.h"

class ASTCharacter;

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FHouseSavedData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	FString HouseID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	FName HouseName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	FName Motto;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	//TArray<FString> MemberIDs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	FString LeaderID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House Saved Data")
	FString ParentHouseID;
};

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API USTHouse : public UObject
{
	GENERATED_BODY()
public:
	FHouseSavedData GetSavedHouseData() const;
	static bool ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FHouseSavedData& OutSavedData);

	UFUNCTION(BlueprintCallable, Category = "House")
	bool AddMember(ASTCharacter* NewMember, bool IsInitial);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	FString HouseID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	FName HouseName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	FName Motto;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	TArray<ASTCharacter*> Members;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	ASTCharacter* Leader;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "House")
	USTHouse* ParentHouse;
};
