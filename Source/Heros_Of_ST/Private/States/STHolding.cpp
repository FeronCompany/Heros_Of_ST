// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STHolding.h"
#include "States/STState.h"

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

FHoldingSavedData ASTHolding::GetSavedHoldingData() const
{
	FHoldingSavedData SavedData;
	SavedData.HoldingID = HoldingID;
	SavedData.HoldingName = HoldingName;
	SavedData.OwningStateID = OwnerState ? OwnerState->StateID : FString();
	SavedData.Location = Location;
	return  SavedData;
}

bool ASTHolding::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FHoldingSavedData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON object provided for parsing HoldingSavedData."));
		return false;
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("HoldingID")))
	{
		OutSavedData.HoldingID = JsonObject->GetStringField(TEXT("HoldingID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("HoldingName")))
	{
		OutSavedData.HoldingName = FName(*JsonObject->GetStringField(TEXT("HoldingName")));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("OwningStateID")))
	{
		OutSavedData.OwningStateID = JsonObject->GetStringField(TEXT("OwningStateID"));
	}
	if (JsonObject->HasTypedField<EJson::Object>(TEXT("Location")))
	{
		TSharedPtr<FJsonObject> LocationObject = JsonObject->GetObjectField(TEXT("Location"));
		if (LocationObject.IsValid())
		{
			int32 X = LocationObject->GetIntegerField(TEXT("X"));
			int32 Y = LocationObject->GetIntegerField(TEXT("Y"));
			OutSavedData.Location = FIntVector2(X, Y);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Invalid Location object in JSON for HoldingSavedData."));
			return false;
		}
	}
	return true;
}

// Called when the game starts or when spawned
void ASTHolding::BeginPlay()
{
	Super::BeginPlay();
}

void ASTHolding::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

