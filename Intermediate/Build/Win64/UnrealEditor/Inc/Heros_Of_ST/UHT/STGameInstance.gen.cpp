// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceManagment/STGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTGameInstance();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTGameInstance **********************************************************
void USTGameInstance::StaticRegisterNativesUSTGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTGameInstance;
UClass* USTGameInstance::GetPrivateStaticClass()
{
	using TClass = USTGameInstance;
	if (!Z_Registration_Info_UClass_USTGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STGameInstance"),
			Z_Registration_Info_UClass_USTGameInstance.InnerSingleton,
			StaticRegisterNativesUSTGameInstance,
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
	return Z_Registration_Info_UClass_USTGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_USTGameInstance_NoRegister()
{
	return USTGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceManagment/STGameInstance.h" },
		{ "ModuleRelativePath", "Public/ResourceManagment/STGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USTGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTGameInstance_Statics::ClassParams = {
	&USTGameInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USTGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTGameInstance()
{
	if (!Z_Registration_Info_UClass_USTGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTGameInstance.OuterSingleton, Z_Construct_UClass_USTGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTGameInstance.OuterSingleton;
}
USTGameInstance::USTGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTGameInstance);
USTGameInstance::~USTGameInstance() {}
// ********** End Class USTGameInstance ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STGameInstance_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTGameInstance, USTGameInstance::StaticClass, TEXT("USTGameInstance"), &Z_Registration_Info_UClass_USTGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTGameInstance), 1390234310U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STGameInstance_h__Script_Heros_Of_ST_2474674103(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STGameInstance_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STGameInstance_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
