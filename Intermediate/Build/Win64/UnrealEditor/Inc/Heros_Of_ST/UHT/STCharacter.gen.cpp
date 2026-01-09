// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCharacter();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTCharacter *************************************************************
void USTCharacter::StaticRegisterNativesUSTCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTCharacter;
UClass* USTCharacter::GetPrivateStaticClass()
{
	using TClass = USTCharacter;
	if (!Z_Registration_Info_UClass_USTCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STCharacter"),
			Z_Registration_Info_UClass_USTCharacter.InnerSingleton,
			StaticRegisterNativesUSTCharacter,
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
	return Z_Registration_Info_UClass_USTCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_USTCharacter_NoRegister()
{
	return USTCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "STCharacter.h" },
		{ "ModuleRelativePath", "Public/STCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USTCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTCharacter_Statics::ClassParams = {
	&USTCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_USTCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTCharacter()
{
	if (!Z_Registration_Info_UClass_USTCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTCharacter.OuterSingleton, Z_Construct_UClass_USTCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTCharacter.OuterSingleton;
}
USTCharacter::USTCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTCharacter);
USTCharacter::~USTCharacter() {}
// ********** End Class USTCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTCharacter, USTCharacter::StaticClass, TEXT("USTCharacter"), &Z_Registration_Info_UClass_USTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTCharacter), 2184603428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h__Script_Heros_Of_ST_3258837952(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
