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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMainCamera, AMainCamera::StaticClass, TEXT("AMainCamera"), &Z_Registration_Info_UClass_AMainCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCamera), 718673743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_3690593319(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
