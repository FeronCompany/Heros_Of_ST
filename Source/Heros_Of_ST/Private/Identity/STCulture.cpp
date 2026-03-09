// Fill out your copyright notice in the Description page of Project Settings.


#include "Identity/STCulture.h"

FSTCultureData USTCulture::GetSavedCultureData() const
{
	FSTCultureData Data;
	Data.CultureID = CultureID;
	Data.CultureName = CultureName;
	Data.Description = Description;
	Data.ParentCultureID = ParentCulture ? ParentCulture->CultureID : FString();
	Data.SecondaryParentCultureID = SecondaryParentCulture ? SecondaryParentCulture->CultureID : FString();
	return Data;
}

bool USTCulture::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FSTCultureData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("USTCulture::ParseFromJson: Invalid JsonObject"));
		return false;
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("CultureID")))
	{
		OutSavedData.CultureID = JsonObject->GetStringField(TEXT("CultureID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("CultureName")))
	{
		OutSavedData.CultureName = FName(*JsonObject->GetStringField(TEXT("CultureName")));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("Description")))
	{
		OutSavedData.Description = FName(*JsonObject->GetStringField(TEXT("Description")));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("ParentCultureID")))
	{
		OutSavedData.ParentCultureID = JsonObject->GetStringField(TEXT("ParentCultureID"));
	}
	if (JsonObject->HasTypedField<EJson::String>(TEXT("SecondaryParentCultureID")))
	{
		OutSavedData.SecondaryParentCultureID = JsonObject->GetStringField(TEXT("SecondaryParentCultureID"));
	}
	return true;
}
