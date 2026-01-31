// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceManagment/CharacterSearcher.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterSearcher() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTHolding_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher();
HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCulture_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTHouse_NoRegister();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FSavedDataBriefInfo();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSavedDataBriefInfo ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo;
class UScriptStruct* FSavedDataBriefInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedDataBriefInfo, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("SavedDataBriefInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "Saved Data Brief Info" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveTime_MetaData[] = {
		{ "Category", "Saved Data Brief Info" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SaveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedDataBriefInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedDataBriefInfo, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::NewProp_SaveTime = { "SaveTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSavedDataBriefInfo, SaveTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveTime_MetaData), NewProp_SaveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::NewProp_SaveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"SavedDataBriefInfo",
	Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::PropPointers),
	sizeof(FSavedDataBriefInfo),
	alignof(FSavedDataBriefInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSavedDataBriefInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.InnerSingleton, Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo.InnerSingleton;
}
// ********** End ScriptStruct FSavedDataBriefInfo *************************************************

// ********** Begin Class UCharacterSearcher Function ClearAll *************************************
struct Z_Construct_UFunction_UCharacterSearcher_ClearAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_ClearAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "ClearAll", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_ClearAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_ClearAll_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCharacterSearcher_ClearAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_ClearAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execClearAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAll();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function ClearAll ***************************************

// ********** Begin Class UCharacterSearcher Function DeleteSaveData *******************************
struct Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics
{
	struct CharacterSearcher_eventDeleteSaveData_Parms
	{
		FString SlotName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventDeleteSaveData_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventDeleteSaveData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventDeleteSaveData_Parms), &Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "DeleteSaveData", Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::CharacterSearcher_eventDeleteSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::CharacterSearcher_eventDeleteSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execDeleteSaveData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeleteSaveData(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function DeleteSaveData *********************************

// ********** Begin Class UCharacterSearcher Function FindCharacterByID ****************************
struct Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics
{
	struct CharacterSearcher_eventFindCharacterByID_Parms
	{
		FString CharacterID;
		ASTCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCharacterByID_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCharacterByID_Parms, ReturnValue), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindCharacterByID", Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::CharacterSearcher_eventFindCharacterByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::CharacterSearcher_eventFindCharacterByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execFindCharacterByID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASTCharacter**)Z_Param__Result=P_THIS->FindCharacterByID(Z_Param_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindCharacterByID ******************************

// ********** Begin Class UCharacterSearcher Function FindCultureByID ******************************
struct Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics
{
	struct CharacterSearcher_eventFindCultureByID_Parms
	{
		FString CultureId;
		USTCulture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cultures Related\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cultures Related" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::NewProp_CultureId = { "CultureId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCultureByID_Parms, CultureId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureId_MetaData), NewProp_CultureId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCultureByID_Parms, ReturnValue), Z_Construct_UClass_USTCulture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::NewProp_CultureId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindCultureByID", Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::CharacterSearcher_eventFindCultureByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::CharacterSearcher_eventFindCultureByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_FindCultureByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_FindCultureByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execFindCultureByID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CultureId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USTCulture**)Z_Param__Result=P_THIS->FindCultureByID(Z_Param_CultureId);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindCultureByID ********************************

// ********** Begin Class UCharacterSearcher Function FindHoldingByID ******************************
struct Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics
{
	struct CharacterSearcher_eventFindHoldingByID_Parms
	{
		FString HoldingId;
		ASTHolding* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holdings Related\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holdings Related" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::NewProp_HoldingId = { "HoldingId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindHoldingByID_Parms, HoldingId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingId_MetaData), NewProp_HoldingId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindHoldingByID_Parms, ReturnValue), Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::NewProp_HoldingId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindHoldingByID", Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::CharacterSearcher_eventFindHoldingByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::CharacterSearcher_eventFindHoldingByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execFindHoldingByID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HoldingId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASTHolding**)Z_Param__Result=P_THIS->FindHoldingByID(Z_Param_HoldingId);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindHoldingByID ********************************

// ********** Begin Class UCharacterSearcher Function FindHouseByID ********************************
struct Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics
{
	struct CharacterSearcher_eventFindHouseByID_Parms
	{
		FString HouseId;
		USTHouse* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// House Related\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "House Related" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::NewProp_HouseId = { "HouseId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindHouseByID_Parms, HouseId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseId_MetaData), NewProp_HouseId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindHouseByID_Parms, ReturnValue), Z_Construct_UClass_USTHouse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::NewProp_HouseId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindHouseByID", Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::CharacterSearcher_eventFindHouseByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::CharacterSearcher_eventFindHouseByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_FindHouseByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_FindHouseByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execFindHouseByID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HouseId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USTHouse**)Z_Param__Result=P_THIS->FindHouseByID(Z_Param_HouseId);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindHouseByID **********************************

// ********** Begin Class UCharacterSearcher Function FindStateByID ********************************
struct Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics
{
	struct CharacterSearcher_eventFindStateByID_Parms
	{
		FString StateId;
		ASTState* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// States Related\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "States Related" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindStateByID_Parms, StateId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindStateByID_Parms, ReturnValue), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::NewProp_StateId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindStateByID", Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::CharacterSearcher_eventFindStateByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::CharacterSearcher_eventFindStateByID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_FindStateByID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_FindStateByID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execFindStateByID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StateId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASTState**)Z_Param__Result=P_THIS->FindStateByID(Z_Param_StateId);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindStateByID **********************************

// ********** Begin Class UCharacterSearcher Function Get ******************************************
struct Z_Construct_UFunction_UCharacterSearcher_Get_Statics
{
	struct CharacterSearcher_eventGet_Parms
	{
		UCharacterSearcher* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventGet_Parms, ReturnValue), Z_Construct_UClass_UCharacterSearcher_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_Get_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "Get", Z_Construct_UFunction_UCharacterSearcher_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_Get_Statics::CharacterSearcher_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_Get_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_Get_Statics::CharacterSearcher_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCharacterSearcher**)Z_Param__Result=UCharacterSearcher::Get();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function Get ********************************************

// ********** Begin Class UCharacterSearcher Function GetAllSavedFileInfos *************************
struct Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics
{
	struct CharacterSearcher_eventGetAllSavedFileInfos_Parms
	{
		TArray<FSavedDataBriefInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSavedDataBriefInfo, METADATA_PARAMS(0, nullptr) }; // 1725224162
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventGetAllSavedFileInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1725224162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "GetAllSavedFileInfos", Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::CharacterSearcher_eventGetAllSavedFileInfos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::CharacterSearcher_eventGetAllSavedFileInfos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execGetAllSavedFileInfos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FSavedDataBriefInfo>*)Z_Param__Result=P_THIS->GetAllSavedFileInfos();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function GetAllSavedFileInfos ***************************

// ********** Begin Class UCharacterSearcher Function GetPlayableCharacters ************************
struct Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics
{
	struct CharacterSearcher_eventGetPlayableCharacters_Parms
	{
		TArray<ASTCharacter*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventGetPlayableCharacters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "GetPlayableCharacters", Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::CharacterSearcher_eventGetPlayableCharacters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::CharacterSearcher_eventGetPlayableCharacters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execGetPlayableCharacters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<ASTCharacter*>*)Z_Param__Result=P_THIS->GetPlayableCharacters();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function GetPlayableCharacters **************************

// ********** Begin Class UCharacterSearcher Function LoadHistory **********************************
struct Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics
{
	struct CharacterSearcher_eventLoadHistory_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventLoadHistory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventLoadHistory_Parms), &Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "LoadHistory", Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::CharacterSearcher_eventLoadHistory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::CharacterSearcher_eventLoadHistory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_LoadHistory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_LoadHistory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execLoadHistory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadHistory();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function LoadHistory ************************************

// ********** Begin Class UCharacterSearcher Function LoadRules ************************************
struct Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics
{
	struct CharacterSearcher_eventLoadRules_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventLoadRules_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventLoadRules_Parms), &Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "LoadRules", Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::CharacterSearcher_eventLoadRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::CharacterSearcher_eventLoadRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_LoadRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_LoadRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execLoadRules)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadRules();
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function LoadRules **************************************

// ********** Begin Class UCharacterSearcher Function LoadSaveData *********************************
struct Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics
{
	struct CharacterSearcher_eventLoadSaveData_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventLoadSaveData_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventLoadSaveData_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventLoadSaveData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventLoadSaveData_Parms), &Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "LoadSaveData", Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::CharacterSearcher_eventLoadSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::CharacterSearcher_eventLoadSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_LoadSaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_LoadSaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execLoadSaveData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadSaveData(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function LoadSaveData ***********************************

// ********** Begin Class UCharacterSearcher Function RegisterCharacter ****************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics
{
	struct CharacterSearcher_eventRegisterCharacter_Parms
	{
		ASTCharacter* Character;
		FString CharacterID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCharacter_Parms, Character), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCharacter_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventRegisterCharacter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventRegisterCharacter_Parms), &Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterCharacter", Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::CharacterSearcher_eventRegisterCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::CharacterSearcher_eventRegisterCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execRegisterCharacter)
{
	P_GET_OBJECT(ASTCharacter,Z_Param_Character);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterCharacter(Z_Param_Character,Z_Param_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterCharacter ******************************

// ********** Begin Class UCharacterSearcher Function RegisterCulture ******************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics
{
	struct CharacterSearcher_eventRegisterCulture_Parms
	{
		USTCulture* Culture;
		FString CultureID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Culture;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCulture_Parms, Culture), Z_Construct_UClass_USTCulture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_CultureID = { "CultureID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCulture_Parms, CultureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureID_MetaData), NewProp_CultureID_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventRegisterCulture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventRegisterCulture_Parms), &Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_CultureID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterCulture", Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::CharacterSearcher_eventRegisterCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::CharacterSearcher_eventRegisterCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_RegisterCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_RegisterCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execRegisterCulture)
{
	P_GET_OBJECT(USTCulture,Z_Param_Culture);
	P_GET_PROPERTY(FStrProperty,Z_Param_CultureID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterCulture(Z_Param_Culture,Z_Param_CultureID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterCulture ********************************

// ********** Begin Class UCharacterSearcher Function RegisterHolding ******************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics
{
	struct CharacterSearcher_eventRegisterHolding_Parms
	{
		ASTHolding* Holding;
		FString HoldingID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Holding;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_Holding = { "Holding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterHolding_Parms, Holding), Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_HoldingID = { "HoldingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterHolding_Parms, HoldingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingID_MetaData), NewProp_HoldingID_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventRegisterHolding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventRegisterHolding_Parms), &Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_Holding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_HoldingID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterHolding", Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::CharacterSearcher_eventRegisterHolding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::CharacterSearcher_eventRegisterHolding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_RegisterHolding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_RegisterHolding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execRegisterHolding)
{
	P_GET_OBJECT(ASTHolding,Z_Param_Holding);
	P_GET_PROPERTY(FStrProperty,Z_Param_HoldingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterHolding(Z_Param_Holding,Z_Param_HoldingID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterHolding ********************************

// ********** Begin Class UCharacterSearcher Function RegisterHouse ********************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics
{
	struct CharacterSearcher_eventRegisterHouse_Parms
	{
		USTHouse* House;
		FString HouseID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_House;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_House = { "House", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterHouse_Parms, House), Z_Construct_UClass_USTHouse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_HouseID = { "HouseID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterHouse_Parms, HouseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseID_MetaData), NewProp_HouseID_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventRegisterHouse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventRegisterHouse_Parms), &Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_House,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_HouseID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterHouse", Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::CharacterSearcher_eventRegisterHouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::CharacterSearcher_eventRegisterHouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_RegisterHouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_RegisterHouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execRegisterHouse)
{
	P_GET_OBJECT(USTHouse,Z_Param_House);
	P_GET_PROPERTY(FStrProperty,Z_Param_HouseID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterHouse(Z_Param_House,Z_Param_HouseID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterHouse **********************************

// ********** Begin Class UCharacterSearcher Function RegisterState ********************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics
{
	struct CharacterSearcher_eventRegisterState_Parms
	{
		ASTState* State;
		FString StateID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_State;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterState_Parms, State), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_StateID = { "StateID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterState_Parms, StateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateID_MetaData), NewProp_StateID_MetaData) };
void Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CharacterSearcher_eventRegisterState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CharacterSearcher_eventRegisterState_Parms), &Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_StateID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterState", Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::CharacterSearcher_eventRegisterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::CharacterSearcher_eventRegisterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_RegisterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_RegisterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execRegisterState)
{
	P_GET_OBJECT(ASTState,Z_Param_State);
	P_GET_PROPERTY(FStrProperty,Z_Param_StateID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterState(Z_Param_State,Z_Param_StateID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterState **********************************

// ********** Begin Class UCharacterSearcher Function SaveData *************************************
struct Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics
{
	struct CharacterSearcher_eventSaveData_Parms
	{
		FString SlotName;
		int32 UserIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventSaveData_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventSaveData_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "SaveData", Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::CharacterSearcher_eventSaveData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::CharacterSearcher_eventSaveData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_SaveData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_SaveData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execSaveData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveData(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function SaveData ***************************************

// ********** Begin Class UCharacterSearcher Function UnregisterCharacter **************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics
{
	struct CharacterSearcher_eventUnregisterCharacter_Parms
	{
		FString CharacterID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterCharacter_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::NewProp_CharacterID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterCharacter", Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::CharacterSearcher_eventUnregisterCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::CharacterSearcher_eventUnregisterCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execUnregisterCharacter)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCharacter(Z_Param_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterCharacter ****************************

// ********** Begin Class UCharacterSearcher Function UnregisterCulture ****************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics
{
	struct CharacterSearcher_eventUnregisterCulture_Parms
	{
		FString CultureID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::NewProp_CultureID = { "CultureID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterCulture_Parms, CultureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureID_MetaData), NewProp_CultureID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::NewProp_CultureID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterCulture", Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::CharacterSearcher_eventUnregisterCulture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::CharacterSearcher_eventUnregisterCulture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execUnregisterCulture)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CultureID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCulture(Z_Param_CultureID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterCulture ******************************

// ********** Begin Class UCharacterSearcher Function UnregisterHolding ****************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics
{
	struct CharacterSearcher_eventUnregisterHolding_Parms
	{
		FString HoldingID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::NewProp_HoldingID = { "HoldingID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterHolding_Parms, HoldingID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingID_MetaData), NewProp_HoldingID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::NewProp_HoldingID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterHolding", Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::CharacterSearcher_eventUnregisterHolding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::CharacterSearcher_eventUnregisterHolding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execUnregisterHolding)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HoldingID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterHolding(Z_Param_HoldingID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterHolding ******************************

// ********** Begin Class UCharacterSearcher Function UnregisterHouse ******************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics
{
	struct CharacterSearcher_eventUnregisterHouse_Parms
	{
		FString HouseID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::NewProp_HouseID = { "HouseID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterHouse_Parms, HouseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseID_MetaData), NewProp_HouseID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::NewProp_HouseID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterHouse", Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::CharacterSearcher_eventUnregisterHouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::CharacterSearcher_eventUnregisterHouse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execUnregisterHouse)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HouseID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterHouse(Z_Param_HouseID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterHouse ********************************

// ********** Begin Class UCharacterSearcher Function UnregisterState ******************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics
{
	struct CharacterSearcher_eventUnregisterState_Parms
	{
		FString StateID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Searcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::NewProp_StateID = { "StateID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterState_Parms, StateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateID_MetaData), NewProp_StateID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::NewProp_StateID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterState", Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::CharacterSearcher_eventUnregisterState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::CharacterSearcher_eventUnregisterState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterSearcher_UnregisterState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSearcher_UnregisterState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSearcher::execUnregisterState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StateID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterState(Z_Param_StateID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterState ********************************

// ********** Begin Class UCharacterSearcher *******************************************************
void UCharacterSearcher::StaticRegisterNativesUCharacterSearcher()
{
	UClass* Class = UCharacterSearcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAll", &UCharacterSearcher::execClearAll },
		{ "DeleteSaveData", &UCharacterSearcher::execDeleteSaveData },
		{ "FindCharacterByID", &UCharacterSearcher::execFindCharacterByID },
		{ "FindCultureByID", &UCharacterSearcher::execFindCultureByID },
		{ "FindHoldingByID", &UCharacterSearcher::execFindHoldingByID },
		{ "FindHouseByID", &UCharacterSearcher::execFindHouseByID },
		{ "FindStateByID", &UCharacterSearcher::execFindStateByID },
		{ "Get", &UCharacterSearcher::execGet },
		{ "GetAllSavedFileInfos", &UCharacterSearcher::execGetAllSavedFileInfos },
		{ "GetPlayableCharacters", &UCharacterSearcher::execGetPlayableCharacters },
		{ "LoadHistory", &UCharacterSearcher::execLoadHistory },
		{ "LoadRules", &UCharacterSearcher::execLoadRules },
		{ "LoadSaveData", &UCharacterSearcher::execLoadSaveData },
		{ "RegisterCharacter", &UCharacterSearcher::execRegisterCharacter },
		{ "RegisterCulture", &UCharacterSearcher::execRegisterCulture },
		{ "RegisterHolding", &UCharacterSearcher::execRegisterHolding },
		{ "RegisterHouse", &UCharacterSearcher::execRegisterHouse },
		{ "RegisterState", &UCharacterSearcher::execRegisterState },
		{ "SaveData", &UCharacterSearcher::execSaveData },
		{ "UnregisterCharacter", &UCharacterSearcher::execUnregisterCharacter },
		{ "UnregisterCulture", &UCharacterSearcher::execUnregisterCulture },
		{ "UnregisterHolding", &UCharacterSearcher::execUnregisterHolding },
		{ "UnregisterHouse", &UCharacterSearcher::execUnregisterHouse },
		{ "UnregisterState", &UCharacterSearcher::execUnregisterState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCharacterSearcher;
UClass* UCharacterSearcher::GetPrivateStaticClass()
{
	using TClass = UCharacterSearcher;
	if (!Z_Registration_Info_UClass_UCharacterSearcher.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterSearcher"),
			Z_Registration_Info_UClass_UCharacterSearcher.InnerSingleton,
			StaticRegisterNativesUCharacterSearcher,
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
	return Z_Registration_Info_UClass_UCharacterSearcher.InnerSingleton;
}
UClass* Z_Construct_UClass_UCharacterSearcher_NoRegister()
{
	return UCharacterSearcher::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCharacterSearcher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe5\x85\xa8\xe5\xb1\x80\xe6\x90\x9c\xe7\xb4\xa2\xe5\x99\xa8\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe6\xb3\xa8\xe5\x86\x8c\xe5\x92\x8c\xe6\x9f\xa5\xe6\x89\xbe\xe8\xa7\x92\xe8\x89\xb2\xe5\xae\x9e\xe4\xbe\x8b\n */" },
#endif
		{ "IncludePath", "ResourceManagment/CharacterSearcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xb8\xb8\xe6\x88\x8f\xe4\xb8\xad\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe5\x85\xa8\xe5\xb1\x80\xe6\x90\x9c\xe7\xb4\xa2\xe5\x99\xa8\xef\xbc\x8c\xe8\xb4\x9f\xe8\xb4\xa3\xe6\xb3\xa8\xe5\x86\x8c\xe5\x92\x8c\xe6\x9f\xa5\xe6\x89\xbe\xe8\xa7\x92\xe8\x89\xb2\xe5\xae\x9e\xe4\xbe\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentControlledCharacter_MetaData[] = {
		{ "Category", "CharacterSearcher" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Maps for storing characters, states, and holdings\n// Key: ID (FName), Value: Pointer to the object\n// \xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xad\x98\xe5\x82\xa8Titles\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xbaTitle\xe6\x98\xafState\xe5\x92\x8c""Character\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x8c\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x94\xb1State\xe7\xae\xa1\xe7\x90\x86\n// \xe5\x87\xa0\xe7\xa7\x8d\xe6\x95\xb0\xe6\x8d\xae\xe8\x80\xa6\xe5\x90\x88\xe5\xba\xa6\xe8\xbe\x83\xe9\xab\x98\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe7\xbb\x9f\xe4\xb8\x80\xe7\xae\xa1\xe7\x90\x86\n" },
#endif
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps for storing characters, states, and holdings\nKey: ID (FName), Value: Pointer to the object\n\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe5\xad\x98\xe5\x82\xa8Titles\xef\xbc\x8c\xe5\x9b\xa0\xe4\xb8\xbaTitle\xe6\x98\xafState\xe5\x92\x8c""Character\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\xef\xbc\x8c\xe7\x94\x9f\xe5\x91\xbd\xe5\x91\xa8\xe6\x9c\x9f\xe7\x94\xb1State\xe7\xae\xa1\xe7\x90\x86\n\xe5\x87\xa0\xe7\xa7\x8d\xe6\x95\xb0\xe6\x8d\xae\xe8\x80\xa6\xe5\x90\x88\xe5\xba\xa6\xe8\xbe\x83\xe9\xab\x98\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe7\xbb\x9f\xe4\xb8\x80\xe7\xae\xa1\xe7\x90\x86" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoldingMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_currentControlledCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StateMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StateMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldingMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HoldingMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HoldingMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CultureMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CultureMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HouseMap_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_HouseMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSearcher_ClearAll, "ClearAll" }, // 2704174338
		{ &Z_Construct_UFunction_UCharacterSearcher_DeleteSaveData, "DeleteSaveData" }, // 1248946374
		{ &Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID, "FindCharacterByID" }, // 1663418293
		{ &Z_Construct_UFunction_UCharacterSearcher_FindCultureByID, "FindCultureByID" }, // 138621630
		{ &Z_Construct_UFunction_UCharacterSearcher_FindHoldingByID, "FindHoldingByID" }, // 918380490
		{ &Z_Construct_UFunction_UCharacterSearcher_FindHouseByID, "FindHouseByID" }, // 735871529
		{ &Z_Construct_UFunction_UCharacterSearcher_FindStateByID, "FindStateByID" }, // 2079937691
		{ &Z_Construct_UFunction_UCharacterSearcher_Get, "Get" }, // 3679827971
		{ &Z_Construct_UFunction_UCharacterSearcher_GetAllSavedFileInfos, "GetAllSavedFileInfos" }, // 3214580757
		{ &Z_Construct_UFunction_UCharacterSearcher_GetPlayableCharacters, "GetPlayableCharacters" }, // 519419001
		{ &Z_Construct_UFunction_UCharacterSearcher_LoadHistory, "LoadHistory" }, // 3428593841
		{ &Z_Construct_UFunction_UCharacterSearcher_LoadRules, "LoadRules" }, // 401146099
		{ &Z_Construct_UFunction_UCharacterSearcher_LoadSaveData, "LoadSaveData" }, // 615557450
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter, "RegisterCharacter" }, // 3509135174
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterCulture, "RegisterCulture" }, // 484890662
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterHolding, "RegisterHolding" }, // 1129795752
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterHouse, "RegisterHouse" }, // 2466988745
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterState, "RegisterState" }, // 3934203223
		{ &Z_Construct_UFunction_UCharacterSearcher_SaveData, "SaveData" }, // 3641289133
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter, "UnregisterCharacter" }, // 2866374325
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterCulture, "UnregisterCulture" }, // 2026062768
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterHolding, "UnregisterHolding" }, // 665760706
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterHouse, "UnregisterHouse" }, // 2612274980
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterState, "UnregisterState" }, // 3948668342
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSearcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_currentControlledCharacter = { "currentControlledCharacter", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, currentControlledCharacter), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentControlledCharacter_MetaData), NewProp_currentControlledCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap_ValueProp = { "CharacterMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap_Key_KeyProp = { "CharacterMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap = { "CharacterMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, CharacterMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMap_MetaData), NewProp_CharacterMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap_ValueProp = { "StateMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap_Key_KeyProp = { "StateMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap = { "StateMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, StateMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateMap_MetaData), NewProp_StateMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap_ValueProp = { "HoldingMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ASTHolding_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap_Key_KeyProp = { "HoldingMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap = { "HoldingMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, HoldingMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoldingMap_MetaData), NewProp_HoldingMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap_ValueProp = { "CultureMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USTCulture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap_Key_KeyProp = { "CultureMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap = { "CultureMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, CultureMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureMap_MetaData), NewProp_CultureMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap_ValueProp = { "HouseMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_USTHouse_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap_Key_KeyProp = { "HouseMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap = { "HouseMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSearcher, HouseMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseMap_MetaData), NewProp_HouseMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSearcher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_currentControlledCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CharacterMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_StateMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HoldingMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_CultureMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSearcher_Statics::NewProp_HouseMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSearcher_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterSearcher_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSearcher_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSearcher_Statics::ClassParams = {
	&UCharacterSearcher::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterSearcher_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSearcher_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSearcher_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSearcher_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSearcher()
{
	if (!Z_Registration_Info_UClass_UCharacterSearcher.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSearcher.OuterSingleton, Z_Construct_UClass_UCharacterSearcher_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSearcher.OuterSingleton;
}
UCharacterSearcher::UCharacterSearcher(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSearcher);
UCharacterSearcher::~UCharacterSearcher() {}
// ********** End Class UCharacterSearcher *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSavedDataBriefInfo::StaticStruct, Z_Construct_UScriptStruct_FSavedDataBriefInfo_Statics::NewStructOps, TEXT("SavedDataBriefInfo"), &Z_Registration_Info_UScriptStruct_FSavedDataBriefInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSavedDataBriefInfo), 1725224162U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSearcher, UCharacterSearcher::StaticClass, TEXT("UCharacterSearcher"), &Z_Registration_Info_UClass_UCharacterSearcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSearcher), 2064910281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_3726044428(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
