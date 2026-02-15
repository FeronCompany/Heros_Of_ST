// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpressionExternalCodeBase.h"
#include "STMaterialExpHardVertexColor.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class USTMaterialExpHardVertexColor : public UMaterialExpressionExternalCodeBase
{
	GENERATED_UCLASS_BODY()
public:
	//~ Begin UMaterialExpression Interface
#if WITH_EDITOR
	virtual int32 Compile(class FMaterialCompiler* Compiler, int32 OutputIndex) override;
	virtual void GetCaption(TArray<FString>& OutCaptions) const override;
	virtual FText GetKeywords() const override { return FText::FromString(TEXT("HardVertexColor")); }
#endif
};
