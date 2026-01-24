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
