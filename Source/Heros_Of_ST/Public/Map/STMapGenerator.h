// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STMapGenerator.generated.h"

class UProceduralMeshComponent;
class UArrowComponent;

UCLASS(Blueprintable)
class HEROS_OF_ST_API ASTMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	ASTMapGenerator();
	virtual void Tick(float DeltaTime) override;

	/*
	 * Generate a map with given size and heightmap name
	 * MapScale: Scale factor for the map size
	 */
	UFUNCTION(BlueprintCallable, Category = "Map Generator")
	bool GenerateMap(float SizeScale, float HeightScale);

	UFUNCTION(BlueprintCallable, Category = "Map Generator")
	FVector2D GetMapCenter() const;

	// 程序化生成地图模型组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UProceduralMeshComponent* ProceduralMeshComponent;
	// 箭头组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Map Generator")
	UArrowComponent* ArrowComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	bool LoadHeightMap(float SizeScale, float HeightScale);
	bool GenerateMeshFromHeightMap();

private:	
	TArray<FVector> HeightMapData;
	TArray<FVector2D> UVs;
	FVector2D MapCenter;
	FVector2D MapSize;
};
