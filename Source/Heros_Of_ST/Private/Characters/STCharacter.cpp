// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/STCharacter.h"
#include "Heros_Of_ST/macros.h"
#include "States/STTitle.h"

// Sets default values
ASTCharacter::ASTCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASTCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASTCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void ASTCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASTCharacter::Death(EDeathReason ActualDeathReason)
{
	CharacterStatus = ECharacterStatus::Dead;
	DeathReason = ActualDeathReason;
	PRINT_SCREEN("Character %s has died due to %s.",
		*CharacterID,
		*StaticEnum<EDeathReason>()->GetNameStringByValue(static_cast<uint8>(DeathReason)));
	// TODO: Handle death logic based on DeathReason
}

bool ASTCharacter::AccuireTitle(USTTitle* NewTitle, bool IsInitial)
{
	if (NewTitle && !Titles.Contains(NewTitle))
	{
		Titles.Add(NewTitle);
		NewTitle->TitleHolder = this;
		PRINT_SCREEN("Character %s has acquired title: %s.",
			*CharacterID,
			*NewTitle->TitleName);
		if (!IsInitial)
		{
			// TODO: Handle any additional logic for acquiring a new title (e.g., notifications, effects)
		}
		return true;
	}
	return false;
}

bool ASTCharacter::RelinquishTitle(USTTitle* TitleToRelinquish, bool IsEndGame)
{
	if (TitleToRelinquish && Titles.Contains(TitleToRelinquish))
	{
		Titles.Remove(TitleToRelinquish);
		TitleToRelinquish->TitleHolder = nullptr;
		PRINT_SCREEN("Character %s has relinquished title: %s.",
			*CharacterID,
			*TitleToRelinquish->TitleName);
		if (!IsEndGame)
		{
			// TODO: Handle any additional logic for relinquishing a title (e.g., notifications, effects)
		}
	}
	return true;
}

FCharacterSavedData ASTCharacter::GetSavedData() const
{
	FCharacterSavedData SavedData;
	SavedData.CharacterID = CharacterID;
	SavedData.CharacterName = CharacterName;
	for (const auto& Title : Titles)
	{
		if (Title)
		{
			SavedData.TitleIDs.Add(Title->TitleName);
		}
	}
	SavedData.Attributes = Attributes;
	SavedData.CharacterStatus = CharacterStatus;
	SavedData.DeathReason = DeathReason;
	return SavedData;
}

bool ASTCharacter::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FCharacterSavedData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON object provided for character parsing."));
		return false;
	}
	// Parse CharacterID
	if (JsonObject->HasField(TEXT("CharacterID")))
	{
		OutSavedData.CharacterID = JsonObject->GetStringField(TEXT("CharacterID"));
	}
	// Parse CharacterName
	if (JsonObject->HasField(TEXT("CharacterName")))
	{
		OutSavedData.CharacterName = FName(*JsonObject->GetStringField(TEXT("CharacterName")));
	}
	// Parse Titles
	if (JsonObject->HasField(TEXT("TitleIDs")))
	{
		const TArray<TSharedPtr<FJsonValue>> TitleArray = JsonObject->GetArrayField(TEXT("TitleIDs"));
		for (const auto& TitleValue : TitleArray)
		{
			FString TitleID = TitleValue->AsString();
			if (!TitleID.IsEmpty())
			{
				OutSavedData.TitleIDs.Add(TitleID);
			}
		}
	}
	// Parse Attributes
	if (JsonObject->HasField(TEXT("Attributes")))
	{
		const TSharedPtr<FJsonObject> AttributesObject = JsonObject->GetObjectField(TEXT("Attributes"));
		if (AttributesObject->HasField(TEXT("Health")))
		{
			OutSavedData.Attributes.Health = AttributesObject->GetIntegerField(TEXT("Health"));
		}
		if (AttributesObject->HasField(TEXT("Comprehension")))
		{
			OutSavedData.Attributes.Comprehension = AttributesObject->GetIntegerField(TEXT("Comprehension"));
		}
		if (AttributesObject->HasField(TEXT("Ingenuity")))
		{
			OutSavedData.Attributes.Ingenuity = AttributesObject->GetIntegerField(TEXT("Ingenuity"));
		}
		if (AttributesObject->HasField(TEXT("Perception")))
		{
			OutSavedData.Attributes.Perception = AttributesObject->GetIntegerField(TEXT("Perception"));
		}
		if (AttributesObject->HasField(TEXT("Willpower")))
		{
			OutSavedData.Attributes.Willpower = AttributesObject->GetIntegerField(TEXT("Willpower"));
		}
		if (AttributesObject->HasField(TEXT("Charisma")))
		{
			OutSavedData.Attributes.Charisma = AttributesObject->GetIntegerField(TEXT("Charisma"));
		}
		if (AttributesObject->HasField(TEXT("Strategy")))
		{
			OutSavedData.Attributes.Strategy = AttributesObject->GetIntegerField(TEXT("Strategy"));
		}
		if (AttributesObject->HasField(TEXT("Governance")))
		{
			OutSavedData.Attributes.Governance = AttributesObject->GetIntegerField(TEXT("Governance"));
		}
	}
	// Parse CharacterStatus
	if (JsonObject->HasField(TEXT("CharacterStatus")))
	{
		FString StatusString = JsonObject->GetStringField(TEXT("CharacterStatus"));
		OutSavedData.CharacterStatus = (ECharacterStatus)StaticEnum<ECharacterStatus>()->GetValueByNameString(StatusString);
	}
	// Parse DeathReason
	if (JsonObject->HasField(TEXT("DeathReason")))
	{
		FString DeathReasonString = JsonObject->GetStringField(TEXT("DeathReason"));
		OutSavedData.DeathReason = (EDeathReason)StaticEnum<EDeathReason>()->GetValueByNameString(DeathReasonString);
	}
	return true;
}

