

#pragma once

#include "CoreMinimal.h"
#include "Storage.generated.h"


UENUM(BlueprintType)
enum class StorageType : uint8
{
	Default UMETA(DisplayName = "Default"),
	Grain UMETA(DisplayName = "粮食"),
	Wood UMETA(DisplayName = "木材"),
	Stone UMETA(DisplayName = "石材"),
	Silk UMETA(DisplayName = "丝绸"),
	Coins UMETA(DisplayName = "钱币"),
	Horses UMETA(DisplayName = "马匹"),
	Armor UMETA(DisplayName = "盔甲"),
	MAX UMETA(Hidden)
};
