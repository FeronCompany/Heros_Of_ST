// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "States/STHolding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTHolding() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTHolding();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTHolding_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASTHolding ***************************************************************
void ASTHolding::StaticRegisterNativesASTHolding()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASTHolding;
UClass* ASTHolding::GetPrivateStaticClass()
{
	using TClass = ASTHolding;
	if (!Z_Registration_Info_UClass_ASTHolding.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STHolding"),
			Z_Registration_Info_UClass_ASTHolding.InnerSingleton,
			StaticRegisterNativesASTHolding,
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
	return Z_Registration_Info_UClass_ASTHolding.InnerSingleton;
}
UClass* Z_Construct_UClass_ASTHolding_NoRegister()
{
	return ASTHolding::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASTHolding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "States/STHolding.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerState_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingID_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingName_MetaData[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HoldingID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTHolding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_OwnerState = { "OwnerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, OwnerState), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerState_MetaData), NewProp_OwnerState_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingID = { "HoldingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, HoldingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingID_MetaData), NewProp_HoldingID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingName = { "HoldingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, HoldingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingName_MetaData), NewProp_HoldingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTHolding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTHolding_Statics::NewProp_OwnerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTHolding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASTHolding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTHolding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTHolding_Statics::ClassParams = {
	&ASTHolding::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASTHolding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASTHolding_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTHolding_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTHolding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASTHolding()
{
	if (!Z_Registration_Info_UClass_ASTHolding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTHolding.OuterSingleton, Z_Construct_UClass_ASTHolding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASTHolding.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASTHolding);
ASTHolding::~ASTHolding() {}
// ********** End Class ASTHolding *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTHolding, ASTHolding::StaticClass, TEXT("ASTHolding"), &Z_Registration_Info_UClass_ASTHolding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTHolding), 2863877162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_726362315(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
