// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STTitle.h"
#include "States/STHolding.h"
#include "States/STState.h"
#include "Characters/STCharacter.h"

FTitleSavedData USTTitle::GetSavedTitleData() const
{
	FTitleSavedData SavedData;
	SavedData.TitleName = TitleName;
	SavedData.TitleDescription = TitleDescription;
	SavedData.TitleHolderID = TitleHolder ? TitleHolder->CharacterID : FString();
	SavedData.TitleBelongingStateID = TitleBelonging ? TitleBelonging->StateID : FString();
	SavedData.TitleRank = TitleRank;
	return SavedData;
}

bool USTTitle::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FTitleSavedData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON object provided for parsing TitleSavedData."));
		return false;
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("TitleName")))
	{
		OutSavedData.TitleName = JsonObject->GetStringField(TEXT("TitleName"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("TitleDescription")))
	{
		OutSavedData.TitleDescription = JsonObject->GetStringField(TEXT("TitleDescription"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("TitleHolderID")))
	{
		OutSavedData.TitleHolderID = JsonObject->GetStringField(TEXT("TitleHolderID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("TitleBelongingStateID")))
	{
		OutSavedData.TitleBelongingStateID = JsonObject->GetStringField(TEXT("TitleBelongingStateID"));	
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("TitleRank")))
	{
		FString StatusString = JsonObject->GetStringField(TEXT("TitleRank"));
		OutSavedData.TitleRank = (ETitleRank)StaticEnum<ETitleRank>()->GetValueByNameString(StatusString);
	}
	return true;
}
