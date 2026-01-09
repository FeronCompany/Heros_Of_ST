// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTState();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTState *****************************************************************
void USTState::StaticRegisterNativesUSTState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTState;
UClass* USTState::GetPrivateStaticClass()
{
	using TClass = USTState;
	if (!Z_Registration_Info_UClass_USTState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STState"),
			Z_Registration_Info_UClass_USTState.InnerSingleton,
			StaticRegisterNativesUSTState,
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
	return Z_Registration_Info_UClass_USTState.InnerSingleton;
}
UClass* Z_Construct_UClass_USTState_NoRegister()
{
	return USTState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "STState.h" },
		{ "ModuleRelativePath", "Public/STState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USTState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTState_Statics::ClassParams = {
	&USTState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTState_Statics::Class_MetaDataParams), Z_Construct_UClass_USTState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTState()
{
	if (!Z_Registration_Info_UClass_USTState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTState.OuterSingleton, Z_Construct_UClass_USTState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTState.OuterSingleton;
}
USTState::USTState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTState);
USTState::~USTState() {}
// ********** End Class USTState *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STState_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTState, USTState::StaticClass, TEXT("USTState"), &Z_Registration_Info_UClass_USTState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTState), 2644793107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STState_h__Script_Heros_Of_ST_4074854342(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STState_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STState_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
