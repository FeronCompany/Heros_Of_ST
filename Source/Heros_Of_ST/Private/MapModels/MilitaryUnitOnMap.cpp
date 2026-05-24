// Fill out your copyright notice in the Description page of Project Settings.


#include "MapModels/MilitaryUnitOnMap.h"
#include "Components/ArrowComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AMilitaryUnitOnMap::AMilitaryUnitOnMap()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	RootComponent = SkeletalMeshComponent;
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ArrowComponent->SetupAttachment(RootComponent);

	PlainCircle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlainCircle"));
	PlainCircle->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlainMesh(TEXT("/Engine/BasicShapes/Plane"));
	if (PlainMesh.Succeeded())
	{
		PlainCircle->SetStaticMesh(PlainMesh.Object);
		static ConstructorHelpers::FObjectFinder<UMaterial> PlainMaterial(TEXT("/Game/materials/Interactive/Mat_PickCircle.Mat_PickCircle"));
		if (PlainMaterial.Succeeded()) {
			PlainCircle->SetMaterial(0, PlainMaterial.Object);
		}
	}
	PlainCircle->SetRelativeLocation({ 0, 0, 10.0f });
	PlainCircle->SetVisibility(false);

	UIComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("UIComponent"));
	UIComponent->SetupAttachment(RootComponent);
	UIComponent->SetWidgetSpace(EWidgetSpace::Screen);
	UIComponent->SetDrawSize(FVector2D(60, 30));
	UIComponent->SetRelativeLocation({ 0, 0, 30.0f });
}

// Called every frame
void AMilitaryUnitOnMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMilitaryUnitOnMap::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMilitaryUnitOnMap::Init(USTRegiment* RegimentData)
{
	RegimentDataM = RegimentData;
}

// Called when the game starts or when spawned
void AMilitaryUnitOnMap::BeginPlay()
{
	Super::BeginPlay();

}

