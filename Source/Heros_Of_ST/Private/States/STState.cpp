// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STState.h"
#include "ResourceManagment/CharacterSearcher.h"

// Sets default values
ASTState::ASTState()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void ASTState::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTState::InitTitles(const TArray<USTTitle*>& NewTitles, ASTHolding* capital)
{
	Titles = NewTitles;
	Captial = capital;
}

void ASTState::SubjectTo(ASTState* Overlord, EOverlordType NewOverlordType)
{
	OverlordState = Overlord;
	OverlordType = NewOverlordType;
}

// Called when the game starts or when spawned
void ASTState::BeginPlay()
{
	Super::BeginPlay();
	// Register this state with the CharacterSearcher in the PlayerState
	auto CharacterSearcher = UCharacterSearcher::Get();
	StateID = CharacterSearcher->GenerateCharacterID(); // 虽然叫CharacterID，但也用来给其他子容器生成唯一ID
	if (!CharacterSearcher->RegisterState(this, StateID))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to register state with ID \"%s\"."), *StateID.ToString());
	}
}

void ASTState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// Unregister this state from the CharacterSearcher
	UCharacterSearcher::Get()->UnregisterState(StateID);
}

