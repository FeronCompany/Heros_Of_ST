// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StructsAndInterfaces/CharAttributes.h"
#include "STCharacter.generated.h"

class USTTitle;

UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character")
	FName CharacterID;
	// 头衔列表
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	TArray<USTTitle*> Titles;
	// 属性
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	FCharAttributes Attributes;
};
