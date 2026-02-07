// Fill out your copyright notice in the Description page of Project Settings.


#include "Map/STMapGenerator.h"
#include "Misc/FileHelper.h"
#include "IImageWrapperModule.h"
#include "Modules/ModuleManager.h"
#include "ProceduralMeshComponent.h"
#include "Components/ArrowComponent.h"

// Sets default values
ASTMapGenerator::ASTMapGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MapCenter = FVector2D::ZeroVector;
	MapSize = FVector2D::ZeroVector;
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	RootComponent = ArrowComponent;
	ArrowComponent->SetWorldScale3D(FVector(5.0f));
	ProceduralMeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMeshComponent"));
	ProceduralMeshComponent->SetupAttachment(RootComponent);
}

bool ASTMapGenerator::GenerateMap(float SizeScale, float HeightScale)
{
	if (!LoadHeightMap(SizeScale, HeightScale))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to generate map due to heightmap loading error."));
		return false;
	}

	if (!GenerateMeshFromHeightMap()) 
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to generate mesh from heightmap data."));
		return false;
	}
	return true;
}

FVector2D ASTMapGenerator::GetMapCenter() const
{
	return MapCenter;
}

// Called when the game starts or when spawned
void ASTMapGenerator::BeginPlay()
{
	Super::BeginPlay();
	
}

bool ASTMapGenerator::LoadHeightMap(float SizeScale, float HeightScale)
{
	HeightMapData.Empty();
	FString HeightMapFilePath = FPaths::ProjectConfigDir() + "Map/HeightMap.png";
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *HeightMapFilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load heightmap file: %s"), *HeightMapFilePath);
		return false;
	}
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	if (!ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to parse heightmap image: %s"), *HeightMapFilePath);
		return false;
	}
	TArray<uint8> UncompressedGray;
	if (!ImageWrapper->GetRaw(ERGBFormat::Gray, 8, UncompressedGray))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get raw image data from heightmap: %s"), *HeightMapFilePath);
		return false;
	}
	int32 Width = ImageWrapper->GetWidth();
	int32 Height = ImageWrapper->GetHeight();
	UE_LOG(LogTemp, Log, TEXT("图像尺寸: %dx%d"), Width, Height);
	auto ForwardVector = GetActorForwardVector();
	auto RightVector = GetActorRightVector();
	auto Location = GetActorLocation();
	for (int32 Y = 0; Y < Height; ++Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			int32 PixelIndex = Y * Width + X;
			uint8 Gray = UncompressedGray[PixelIndex];
			float HeightValue = static_cast<float>(Gray) / 255.0f * HeightScale;
			HeightMapData.Add(FVector(X * SizeScale, Y * SizeScale, HeightValue));
			UVs.Add(FVector2D(static_cast<float>(X) / (Width - 1), static_cast<float>(Y) / (Height - 1)));
		}
	}
	MapCenter.X = Width * SizeScale / 2.0f;
	MapCenter.Y = Height * SizeScale / 2.0f;
	MapSize.X = Width;
	MapSize.Y = Height;
	return true;
}

bool ASTMapGenerator::GenerateMeshFromHeightMap()
{
	ProceduralMeshComponent->ClearAllMeshSections();
	TArray<int32> Triangles;
	for (int32 Y = 0; Y < MapSize.Y - 1; ++Y)
	{
		for (int32 X = 0; X < MapSize.X - 1; ++X)
		{
			int32 BottomLeft = Y * MapSize.X + X;
			int32 BottomRight = BottomLeft + 1;
			int32 TopLeft = BottomLeft + MapSize.X;
			int32 TopRight = TopLeft + 1;
			// First triangle
			Triangles.Add(TopLeft);
			Triangles.Add(BottomRight);
			Triangles.Add(BottomLeft);
			// Second triangle
			Triangles.Add(TopRight);
			Triangles.Add(BottomRight);
			Triangles.Add(TopLeft);
		}
	}
	ProceduralMeshComponent->CreateMeshSection(
		0,
		HeightMapData,
		Triangles,
		TArray<FVector>(),
		UVs,
		TArray<FColor>(),
		TArray<FProcMeshTangent>(),
		true);
	return true;
}

// Called every frame
void ASTMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

