// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STHolding.h"

// Sets default values
ASTHolding::ASTHolding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void ASTHolding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when the game starts or when spawned
void ASTHolding::BeginPlay()
{
	Super::BeginPlay();
	
}

