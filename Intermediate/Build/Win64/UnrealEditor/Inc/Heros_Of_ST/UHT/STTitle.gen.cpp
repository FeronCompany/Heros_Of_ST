// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "States/STTitle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTTitle() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTTitle();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTTitle_NoRegister();
HEROS_OF_ST_API UEnum* Z_Construct_UEnum_Heros_Of_ST_ETitleRank();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FTitleSavedData();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETitleRank ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETitleRank;
static UEnum* ETitleRank_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETitleRank.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETitleRank.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Heros_Of_ST_ETitleRank, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("ETitleRank"));
	}
	return Z_Registration_Info_UEnum_ETitleRank.OuterSingleton;
}
template<> HEROS_OF_ST_API UEnum* StaticEnum<ETitleRank>()
{
	return ETitleRank_StaticEnum();
}
struct Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Baron.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Baron.DisplayName", "Baron" },
		{ "Baron.Name", "ETitleRank::Baron" },
		{ "Baron.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "BlueprintType", "true" },
		{ "Commoner.DisplayName", "Commoner" },
		{ "Commoner.Name", "ETitleRank::Commoner" },
		{ "Count.Comment", "// \xef\xbf\xbd\xd0\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xe7\xb3\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Count.DisplayName", "Count" },
		{ "Count.Name", "ETitleRank::Count" },
		{ "Count.ToolTip", "\xef\xbf\xbd\xd0\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xe7\xb3\xa4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Duke.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xdd\xb4\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Duke.DisplayName", "Duke" },
		{ "Duke.Name", "ETitleRank::Duke" },
		{ "Duke.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xdd\xb4\xef\xbf\xbd\xca\xb7\xef\xbf\xbd\xef\xbf\xbd" },
		{ "Emperor.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf3\xb9\xab\xa1\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "Emperor.DisplayName", "Emperor" },
		{ "Emperor.Name", "ETitleRank::Emperor" },
		{ "Emperor.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc9\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xf3\xb9\xab\xa1\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "IsBlueprintBase", "true" },
		{ "King.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xca\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa2\xef\xbf\xbd\xd8\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xa1\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xa3\xa9\n" },
		{ "King.DisplayName", "King" },
		{ "King.Name", "ETitleRank::King" },
		{ "King.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb6\xef\xbf\xbd\xca\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdc\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa2\xef\xbf\xbd\xd8\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xa1\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xa3\xa9" },
		{ "Knight.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xcd\xb7\xef\xbf\xbd\xce\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xb3\xa4\xef\xbf\xbd\xef\xbf\xbd\xd7\xa1\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd\n" },
		{ "Knight.DisplayName", "Knight" },
		{ "Knight.Name", "ETitleRank::Knight" },
		{ "Knight.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xaf\xcd\xb7\xef\xbf\xbd\xce\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe9\xb3\xa4\xef\xbf\xbd\xef\xbf\xbd\xd7\xa1\xef\xbf\xbd\xd6\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xa3\xef\xbf\xbd" },
		{ "Marquis.Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xa3\xa9\n" },
		{ "Marquis.DisplayName", "Marquis" },
		{ "Marquis.Name", "ETitleRank::Marquis" },
		{ "Marquis.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd9\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xee\xa3\xa9" },
		{ "MAX.Comment", "// \xef\xbf\xbd\xca\xb5\xdb\xa1\xef\xbf\xbd\xef\xbf\xbd\xf3\xba\xb9\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb9\xef\xbf\xbd\xcb\xb9\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ETitleRank::MAX" },
		{ "MAX.ToolTip", "\xef\xbf\xbd\xca\xb5\xdb\xa1\xef\xbf\xbd\xef\xbf\xbd\xf3\xba\xb9\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb9\xef\xbf\xbd\xcb\xb9\xef\xbf\xbd\xef\xbf\xbd" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETitleRank::Commoner", (int64)ETitleRank::Commoner },
		{ "ETitleRank::Knight", (int64)ETitleRank::Knight },
		{ "ETitleRank::Baron", (int64)ETitleRank::Baron },
		{ "ETitleRank::Count", (int64)ETitleRank::Count },
		{ "ETitleRank::Marquis", (int64)ETitleRank::Marquis },
		{ "ETitleRank::Duke", (int64)ETitleRank::Duke },
		{ "ETitleRank::King", (int64)ETitleRank::King },
		{ "ETitleRank::Emperor", (int64)ETitleRank::Emperor },
		{ "ETitleRank::MAX", (int64)ETitleRank::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	"ETitleRank",
	"ETitleRank",
	Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Heros_Of_ST_ETitleRank()
{
	if (!Z_Registration_Info_UEnum_ETitleRank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETitleRank.InnerSingleton, Z_Construct_UEnum_Heros_Of_ST_ETitleRank_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETitleRank.InnerSingleton;
}
// ********** End Enum ETitleRank ******************************************************************

// ********** Begin ScriptStruct FTitleSavedData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTitleSavedData;
class UScriptStruct* FTitleSavedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTitleSavedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTitleSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTitleSavedData, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("TitleSavedData"));
	}
	return Z_Registration_Info_UScriptStruct_FTitleSavedData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTitleSavedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleName_MetaData[] = {
		{ "Category", "Title Saved Data" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleDescription_MetaData[] = {
		{ "Category", "Title Saved Data" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleHolderID_MetaData[] = {
		{ "Category", "Title Saved Data" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleBelongingStateID_MetaData[] = {
		{ "Category", "Title Saved Data" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleRank_MetaData[] = {
		{ "Category", "Title Saved Data" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleHolderID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleBelongingStateID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TitleRank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TitleRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTitleSavedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleName = { "TitleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTitleSavedData, TitleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleName_MetaData), NewProp_TitleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleDescription = { "TitleDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTitleSavedData, TitleDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleDescription_MetaData), NewProp_TitleDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleHolderID = { "TitleHolderID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTitleSavedData, TitleHolderID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleHolderID_MetaData), NewProp_TitleHolderID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleBelongingStateID = { "TitleBelongingStateID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTitleSavedData, TitleBelongingStateID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleBelongingStateID_MetaData), NewProp_TitleBelongingStateID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleRank = { "TitleRank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTitleSavedData, TitleRank), Z_Construct_UEnum_Heros_Of_ST_ETitleRank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleRank_MetaData), NewProp_TitleRank_MetaData) }; // 3444996430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTitleSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleHolderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleBelongingStateID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleRank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewProp_TitleRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTitleSavedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"TitleSavedData",
	Z_Construct_UScriptStruct_FTitleSavedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleSavedData_Statics::PropPointers),
	sizeof(FTitleSavedData),
	alignof(FTitleSavedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTitleSavedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTitleSavedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTitleSavedData()
{
	if (!Z_Registration_Info_UScriptStruct_FTitleSavedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTitleSavedData.InnerSingleton, Z_Construct_UScriptStruct_FTitleSavedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTitleSavedData.InnerSingleton;
}
// ********** End ScriptStruct FTitleSavedData *****************************************************

// ********** Begin Class USTTitle Function GetSavedTitleData **************************************
struct Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics
{
	struct STTitle_eventGetSavedTitleData_Parms
	{
		FTitleSavedData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STTitle_eventGetSavedTitleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTitleSavedData, METADATA_PARAMS(0, nullptr) }; // 1718563148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTTitle, nullptr, "GetSavedTitleData", Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::STTitle_eventGetSavedTitleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::STTitle_eventGetSavedTitleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTTitle_GetSavedTitleData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTTitle_GetSavedTitleData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTTitle::execGetSavedTitleData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTitleSavedData*)Z_Param__Result=P_THIS->GetSavedTitleData();
	P_NATIVE_END;
}
// ********** End Class USTTitle Function GetSavedTitleData ****************************************

// ********** Begin Class USTTitle *****************************************************************
void USTTitle::StaticRegisterNativesUSTTitle()
{
	UClass* Class = USTTitle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSavedTitleData", &USTTitle::execGetSavedTitleData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTTitle;
UClass* USTTitle::GetPrivateStaticClass()
{
	using TClass = USTTitle;
	if (!Z_Registration_Info_UClass_USTTitle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STTitle"),
			Z_Registration_Info_UClass_USTTitle.InnerSingleton,
			StaticRegisterNativesUSTTitle,
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
	return Z_Registration_Info_UClass_USTTitle.InnerSingleton;
}
UClass* Z_Construct_UClass_USTTitle_NoRegister()
{
	return USTTitle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTTitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xce\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xba\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "States/STTitle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xce\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xba\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleName_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleDescription_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleHolder_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleBelonging_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleRank_MetaData[] = {
		{ "Category", "Title" },
		{ "ModuleRelativePath", "Public/States/STTitle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleHolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleBelonging;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TitleRank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TitleRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USTTitle_GetSavedTitleData, "GetSavedTitleData" }, // 210579408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTTitle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleName = { "TitleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleName_MetaData), NewProp_TitleName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleDescription = { "TitleDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleDescription_MetaData), NewProp_TitleDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleHolder = { "TitleHolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleHolder), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleHolder_MetaData), NewProp_TitleHolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleBelonging = { "TitleBelonging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleBelonging), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleBelonging_MetaData), NewProp_TitleBelonging_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleRank = { "TitleRank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleRank), Z_Construct_UEnum_Heros_Of_ST_ETitleRank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleRank_MetaData), NewProp_TitleRank_MetaData) }; // 3444996430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleHolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleBelonging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleRank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTitle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTTitle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTTitle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTTitle_Statics::ClassParams = {
	&USTTitle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USTTitle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USTTitle_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTTitle_Statics::Class_MetaDataParams), Z_Construct_UClass_USTTitle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTTitle()
{
	if (!Z_Registration_Info_UClass_USTTitle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTTitle.OuterSingleton, Z_Construct_UClass_USTTitle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTTitle.OuterSingleton;
}
USTTitle::USTTitle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTTitle);
USTTitle::~USTTitle() {}
// ********** End Class USTTitle *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETitleRank_StaticEnum, TEXT("ETitleRank"), &Z_Registration_Info_UEnum_ETitleRank, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444996430U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTitleSavedData::StaticStruct, Z_Construct_UScriptStruct_FTitleSavedData_Statics::NewStructOps, TEXT("TitleSavedData"), &Z_Registration_Info_UScriptStruct_FTitleSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTitleSavedData), 1718563148U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTTitle, USTTitle::StaticClass, TEXT("USTTitle"), &Z_Registration_Info_UClass_USTTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTTitle), 2862996633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_1812972441(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
