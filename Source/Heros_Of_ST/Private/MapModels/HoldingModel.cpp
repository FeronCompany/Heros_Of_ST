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

	// 设置默认的悬停叠加材质
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		HoverOverlayMat(TEXT("/Game/materials/Interactive/OutlinerMaterial.OutlinerMaterial"));
	if (HoverOverlayMat.Succeeded())
	{
		HoverOverlayMaterial = HoverOverlayMat.Object;
	}
}

// Called every frame
void AHoldingModel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHoldingModel::OnHover_Implementation()
{
	StaticMeshComponent->SetOverlayMaterial(HoverOverlayMaterial);
}

void AHoldingModel::OnCursorAway_Implementation()
{
	StaticMeshComponent->SetOverlayMaterial(nullptr);
}

void AHoldingModel::OnCursorPick_Implementation()
{
	PRINT_SCREEN("Picked HoldingModel: %s", *GetName());
}

void AHoldingModel::OnCursorDrop_Implementation()
{
	PRINT_SCREEN("Dropped HoldingModel: %s", *GetName());
}

// Called when the game starts or when spawned
void AHoldingModel::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("HoldingModel %s BeginPlay"), *GetName());
}

