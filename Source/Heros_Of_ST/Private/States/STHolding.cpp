// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STHolding.h"
#include "ResourceManagment/CharacterSearcher.h"

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
	// Register this holding with the CharacterSearcher in the PlayerState
	auto CharacterSearcher = UCharacterSearcher::Get();
	HoldingID = CharacterSearcher->GenerateCharacterID();
	if (!CharacterSearcher->RegisterHolding(this, HoldingID))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to register holding with ID \"%s\"."), *HoldingID.ToString());
	}
}

void ASTHolding::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// Unregister this holding from the CharacterSearcher
	UCharacterSearcher::Get()->UnregisterHolding(HoldingID);
}

