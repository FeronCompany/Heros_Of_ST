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
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTHolding_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTTitle_NoRegister();
HEROS_OF_ST_API UEnum* Z_Construct_UEnum_Heros_Of_ST_EOverlordType();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EOverlordType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOverlordType;
static UEnum* EOverlordType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOverlordType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOverlordType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Heros_Of_ST_EOverlordType, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("EOverlordType"));
	}
	return Z_Registration_Info_UEnum_EOverlordType.OuterSingleton;
}
template<> HEROS_OF_ST_API UEnum* StaticEnum<EOverlordType>()
{
	return EOverlordType_StaticEnum();
}
struct Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Administrative.DisplayName", "Administrative" },
		{ "Administrative.Name", "EOverlordType::Administrative" },
		{ "BlueprintType", "true" },
		{ "Independent.DisplayName", "Independent" },
		{ "Independent.Name", "EOverlordType::Independent" },
		{ "IsBlueprintBase", "true" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EOverlordType::MAX" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
		{ "Tributary.DisplayName", "Tributary" },
		{ "Tributary.Name", "EOverlordType::Tributary" },
		{ "Vassalage.DisplayName", "Vassalage" },
		{ "Vassalage.Name", "EOverlordType::Vassalage" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOverlordType::Independent", (int64)EOverlordType::Independent },
		{ "EOverlordType::Administrative", (int64)EOverlordType::Administrative },
		{ "EOverlordType::Vassalage", (int64)EOverlordType::Vassalage },
		{ "EOverlordType::Tributary", (int64)EOverlordType::Tributary },
		{ "EOverlordType::MAX", (int64)EOverlordType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	"EOverlordType",
	"EOverlordType",
	Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Heros_Of_ST_EOverlordType()
{
	if (!Z_Registration_Info_UEnum_EOverlordType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOverlordType.InnerSingleton, Z_Construct_UEnum_Heros_Of_ST_EOverlordType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOverlordType.InnerSingleton;
}
// ********** End Enum EOverlordType ***************************************************************

// ********** Begin Class ASTState Function GetCaptial *********************************************
struct Z_Construct_UFunction_ASTState_GetCaptial_Statics
{
	struct STState_eventGetCaptial_Parms
	{
		ASTHolding* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_GetCaptial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventGetCaptial_Parms, ReturnValue), Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTState_GetCaptial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_GetCaptial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetCaptial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTState_GetCaptial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTState, nullptr, "GetCaptial", Z_Construct_UFunction_ASTState_GetCaptial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetCaptial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTState_GetCaptial_Statics::STState_eventGetCaptial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_GetCaptial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTState_GetCaptial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTState_GetCaptial_Statics::STState_eventGetCaptial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTState_GetCaptial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTState_GetCaptial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTState::execGetCaptial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASTHolding**)Z_Param__Result=P_THIS->GetCaptial();
	P_NATIVE_END;
}
// ********** End Class ASTState Function GetCaptial ***********************************************

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
		ASTHolding* capital;
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
	static const UECodeGen_Private::FObjectPropertyParams NewProp_capital;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles_Inner = { "NewTitles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles = { "NewTitles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventInitTitles_Parms, NewTitles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTitles_MetaData), NewProp_NewTitles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_capital = { "capital", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventInitTitles_Parms, capital), Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTState_InitTitles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_NewTitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_InitTitles_Statics::NewProp_capital,
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
	P_GET_OBJECT(ASTHolding,Z_Param_capital);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitTitles(Z_Param_Out_NewTitles,Z_Param_capital);
	P_NATIVE_END;
}
// ********** End Class ASTState Function InitTitles ***********************************************

// ********** Begin Class ASTState Function SubjectTo **********************************************
struct Z_Construct_UFunction_ASTState_SubjectTo_Statics
{
	struct STState_eventSubjectTo_Parms
	{
		ASTState* Overlord;
		EOverlordType NewOverlordType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overlord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewOverlordType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewOverlordType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_Overlord = { "Overlord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventSubjectTo_Parms, Overlord), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_NewOverlordType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_NewOverlordType = { "NewOverlordType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STState_eventSubjectTo_Parms, NewOverlordType), Z_Construct_UEnum_Heros_Of_ST_EOverlordType, METADATA_PARAMS(0, nullptr) }; // 4125830762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTState_SubjectTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_Overlord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_NewOverlordType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTState_SubjectTo_Statics::NewProp_NewOverlordType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_SubjectTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTState_SubjectTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTState, nullptr, "SubjectTo", Z_Construct_UFunction_ASTState_SubjectTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_SubjectTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTState_SubjectTo_Statics::STState_eventSubjectTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTState_SubjectTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTState_SubjectTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTState_SubjectTo_Statics::STState_eventSubjectTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTState_SubjectTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTState_SubjectTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTState::execSubjectTo)
{
	P_GET_OBJECT(ASTState,Z_Param_Overlord);
	P_GET_ENUM(EOverlordType,Z_Param_NewOverlordType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubjectTo(Z_Param_Overlord,EOverlordType(Z_Param_NewOverlordType));
	P_NATIVE_END;
}
// ********** End Class ASTState Function SubjectTo ************************************************

// ********** Begin Class ASTState *****************************************************************
void ASTState::StaticRegisterNativesASTState()
{
	UClass* Class = ASTState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCaptial", &ASTState::execGetCaptial },
		{ "GetTitles", &ASTState::execGetTitles },
		{ "InitTitles", &ASTState::execInitTitles },
		{ "SubjectTo", &ASTState::execSubjectTo },
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Empires, Kingdoms, and States; Not status\n */" },
#endif
		{ "IncludePath", "States/STState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Empires, Kingdoms, and States; Not status" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlordState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlordType_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/States/STState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Captial_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/States/STState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlordState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlordType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlordType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Captial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTState_GetCaptial, "GetCaptial" }, // 1717538785
		{ &Z_Construct_UFunction_ASTState_GetTitles, "GetTitles" }, // 1150230048
		{ &Z_Construct_UFunction_ASTState_InitTitles, "InitTitles" }, // 1856890170
		{ &Z_Construct_UFunction_ASTState_SubjectTo, "SubjectTo" }, // 3391032191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTState_Statics::NewProp_OverlordState = { "OverlordState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTState, OverlordState), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlordState_MetaData), NewProp_OverlordState_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTState_Statics::NewProp_OverlordType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASTState_Statics::NewProp_OverlordType = { "OverlordType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTState, OverlordType), Z_Construct_UEnum_Heros_Of_ST_EOverlordType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlordType_MetaData), NewProp_OverlordType_MetaData) }; // 4125830762
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTState_Statics::NewProp_Captial = { "Captial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTState, Captial), Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Captial_MetaData), NewProp_Captial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTState_Statics::NewProp_OverlordState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTState_Statics::NewProp_OverlordType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTState_Statics::NewProp_OverlordType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTState_Statics::NewProp_Captial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTState_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ASTState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASTState_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOverlordType_StaticEnum, TEXT("EOverlordType"), &Z_Registration_Info_UEnum_EOverlordType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4125830762U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTState, ASTState::StaticClass, TEXT("ASTState"), &Z_Registration_Info_UClass_ASTState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTState), 1286588694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_1754363052(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h__Script_Heros_Of_ST_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
