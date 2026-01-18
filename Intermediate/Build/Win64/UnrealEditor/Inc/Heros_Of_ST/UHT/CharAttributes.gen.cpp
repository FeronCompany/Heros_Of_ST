// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructsAndInterfaces/CharAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharAttributes() {}

// ********** Begin Cross Module References ********************************************************
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FCharAttributes();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCharAttributes ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharAttributes;
class UScriptStruct* FCharAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharAttributes, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("CharAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_FCharAttributes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharAttributes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xa3\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Health) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Comprehension) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xa7\xcf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xef\xbf\xbd\xef\xbf\xbd\xd9\xb6\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xcb\xbc (Ingenuity) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xec\xb7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Perception) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb9\xdb\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xcb\xb1\xef\xbf\xbd\xc5\xba\xef\xbf\xbd\xef\xbf\xbd\xda\xbe\xef\xbf\xbd\xef\xbf\xbd\xe9\xb1\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Willpower) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe4\xbf\xb9\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd6\xb2\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Charisma) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xb5\xbc\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Strategy) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xe2\xa3\xac\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n * - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Governance) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbd\xe1\xb9\xb9\xef\xbf\xbd\xef\xbf\xbd\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xa3\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Health) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xb4\xcc\xac\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Comprehension) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xa7\xcf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xa6\xef\xbf\xbd\xc2\xbc\xef\xbf\xbd\xef\xbf\xbd\xdc\xb5\xef\xbf\xbd\xef\xbf\xbd\xd9\xb6\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xcb\xbc (Ingenuity) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xec\xb7\xa2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Perception) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb9\xdb\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb6\xef\xbf\xbd\xcb\xb1\xef\xbf\xbd\xc5\xba\xef\xbf\xbd\xef\xbf\xbd\xda\xbe\xef\xbf\xbd\xef\xbf\xbd\xe9\xb1\xa8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Willpower) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe4\xbf\xb9\xd1\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbc\xef\xbf\xbd\xd6\xb2\xef\xbf\xbd\xd0\xb8\xef\xbf\xbd\xc4\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Charisma) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xc4\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbd\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xec\xb5\xbc\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Strategy) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xb9\xe2\xa3\xac\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb5\xc4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n* - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (Governance) \xef\xbf\xbd\xef\xbf\xbd\xc9\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb4\xef\xbf\xbd\xcd\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xa7\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comprehension_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ingenuity_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Willpower_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Charisma_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strategy_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Governance_MetaData[] = {
		{ "Category", "CharAttributes" },
		{ "ModuleRelativePath", "Public/StructsAndInterfaces/CharAttributes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Comprehension;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ingenuity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Perception;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Willpower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Charisma;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strategy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Governance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharAttributes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Comprehension = { "Comprehension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Comprehension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comprehension_MetaData), NewProp_Comprehension_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Ingenuity = { "Ingenuity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Ingenuity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ingenuity_MetaData), NewProp_Ingenuity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Perception), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Perception_MetaData), NewProp_Perception_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Willpower = { "Willpower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Willpower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Willpower_MetaData), NewProp_Willpower_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Charisma = { "Charisma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Charisma), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Charisma_MetaData), NewProp_Charisma_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Strategy = { "Strategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Strategy), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strategy_MetaData), NewProp_Strategy_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Governance = { "Governance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharAttributes, Governance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Governance_MetaData), NewProp_Governance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Comprehension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Ingenuity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Perception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Willpower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Charisma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Strategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharAttributes_Statics::NewProp_Governance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharAttributes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"CharAttributes",
	Z_Construct_UScriptStruct_FCharAttributes_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAttributes_Statics::PropPointers),
	sizeof(FCharAttributes),
	alignof(FCharAttributes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharAttributes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharAttributes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharAttributes()
{
	if (!Z_Registration_Info_UScriptStruct_FCharAttributes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharAttributes.InnerSingleton, Z_Construct_UScriptStruct_FCharAttributes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharAttributes.InnerSingleton;
}
// ********** End ScriptStruct FCharAttributes *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_StructsAndInterfaces_CharAttributes_h__Script_Heros_Of_ST_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharAttributes::StaticStruct, Z_Construct_UScriptStruct_FCharAttributes_Statics::NewStructOps, TEXT("CharAttributes"), &Z_Registration_Info_UScriptStruct_FCharAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharAttributes), 868948367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_StructsAndInterfaces_CharAttributes_h__Script_Heros_Of_ST_1151289297(TEXT("/Script/Heros_Of_ST"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_StructsAndInterfaces_CharAttributes_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_StructsAndInterfaces_CharAttributes_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
