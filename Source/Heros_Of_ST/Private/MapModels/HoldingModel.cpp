// Fill out your copyright notice in the Description page of Project Settings.


#include "MapModels/HoldingModel.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Heros_Of_ST/macros.h"

// Sets default values
AHoldingModel::AHoldingModel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	RootComponent = StaticMeshComponent;
	ArrowComponent->SetupAttachment(RootComponent);
}

// Called every frame
void AHoldingModel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when the game starts or when spawned
void AHoldingModel::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("HoldingModel %s BeginPlay"), *GetName());
}

