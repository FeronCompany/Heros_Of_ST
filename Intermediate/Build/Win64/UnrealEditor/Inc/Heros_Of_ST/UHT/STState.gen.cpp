// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "States/STState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTTitle_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASTState Function GetTitles **********************************************
struct Z_Construct_UFunction_ASTState_GetTitles_Statics
{
	struct STState_eventGetTitles_Parms
	{
		TArray<USTTitle*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_GetTitles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASTState_GetTitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventGetTitles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTState_GetTitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_GetTitles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_GetTitles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetTitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTState_GetTitles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTState, nullptr, "GetTitles", Z_Construct_UFunction_ASTState_GetTitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetTitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTState_GetTitles_Statics::STState_eventGetTitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetTitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTState_GetTitles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTState_GetTitles_Statics::STState_eventGetTitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTState_GetTitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTState_GetTitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTState::execGetTitles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USTTitle*>*)Z_Param__Result=P_THIS->GetTitles();
	P_NATIVE_END;
}
// ********** End Class ASTState Function GetTitles ************************************************

// ********** Begin Class ASTState Function InitTitles *********************************************
struct Z_Construct_UFunction_ASTState_InitTitles_Statics
{
	struct STState_eventInitTitles_Parms
	{
		TArray<USTTitle*> NewTitles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTitles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTitles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewTitles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles_Inner = { "NewTitles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles = { "NewTitles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventInitTitles_Parms, NewTitles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTitles_MetaData), NewProp_NewTitles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTState_InitTitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_InitTitles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTState_InitTitles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTState, nullptr, "InitTitles", Z_Construct_UFunction_ASTState_InitTitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_InitTitles_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTState_InitTitles_Statics::STState_eventInitTitles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_InitTitles_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTState_InitTitles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTState_InitTitles_Statics::STState_eventInitTitles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTState_InitTitles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTState_InitTitles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTState::execInitTitles)
{
	P_GET_TARRAY_REF(USTTitle*,Z_Param_Out_NewTitles);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitTitles(Z_Param_Out_NewTitles);
	P_NATIVE_END;
}
// ********** End Class ASTState Function InitTitles ***********************************************

// ********** Begin Class ASTState *****************************************************************
void ASTState::StaticRegisterNativesASTState()
{
	UClass* Class = ASTState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTitles", &ASTState::execGetTitles },
		{ "InitTitles", &ASTState::execInitTitles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASTState;
UClass* ASTState::GetPrivateStaticClass()
{
	using TClass = ASTState;
	if (!Z_Registration_Info_UClass_ASTState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STState"),
			Z_Registration_Info_UClass_ASTState.InnerSingleton,
			StaticRegisterNativesASTState,
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
	return Z_Registration_Info_UClass_ASTState.InnerSingleton;
}
UClass* Z_Construct_UClass_ASTState_NoRegister()
{
	return ASTState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASTState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Empires, Kingdoms, and States; Not status\n */" },
#endif
		{ "IncludePath", "States/STState.h" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empires, Kingdoms, and States; Not status" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTState_GetTitles, "GetTitles" }, // 1150230048
		{ &Z_Construct_UFunction_ASTState_InitTitles, "InitTitles" }, // 2604005276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASTState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTState_Statics::ClassParams = {
	&ASTState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTState_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASTState()
{
	if (!Z_Registration_Info_UClass_ASTState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTState.OuterSingleton, Z_Construct_UClass_ASTState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASTState.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASTState);
ASTState::~ASTState() {}
// ********** End Class ASTState *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTState, ASTState::StaticClass, TEXT("ASTState"), &Z_Registration_Info_UClass_ASTState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTState), 1981817605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_2192884717(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
