// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STState.generated.h"

class USTTitle;

/**
 * Empires, Kingdoms, and States; Not status
 */
UCLASS()
class HEROS_OF_ST_API ASTState : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTState();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "State")
	TArray<USTTitle*> GetTitles() const { return Titles; }

	UFUNCTION(BlueprintCallable, Category = "State")
	void InitTitles(const TArray<USTTitle*>& NewTitles) { Titles = NewTitles; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

private:
	// 所属头衔列表
	TArray<USTTitle*> Titles;
};
