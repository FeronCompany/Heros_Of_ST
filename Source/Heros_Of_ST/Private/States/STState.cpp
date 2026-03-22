// Fill out your copyright notice in the Description page of Project Settings.


#include "States/STState.h"
#include "States/STTitle.h"
#include "States/STHolding.h"
#include "Characters/STCharacter.h"
#include "Heros_Of_ST/macros.h"

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
	for (auto& Title : Titles)
	{
		if (Title)
		{
			Title->TitleBelonging = this;
			PRINT_SCREEN("State %s has added title: %s.",
				*StateID,
				*Title->TitleName);
		}
	}
}

void ASTState::SubjectTo(ASTState* Overlord, EOverlordType NewOverlordType, bool IsInitial)
{
	AbandonOverlord();
	OverlordState = Overlord;
	OverlordType = NewOverlordType;
	Overlord->VassalStates.Add(this);
	if (!IsInitial)
	{
		PRINT_SCREEN("State %s is now subject to %s as a %s.",
			*StateID,
			*Overlord->StateID,
			*StaticEnum<EOverlordType>()->GetNameStringByValue(static_cast<uint8>(OverlordType)));
	}
}

void ASTState::AbandonOverlord()
{
	if (OverlordState)
	{
		OverlordState->VassalStates.Remove(this);
		PRINT_SCREEN("State %s has abandoned overlord %s.",
			*StateID,
			*OverlordState->StateID);
		OverlordState = nullptr;
		OverlordType = EOverlordType::Independent;
	}
}

void ASTState::BreakTitle(bool IsEndGame)
{
	for (auto& Title : Titles)
	{
		if (Title)
		{
			Title->TitleBelonging = nullptr;
			Title->TitleHolder->RelinquishTitle(Title, IsEndGame);
			PRINT_SCREEN("State %s has removed title: %s.",
				*StateID,
				*Title->TitleName);
		}
	}
	Titles.Empty();
}

TArray<ASTHolding*> ASTState::GetAllHoldings() const
{
	if (StateLevel == EStateLevel::County)
	{
		return { Captial };
	}
	else if (StateLevel == EStateLevel::Commoner)
	{
		return {};
	}
	else
	{
		TArray<ASTHolding*> Holdings;
		for (auto& VassalState : VassalStates)
		{
			if (VassalState)
			{
				Holdings.Append(VassalState->GetAllHoldings());
			}
		}
		return Holdings;
	}
}

ASTCharacter* ASTState::GetRuler() const
{
	// 若头衔列表不为空，则返回第一个头衔的持有者
	if (Titles.Num() > 0 && Titles[0] && Titles[0]->TitleHolder)
	{
		return Titles[0]->TitleHolder;
	}
	return nullptr;
}

ASTState* ASTState::GetTopRealm() const
{
	if (OverlordState)
	{
		return OverlordState->GetTopRealm();
	}
	else
	{
		return const_cast<ASTState*>(this);
	}
}

FStateSavedData ASTState::GetSavedStateData() const
{
	FStateSavedData SavedData;
	SavedData.StateID = StateID;
	SavedData.StateName = StateName;
	SavedData.OverlordStateID = OverlordState ? OverlordState->StateID : "";
	SavedData.OverlordType = OverlordType;
	for (const auto& Title : Titles)
	{
		if (Title)
		{
			SavedData.Titles.Add(Title->GetSavedTitleData());
		}
	}
	SavedData.CapitalHoldingID = Captial ? Captial->HoldingID : "";
	SavedData.StateLevel = StateLevel;
	return SavedData;
}

bool ASTState::ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FStateSavedData& OutSavedData)
{
	if (!JsonObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Invalid JSON object provided for parsing StateSavedData."));
		return false;
	}
	if (JsonObject->HasField(TEXT("StateID")))
	{
		OutSavedData.StateID = JsonObject->GetStringField(TEXT("StateID"));
	}
	if (JsonObject->HasField(TEXT("StateName")))
	{
		OutSavedData.StateName = FName(*JsonObject->GetStringField(TEXT("StateName")));
	}
	if (JsonObject->HasField(TEXT("OverlordStateID")))
	{
		OutSavedData.OverlordStateID = JsonObject->GetStringField(TEXT("OverlordStateID"));
	}
	if (JsonObject->HasField(TEXT("OverlordType")))
	{
		FString OverlordTypeString = JsonObject->GetStringField(TEXT("OverlordType"));
		OutSavedData.OverlordType = static_cast<EOverlordType>(
			StaticEnum<EOverlordType>()->GetValueByName(FName(*OverlordTypeString)));
	}
	if (JsonObject->HasField(TEXT("Titles")))
	{
		const TArray<TSharedPtr<FJsonValue>> TitleArray = JsonObject->GetArrayField(TEXT("Titles"));
		for (const auto& TitleValue : TitleArray)
		{
			const TSharedPtr<FJsonObject>* TitleObject;
			if (TitleValue->TryGetObject(TitleObject))
			{
				FTitleSavedData TitleData;
				if (USTTitle::ParseFromJson(*TitleObject, TitleData))
				{
					OutSavedData.Titles.Add(TitleData);
				}
			}
		}
	}
	if (JsonObject->HasField(TEXT("CapitalHoldingID")))
	{
		OutSavedData.CapitalHoldingID = JsonObject->GetStringField(TEXT("CapitalHoldingID"));
	}
	if (JsonObject->HasField(TEXT("StateLevel")))
	{
		FString StateLevelString = JsonObject->GetStringField(TEXT("StateLevel"));
		OutSavedData.StateLevel = static_cast<EStateLevel>(
			StaticEnum<EStateLevel>()->GetValueByName(FName(*StateLevelString)));
	}
	return true;
}

// Called when the game starts or when spawned
void ASTState::BeginPlay()
{
	Super::BeginPlay();
}

void ASTState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	BreakTitle(EndPlayReason == EEndPlayReason::Quit);
	VassalStates.Empty();
}

