// Fill out your copyright notice in the Description page of Project Settings.

#include "Characters/STCharacter.h"
#include "Identity/STHouse.h"

FHouseSavedData USTHouse::GetSavedHouseData() const
{
	FHouseSavedData Data;
	Data.HouseID = HouseID;
	Data.HouseName = HouseName;
	Data.Motto = Motto;
	Data.LeaderID = Leader ? Leader->CharacterID : FString();
	Data.ParentHouseID = ParentHouse ? ParentHouse->HouseID : FString();
	return Data;
}

bool USTHouse::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FHouseSavedData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("USTHouse::ParseFromJson: Invalid JsonObject"));
		return false;
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("HouseID")))
	{
		OutSavedData.HouseID = JsonObject->GetStringField(TEXT("HouseID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("HouseName")))
	{
		OutSavedData.HouseName = FName(*JsonObject->GetStringField(TEXT("HouseName")));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("Motto")))
	{
		OutSavedData.Motto = FName(*JsonObject->GetStringField(TEXT("Motto")));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("LeaderID")))
	{
		OutSavedData.LeaderID = JsonObject->GetStringField(TEXT("LeaderID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("ParentHouseID")))
	{
		OutSavedData.ParentHouseID = JsonObject->GetStringField(TEXT("ParentHouseID"));
	}
	return true;
}

bool USTHouse::AddMember(ASTCharacter* NewMember, bool IsInitial)
{
	if (!NewMember)
	{
		UE_LOG(LogTemp, Warning, TEXT("USTHouse::AddMember: NewMember is null"));
		return false;
	}
	if (Members.Contains(NewMember))
	{
		UE_LOG(LogTemp, Warning, TEXT("USTHouse::AddMember: Member %s is already in the house"), *NewMember->CharacterID);
		return false;
	}
	Members.Add(NewMember);
	NewMember->House = this;
	if (!IsInitial)
	{
		UE_LOG(LogTemp, Log, TEXT("USTHouse::AddMember: Member %s added to house %s"), *NewMember->CharacterID, *HouseName.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("USTHouse::AddMember: Member %s added to house %s (initial)"), *NewMember->CharacterID, *HouseName.ToString());
	}
	return true;
}
