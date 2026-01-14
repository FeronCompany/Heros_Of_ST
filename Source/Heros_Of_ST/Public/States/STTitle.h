// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "STTitle.generated.h"

class ASTCharacter;
class ASTState;

/**
 * 统治者的头衔、称号
 */
UCLASS()
class HEROS_OF_ST_API USTTitle : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	FName TitleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	FString TitleDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	ASTCharacter* TitleHolder{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	ASTState* TitleBelonging{ nullptr };
};
