// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/STCharacter.h"
#include "BaseCharacter.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API ABaseCharacter : public ASTCharacter
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	FName CharacterID;
};
