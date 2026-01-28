// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "STTitle.generated.h"

class ASTCharacter;
class ASTState;

UENUM(Blueprintable)
enum class ETitleRank : uint8
{
	Commoner UMETA(DisplayName = "Commoner"),	// 庶民自治组织头衔（掌门、掌柜、宗族组长、住持、道长等）
	Knight UMETA(DisplayName = "Knight"),		// 骑士，军事贵族
	Baron UMETA(DisplayName = "Baron"),			// 男爵，乡级主官（乡长、里正）
	Count UMETA(DisplayName = "Count"),			// 伯爵，县级主官（县令）
	Marquis UMETA(DisplayName = "Marquis"),		// 侯爵，地级主官（州刺史）
	Duke UMETA(DisplayName = "Duke"),			// 公爵，省级（道、路、行省）主官（行台、节度使、总督）
	King UMETA(DisplayName = "King"),			// 国王、可汗、亲王、大公、帝国摄政，朝廷重臣（宰相、尚书）
	Emperor UMETA(DisplayName = "Emperor"),		// 皇帝、大汗、万王之王、奥古斯都
	MAX UMETA(Hidden)
};

USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FTitleSavedData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title Saved Data")
	FString TitleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title Saved Data")
	FName TitleDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title Saved Data")
	FString TitleHolderID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title Saved Data")
	FString TitleBelongingStateID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title Saved Data")
	ETitleRank TitleRank;
};

/**
 * 统治者的头衔、称号
 */
UCLASS(Blueprintable)
class HEROS_OF_ST_API USTTitle : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Character")
	FTitleSavedData GetSavedTitleData() const;

	static bool ParseFromJson(const TSharedPtr<FJsonObject>& JsonObject, FTitleSavedData& OutSavedData);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	FString TitleName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	FName TitleDescription;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	ASTCharacter* TitleHolder{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	ASTState* TitleBelonging{ nullptr };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Title")
	ETitleRank TitleRank{ ETitleRank::Commoner };
};
