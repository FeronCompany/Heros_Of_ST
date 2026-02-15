// Fill out your copyright notice in the Description page of Project Settings.


#include "Map/STMapGenerator.h"
#include "Misc/FileHelper.h"
#include "IImageWrapperModule.h"
#include "Modules/ModuleManager.h"
#include "ProceduralMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Heros_Of_ST/macros.h"
#include "Engine/Texture2D.h"
#include "ResourceManagment/STGameInstance.h"

const static float TreePlacementThreshold = 0.2f;

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
	HISMComponent = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComponent"));
	HISMComponent->SetupAttachment(RootComponent);
	// 设置默认的静态网格资源
	static ConstructorHelpers::FObjectFinder<UStaticMesh> TreeMesh(TEXT("/Game/meshes/TestTree.TestTree"));
	if (TreeMesh.Succeeded())
	{
		HISMComponent->SetStaticMesh(TreeMesh.Object);
	}
	// 设置材质
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		TreeLeafMaterial(TEXT("/Game/materials/Landscape/M_MixedGrass.M_MixedGrass"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>
		TreeTrunkMaterial(TEXT("/Game/materials/SceneObjects/M_TreeSkin.M_TreeSkin"));
	if (TreeLeafMaterial.Succeeded() && TreeTrunkMaterial.Succeeded())
	{
		HISMComponent->SetMaterial(0, TreeLeafMaterial.Object);
		HISMComponent->SetMaterial(1, TreeTrunkMaterial.Object);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load tree material"));
	}
}

bool ASTMapGenerator::GenerateMap(float SizeScale, float HeightScale)
{
	CHECK_FUNC_RET_BOOL(LoadHeightMap(SizeScale, HeightScale));
	CHECK_FUNC_RET_BOOL(LoadColorMap());
	CHECK_FUNC_RET_BOOL(GenerateMeshFromHeightMap());
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
	UVs.Empty();
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
			// 根据相邻顶点坐标加权计算法线
			FVector NormalCalculated = FVector::ZeroVector;
			TArray<FVector> NeighboringVertices;
			if (X != 0)
			{
				NeighboringVertices.Add(FVector(
					(X - 1) * SizeScale,
					Y * SizeScale,
					static_cast<float>(UncompressedGray[PixelIndex - 1]) / 255.0f * HeightScale));
			}
			if (Y != 0)
			{
				NeighboringVertices.Add(FVector(
					X * SizeScale,
					(Y - 1) * SizeScale,
					static_cast<float>(UncompressedGray[PixelIndex - Width]) / 255.0f * HeightScale));
			}
			if (X != Width - 1)
			{
				NeighboringVertices.Add(FVector(
					(X + 1) * SizeScale,
					Y * SizeScale,
					static_cast<float>(UncompressedGray[PixelIndex + 1]) / 255.0f * HeightScale));
			}
			if (Y != Height - 1)
			{
				NeighboringVertices.Add(FVector(
					X * SizeScale,
					(Y + 1) * SizeScale,
					static_cast<float>(UncompressedGray[PixelIndex + Width]) / 255.0f * HeightScale));
			}
			if (NeighboringVertices.Num() < 2)
			{
				Normals.Add(FVector::UpVector);
				continue;
			}
			else
			{
				// 取前两个邻居顶点与当前点计算法线
				FVector Edge1 = NeighboringVertices[0] - HeightMapData.Last();
				FVector Edge2 = NeighboringVertices[1] - HeightMapData.Last();
				NormalCalculated = FVector::CrossProduct(Edge1, Edge2).GetSafeNormal();
				Normals.Add(NormalCalculated);
			}
		}
	}
	MapCenter.X = Width * SizeScale / 2.0f;
	MapCenter.Y = Height * SizeScale / 2.0f;
	MapSize.X = Width;
	MapSize.Y = Height;
	return true;
}

bool ASTMapGenerator::LoadColorMap()
{
	VertexColors.Empty();
	FString ColorMapFilePath = FPaths::ProjectConfigDir() + "Map/LandscapeMap.png";
	TArray<uint8> RawFileData;
	if (!FFileHelper::LoadFileToArray(RawFileData, *ColorMapFilePath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load colormap file: %s"), *ColorMapFilePath);
		return false;
	}
	IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
	if (!ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to parse colormap image: %s"), *ColorMapFilePath);
		return false;
	}
	TArray<uint8> UncompressedRGBA;
	if (!ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to get raw image data from colormap: %s"), *ColorMapFilePath);
		return false;
	}
	int32 Width = ImageWrapper->GetWidth();
	int32 Height = ImageWrapper->GetHeight();
	if (Width != MapSize.X || Height != MapSize.Y)
	{
		UE_LOG(LogTemp, Error, TEXT("Colormap size does not match heightmap size: %s"), *ColorMapFilePath);
		return false;
	}
	for (int32 Y = 0; Y < Height; ++Y)
	{
		for (int32 X = 0; X < Width; ++X)
		{
			int32 PixelIndex = Y * Width + X;
			uint8 R = UncompressedRGBA[PixelIndex * 4];
			uint8 G = UncompressedRGBA[PixelIndex * 4 + 1];
			uint8 B = UncompressedRGBA[PixelIndex * 4 + 2];
			uint8 A = UncompressedRGBA[PixelIndex * 4 + 3];
			VertexColors.Add(FColor(R, G, B, A));
			AddTreeTransformNode(R, G, X, Y);
		}
	}
	do {
		auto GameInstance = Cast<USTGameInstance>(GetGameInstance());
		if (GameInstance)
		{
			GameInstance->MapHeightMap = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);
			if (!GameInstance->MapHeightMap)
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create transient texture for heightmap"));
				break;
			}
			FTexture2DMipMap& Mip = GameInstance->MapHeightMap->GetPlatformData()->Mips[0];
			void* TextureData = Mip.BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(TextureData, UncompressedRGBA.GetData(), UncompressedRGBA.Num());
			Mip.BulkData.Unlock();
			GameInstance->MapHeightMap->NeverStream = true; // 确保纹理立即可用
			GameInstance->MapHeightMap->UpdateResource();
		}
	} while (false);
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
		Normals,
		UVs,
		VertexColors,
		TArray<FProcMeshTangent>(),
		true);
	return true;
}

void ASTMapGenerator::AddTreeTransformNode(uint8 R, uint8 G, int32 X, int32 Y)
{
	if (R == 60 && G == 30)
	{
		float RandomValue = FMath::FRandRange(0.0f, 1.0f);
		if (RandomValue > TreePlacementThreshold)
		{
			return;
		}
		int32 Index = Y * MapSize.X + X;
		FTransform InstanceTransform;
		// 为了让树木更好地融入地形，我们在坐标和放大倍数上添加一个随机偏移
		float RandomXOffset = FMath::FRandRange(-0.5f, 0.5f);
		float RandomYOffset = FMath::FRandRange(-0.5f, 0.5f);
		InstanceTransform.SetLocation(
			FVector(HeightMapData[Index].X + RandomXOffset, HeightMapData[Index].Y + RandomYOffset, HeightMapData[Index].Z));
		float RandomScale = FMath::FRandRange(0.8f, 1.2f);
		InstanceTransform.SetScale3D(FVector(RandomScale * 0.2f));
		HISMComponent->AddInstance(InstanceTransform);
	}
}

// Called every frame
void ASTMapGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

