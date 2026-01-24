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
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FHoldingSavedData();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHoldingSavedData *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHoldingSavedData;
class UScriptStruct* FHoldingSavedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHoldingSavedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHoldingSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoldingSavedData, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("HoldingSavedData"));
	}
	return Z_Registration_Info_UScriptStruct_FHoldingSavedData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHoldingSavedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingID_MetaData[] = {
		{ "Category", "Holding Saved Data" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingName_MetaData[] = {
		{ "Category", "Holding Saved Data" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningStateID_MetaData[] = {
		{ "Category", "Holding Saved Data" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HoldingName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OwningStateID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoldingSavedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_HoldingID = { "HoldingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoldingSavedData, HoldingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingID_MetaData), NewProp_HoldingID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_HoldingName = { "HoldingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoldingSavedData, HoldingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingName_MetaData), NewProp_HoldingName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_OwningStateID = { "OwningStateID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHoldingSavedData, OwningStateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningStateID_MetaData), NewProp_OwningStateID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoldingSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_HoldingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_HoldingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewProp_OwningStateID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoldingSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoldingSavedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"HoldingSavedData",
	Z_Construct_UScriptStruct_FHoldingSavedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoldingSavedData_Statics::PropPointers),
	sizeof(FHoldingSavedData),
	alignof(FHoldingSavedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoldingSavedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHoldingSavedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHoldingSavedData()
{
	if (!Z_Registration_Info_UScriptStruct_FHoldingSavedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHoldingSavedData.InnerSingleton, Z_Construct_UScriptStruct_FHoldingSavedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHoldingSavedData.InnerSingleton;
}
// ********** End ScriptStruct FHoldingSavedData ***************************************************

// ********** Begin Class ASTHolding Function GetSavedHoldingData **********************************
struct Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics
{
	struct STHolding_eventGetSavedHoldingData_Parms
	{
		FHoldingSavedData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Holding" },
		{ "ModuleRelativePath", "Public/States/STHolding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STHolding_eventGetSavedHoldingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHoldingSavedData, METADATA_PARAMS(0, nullptr) }; // 613153170
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTHolding, nullptr, "GetSavedHoldingData", Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::STHolding_eventGetSavedHoldingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::STHolding_eventGetSavedHoldingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTHolding_GetSavedHoldingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTHolding_GetSavedHoldingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTHolding::execGetSavedHoldingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHoldingSavedData*)Z_Param__Result=P_THIS->GetSavedHoldingData();
	P_NATIVE_END;
}
// ********** End Class ASTHolding Function GetSavedHoldingData ************************************

// ********** Begin Class ASTHolding ***************************************************************
void ASTHolding::StaticRegisterNativesASTHolding()
{
	UClass* Class = ASTHolding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSavedHoldingData", &ASTHolding::execGetSavedHoldingData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HoldingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTHolding_GetSavedHoldingData, "GetSavedHoldingData" }, // 1012695145
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTHolding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_OwnerState = { "OwnerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, OwnerState), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerState_MetaData), NewProp_OwnerState_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingID = { "HoldingID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, HoldingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingID_MetaData), NewProp_HoldingID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTHolding_Statics::NewProp_HoldingName = { "HoldingName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTHolding, HoldingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingName_MetaData), NewProp_HoldingName_MetaData) };
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
	FuncInfo,
	Z_Construct_UClass_ASTHolding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHoldingSavedData::StaticStruct, Z_Construct_UScriptStruct_FHoldingSavedData_Statics::NewStructOps, TEXT("HoldingSavedData"), &Z_Registration_Info_UScriptStruct_FHoldingSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoldingSavedData), 613153170U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTHolding, ASTHolding::StaticClass, TEXT("ASTHolding"), &Z_Registration_Info_UClass_ASTHolding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTHolding), 3475730888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_2634331514(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STHolding_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
