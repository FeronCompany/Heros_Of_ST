// Fill out your copyright notice in the Description page of Project Settings.


#include "Shader/STMaterialExpHardVertexColor.h"
#include "MaterialCompiler.h"

USTMaterialExpHardVertexColor::USTMaterialExpHardVertexColor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
#if WITH_EDITORONLY_DATA
	Outputs.Reset();
	Outputs.Add(FExpressionOutput(TEXT(""), 1, 1, 1, 1, 0));
	Outputs.Add(FExpressionOutput(TEXT(""), 1, 1, 0, 0, 0));
	Outputs.Add(FExpressionOutput(TEXT(""), 1, 0, 1, 0, 0));
	Outputs.Add(FExpressionOutput(TEXT(""), 1, 0, 0, 1, 0));
	Outputs.Add(FExpressionOutput(TEXT(""), 1, 0, 0, 0, 1));
#endif
}

#ifdef WITH_EDITOR

int32 USTMaterialExpHardVertexColor::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	return Compiler->VertexColor();
}

void USTMaterialExpHardVertexColor::GetCaption(TArray<FString>& OutCaptions) const
{
	OutCaptions.Add(TEXT("Hard Vertex Color"));
}

#endif // WITH_EDITOR
