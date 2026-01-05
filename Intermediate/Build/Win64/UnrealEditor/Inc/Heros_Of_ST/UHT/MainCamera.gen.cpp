// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Heros_Of_ST/MainCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_AMainCamera();
HEROS_OF_ST_API UClass* Z_Construct_UClass_AMainCamera_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainCamera **************************************************************
void AMainCamera::StaticRegisterNativesAMainCamera()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainCamera;
UClass* AMainCamera::GetPrivateStaticClass()
{
	using TClass = AMainCamera;
	if (!Z_Registration_Info_UClass_AMainCamera.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainCamera"),
			Z_Registration_Info_UClass_AMainCamera.InnerSingleton,
			StaticRegisterNativesAMainCamera,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMainCamera.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainCamera_NoRegister()
{
	return AMainCamera::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCamera.h" },
		{ "ModuleRelativePath", "MainCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe5\xbc\xb9\xe7\xb0\xa7\xe8\x87\x82\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xbb\x84\xe4\xbb\xb6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\x93\xe5\x85\xa5\xe6\x98\xa0\xe5\xb0\x84\xe4\xb8\x8a\xe4\xb8\x8b\xe6\x96\x87\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe6\x98\xa0\xe5\xb0\x84\xe4\xb8\x8a\xe4\xb8\x8b\xe6\x96\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe7\xa7\xbb\xe5\x8a\xa8\xef\xbc\x88\xe5\x89\x8d\xe5\x90\x8e\xe5\xb7\xa6\xe5\x8f\xb3\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe7\xa7\xbb\xe5\x8a\xa8\xef\xbc\x88\xe5\x89\x8d\xe5\x90\x8e\xe5\xb7\xa6\xe5\x8f\xb3\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe7\xbc\xa9\xe6\x94\xbe\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe7\xbc\xa9\xe6\x94\xbe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe6\x97\x8b\xe8\xbd\xac\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x93\xe5\x85\xa5\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x9a\xe6\x97\x8b\xe8\xbd\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe9\x80\x9f\xe5\xba\xa6" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollMargin_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xbc\xa0\xe6\xa0\x87\xe8\xbe\xb9\xe7\xbc\x98\xe6\xbb\x9a\xe5\x8a\xa8\xe7\x9a\x84\xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbc\xa0\xe6\xa0\x87\xe8\xbe\xb9\xe7\xbc\x98\xe6\xbb\x9a\xe5\x8a\xa8\xe7\x9a\x84\xe6\xa3\x80\xe6\xb5\x8b\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\xbc\xa0\xe6\xa0\x87\xe6\xbb\x9a\xe8\xbd\xae\xe7\xbc\xa9\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbc\xa0\xe6\xa0\x87\xe6\xbb\x9a\xe8\xbd\xae\xe7\xbc\xa9\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6" },
#endif
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinZoomDistance_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xb0\x8f\xe7\xbc\xa9\xe6\x94\xbe\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xb0\x8f\xe7\xbc\xa9\xe6\x94\xbe\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxZoomDistance_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "100.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x80\xe5\xa4\xa7\xe7\xbc\xa9\xe6\x94\xbe\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x80\xe5\xa4\xa7\xe7\xbc\xa9\xe6\x94\xbe\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x97\x8b\xe8\xbd\xac\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x97\x8b\xe8\xbd\xac\xe9\x80\x9f\xe5\xba\xa6" },
#endif
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitchAngle_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "-90.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\x9c\x80\xe5\xb0\x8f\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\x9c\x80\xe5\xb0\x8f\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89" },
#endif
		{ "UIMax", "0.0" },
		{ "UIMin", "-90.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchAngle_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\x9c\x80\xe5\xa4\xa7\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\xaf\xe4\xbb\xb0\xe8\xa7\x92\xe5\xba\xa6\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x88\xe6\x9c\x80\xe5\xa4\xa7\xe8\xa7\x92\xe5\xba\xa6\xef\xbc\x89" },
#endif
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryRadius_MetaData[] = {
		{ "Category", "Camera Movement" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\xb9\xe7\x95\x8c\xe9\x99\x90\xe5\x88\xb6\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x88\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "MainCamera.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\xb9\xe7\x95\x8c\xe9\x99\x90\xe5\x88\xb6\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x88\xe6\x91\x84\xe5\x83\x8f\xe6\x9c\xba\xe7\xa7\xbb\xe5\x8a\xa8\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x89" },
#endif
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoomAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotateAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollMargin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinZoomDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxZoomDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_ZoomAction = { "ZoomAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, ZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomAction_MetaData), NewProp_ZoomAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_RotateAction = { "RotateAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, RotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateAction_MetaData), NewProp_RotateAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_EdgeScrollMargin = { "EdgeScrollMargin", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, EdgeScrollMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeScrollMargin_MetaData), NewProp_EdgeScrollMargin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, ZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomSpeed_MetaData), NewProp_ZoomSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinZoomDistance = { "MinZoomDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinZoomDistance_MetaData), NewProp_MinZoomDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxZoomDistance = { "MaxZoomDistance", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxZoomDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxZoomDistance_MetaData), NewProp_MaxZoomDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MinPitchAngle = { "MinPitchAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MinPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitchAngle_MetaData), NewProp_MinPitchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxPitchAngle = { "MaxPitchAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, MaxPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchAngle_MetaData), NewProp_MaxPitchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCamera_Statics::NewProp_BoundaryRadius = { "BoundaryRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCamera, BoundaryRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryRadius_MetaData), NewProp_BoundaryRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_ZoomAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_RotateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_EdgeScrollMargin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_ZoomSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinZoomDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxZoomDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MinPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_MaxPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCamera_Statics::NewProp_BoundaryRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCamera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCamera_Statics::ClassParams = {
	&AMainCamera::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainCamera_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCamera_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCamera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCamera()
{
	if (!Z_Registration_Info_UClass_AMainCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCamera.OuterSingleton, Z_Construct_UClass_AMainCamera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCamera.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCamera);
AMainCamera::~AMainCamera() {}
// ********** End Class AMainCamera ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCamera, AMainCamera::StaticClass, TEXT("AMainCamera"), &Z_Registration_Info_UClass_AMainCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCamera), 1184031048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_3457038890(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
