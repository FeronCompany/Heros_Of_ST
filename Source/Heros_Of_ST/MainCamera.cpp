// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCamera.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"

// Sets default values
AMainCamera::AMainCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 创建弹簧臂组件
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->bDoCollisionTest = false; // 禁用碰撞检测，实现自由移动
	CameraBoom->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f)); // 默认俯视角度
	CameraBoom->TargetArmLength = 1500.0f; // 默认摄像机距离
	CameraBoom->bEnableCameraLag = true; // 启用摄像机滞后效果
	CameraBoom->CameraLagSpeed = 10.0f; // 滞后速度

	// 创建摄像机组件
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	// 设置默认移动参数
	MoveSpeed = 2000.0f;
	EdgeScrollMargin = 50.0f;
	ZoomSpeed = 100.0f;
	MinZoomDistance = 500.0f;
	MaxZoomDistance = 3000.0f;
	RotationSpeed = 5.0f;
	MinPitchAngle = -80.0f;
	MaxPitchAngle = -30.0f;
	BoundaryRadius = 10000.0f;

	// 初始化状态
	bIsRightMousePressed = false;

	// 启用自动控制玩家控制
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMainCamera::BeginPlay()
{
	Super::BeginPlay();
	
	// 获取玩家控制器并设置增强输入
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;

		// 添加输入映射上下文
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
}

// Called every frame
void AMainCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 更新视口尺寸
	if (UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport())
	{
		ViewportClient->GetViewportSize(ViewportSize);
	}

	// 计算鼠标边缘滚动
	CalculateEdgeScrolling();

	// 平滑更新摄像机位置和旋转
	UpdateCameraTransform(DeltaTime);
}

// Called to bind functionality to input
void AMainCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// 检查是否为增强输入组件
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// 绑定移动输入（前后左右）
		if (MoveAction)
		{
			EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMainCamera::Move);
		}

		// 绑定缩放输入
		if (ZoomAction)
		{
			EnhancedInputComponent->BindAction(ZoomAction, ETriggerEvent::Triggered, this, &AMainCamera::Zoom);
		}

		// 绑定旋转输入
		if (RotateAction)
		{
			EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Triggered, this, &AMainCamera::Rotate);
		}

		// 绑定右键按下/释放
		if (RotateAction)
		{
			EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Started, this, &AMainCamera::OnRightMouseStarted);
			EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Completed, this, &AMainCamera::OnRightMouseCompleted);
		}
	}
}

void AMainCamera::Move(const FInputActionValue& InputValue)
{
	if (InputValue.GetMagnitude() > 0.0f)
	{
		FVector2D InputVector = InputValue.Get<FVector2D>();
		MovementInput.X = InputVector.X;
		MovementInput.Y = InputVector.Y;
	}
}

void AMainCamera::Zoom(const FInputActionValue& InputValue)
{
	if (CameraBoom)
	{
		float ZoomAmount = InputValue.Get<float>() * ZoomSpeed;
		CameraBoom->TargetArmLength = FMath::Clamp(CameraBoom->TargetArmLength - ZoomAmount, MinZoomDistance, MaxZoomDistance);
	}
}

void AMainCamera::Rotate(const FInputActionValue& InputValue)
{
	if (bIsRightMousePressed && CameraBoom)
	{
		// 绕Z轴旋转
		FRotator CurrentRotation = CameraBoom->GetRelativeRotation();
		CurrentRotation.Yaw += InputValue.Get<float>() * RotationSpeed;
		CameraBoom->SetRelativeRotation(CurrentRotation);
	}
}

void AMainCamera::OnRightMouseStarted(const FInputActionValue& InputValue)
{
	bIsRightMousePressed = true;
}

void AMainCamera::OnRightMouseCompleted(const FInputActionValue& InputValue)
{
	bIsRightMousePressed = false;
}

void AMainCamera::CalculateEdgeScrolling()
{
	if (bIsRightMousePressed) return; // 右键按下时不进行边缘滚动

	FVector2D MousePos = GetMouseViewportPosition();
	
	// 检查鼠标是否在边缘
	if (MousePos.X < EdgeScrollMargin)
	{
		MovementInput.X = -1.0f;
	}
	else if (MousePos.X > ViewportSize.X - EdgeScrollMargin)
	{
		MovementInput.X = 1.0f;
	}

	if (MousePos.Y < EdgeScrollMargin)
	{
		MovementInput.Y = 1.0f;
	}
	else if (MousePos.Y > ViewportSize.Y - EdgeScrollMargin)
	{
		MovementInput.Y = -1.0f;
	}
}

void AMainCamera::UpdateCameraTransform(float DeltaTime)
{
	if (!CameraBoom) return;

	// 计算移动方向（考虑摄像机旋转）
	FRotator CameraRotation = CameraBoom->GetRelativeRotation();
	FRotator CameraYawRotation(0.0f, CameraRotation.Yaw, 0.0f);

	FVector ForwardDirection = FRotationMatrix(CameraYawRotation).GetUnitAxis(EAxis::X);
	FVector RightDirection = FRotationMatrix(CameraYawRotation).GetUnitAxis(EAxis::Y);

	// 计算移动向量
	FVector MovementVector = (ForwardDirection * MovementInput.Y + RightDirection * MovementInput.X) * MoveSpeed * DeltaTime;

	// 应用移动
	FVector NewLocation = GetActorLocation() + MovementVector;

	// 如果没有边界限制，直接应用新位置
	if (BoundaryRadius <= 0.0f)
	{
		SetActorLocation(NewLocation);
	}
	else
	{
		SetActorLocation(NewLocation);
		ApplyBoundaryConstraints();
	}
}

void AMainCamera::ApplyBoundaryConstraints()
{
	if (BoundaryRadius <= 0.0f) return;

	FVector CurrentLocation = GetActorLocation();
	float DistanceFromOrigin = CurrentLocation.Size();

	if (DistanceFromOrigin > BoundaryRadius)
	{
		// 将摄像机限制在边界内
		FVector Direction = CurrentLocation.GetSafeNormal();
		FVector NewLocation = Direction * BoundaryRadius;
		SetActorLocation(NewLocation);
	}
}

FVector2D AMainCamera::GetMouseViewportPosition() const
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		float MouseX, MouseY;
		if (PC->GetMousePosition(MouseX, MouseY))
		{
			return FVector2D(MouseX, MouseY);
		}
	}
	return FVector2D::ZeroVector;
}

