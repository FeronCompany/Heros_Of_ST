// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "MainCamera.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class HEROS_OF_ST_API AMainCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainCamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// 摄像机弹簧臂组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class USpringArmComponent* CameraBoom;

	// 摄像机组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* FollowCamera;

	// 输入映射上下文
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	// 输入动作：移动（前后左右）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* MoveAction;

	// 输入动作：缩放
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* ZoomAction;

	// 输入动作：旋转
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	class UInputAction* RotateAction;

	// 移动速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float MoveSpeed;

	// 鼠标边缘滚动的检测距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float EdgeScrollMargin;

	// 鼠标滚轮缩放速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.1", UIMin = "0.1"))
	float ZoomSpeed;

	// 最小缩放距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "100.0", UIMin = "100.0"))
	float MinZoomDistance;

	// 最大缩放距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "100.0", UIMin = "100.0"))
	float MaxZoomDistance;

	// 旋转速度
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.1", UIMin = "0.1"))
	float RotationSpeed;

	// 俯仰角度限制（最小角度）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "-90.0", UIMax = "0.0", UIMin = "-90.0"))
	float MinPitchAngle;

	// 俯仰角度限制（最大角度）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.0", UIMax = "90.0", UIMin = "0.0"))
	float MaxPitchAngle;

	// 边界限制半径（摄像机移动范围）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Movement", meta = (ClampMin = "0.0", UIMin = "0.0"))
	float BoundaryRadius;

private:
	// 输入方向向量
	FVector2D MovementInput;

	// 视口尺寸
	FVector2D ViewportSize;

	// 是否正在使用鼠标右键旋转
	bool bIsRightMousePressed;

	// 增强输入回调函数
	void Move(const FInputActionValue& InputValue);
	void Zoom(const FInputActionValue& InputValue);
	void Rotate(const FInputActionValue& InputValue);
	void OnRightMouseStarted(const FInputActionValue& InputValue);
	void OnRightMouseCompleted(const FInputActionValue& InputValue);

	// 应用摄像机边界限制
	void ApplyBoundaryConstraints();

	// 计算鼠标边缘滚动
	void CalculateEdgeScrolling();

	// 平滑更新摄像机位置和旋转
	void UpdateCameraTransform(float DeltaTime);

	// 获取鼠标在视口中的位置
	FVector2D GetMouseViewportPosition() const;
};
