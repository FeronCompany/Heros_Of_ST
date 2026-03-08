// Fill out your copyright notice in the Description page of Project Settings.


#include "StructsAndInterfaces/STInteractable.h"
#include "Controller/UIInteractiveController.h"

void AUIInteractiveController::LoadGame_Implementation(const FString& SlotName)
{
}

void AUIInteractiveController::CursorTraceBase()
{
	// 鼠标指针检测
	FHitResult HitResult;
	if (GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_Visibility), false, HitResult))
	{
		auto HitActor = HitResult.GetActor();
		if (HitActor)
		{
			//ISTInteractable* Interactable = Cast<ISTInteractable>(HitActor);
			// 使用ImplementsInterface判断接口实现，否则在蓝图中实现接口的Actor会无法正确Cast到接口类型
			if (HitActor->GetClass()->ImplementsInterface(USTInteractable::StaticClass()))
			{
				if (LastHoveredActor != HitActor)
				{
					UnHoverLastActor();
					ISTInteractable::Execute_OnHover(HitActor);
					LastHoveredActor = HitActor;
				}
			}
			else
			{
				UnHoverLastActor();
			}
		}
	}
	else
	{
		UnHoverLastActor();
	}
}

void AUIInteractiveController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	CursorTraceBase();
}

void AUIInteractiveController::UnHoverLastActor()
{
	if (LastHoveredActor)
	{
		if (LastHoveredActor->GetClass()->ImplementsInterface(USTInteractable::StaticClass()))
		{
			ISTInteractable::Execute_OnCursorAway(LastHoveredActor);
		}
		LastHoveredActor = nullptr;
	}
}
