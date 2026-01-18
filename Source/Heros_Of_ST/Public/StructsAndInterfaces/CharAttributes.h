

#pragma once

#include "CoreMinimal.h"
#include "CharAttributes.generated.h"

/*
 * 角色属性结构体
 * 包括以下属性：
 * - 体魄 (Health) 角色的健康状态，影响其武力值和生存能力
 * - 悟性 (Comprehension) 角色的理解能力，影响其学习和适应新技能的速度
 * - 巧思 (Ingenuity) 角色的创造力，影响发明创造和文艺创作的能力
 * - 明察 (Perception) 角色的观察力，影响其识人辨才和挖掘情报的能力
 * - 定力 (Willpower) 角色的意志力，影响其抗压能力和坚持不懈的精神
 * - 雅量 (Charisma) 角色的个人魅力，影响其社交能力和领导力
 * - 军略 (Strategy) 角色的战略眼光，影响其在战斗和决策中的表现
 * - 政理 (Governance) 角色的治理能力，影响其管理资源和处理政务的效率
 */
USTRUCT(BlueprintType)
struct HEROS_OF_ST_API FCharAttributes
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Health = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Comprehension = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Ingenuity = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Perception = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Willpower = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Charisma = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Strategy = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Governance = 0;
};
