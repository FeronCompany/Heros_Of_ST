// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Characters/STCharacter.h"
#include "StructsAndInterfaces/CharAttributes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTTitle_NoRegister();
HEROS_OF_ST_API UEnum* Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus();
HEROS_OF_ST_API UEnum* Z_Construct_UEnum_Heros_Of_ST_EDeathReason();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedData();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FCharAttributes();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECharacterStatus **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterStatus;
static UEnum* ECharacterStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("ECharacterStatus"));
	}
	return Z_Registration_Info_UEnum_ECharacterStatus.OuterSingleton;
}
template<> HEROS_OF_ST_API UEnum* StaticEnum<ECharacterStatus>()
{
	return ECharacterStatus_StaticEnum();
}
struct Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dead.DisplayName", "Dead" },
		{ "Dead.Name", "ECharacterStatus::Dead" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ECharacterStatus::Disabled" },
		{ "Healthy.DisplayName", "Healthy" },
		{ "Healthy.Name", "ECharacterStatus::Healthy" },
		{ "Ill.DisplayName", "Ill" },
		{ "Ill.Name", "ECharacterStatus::Ill" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ECharacterStatus::MAX" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
		{ "Wounded.DisplayName", "Wounded" },
		{ "Wounded.Name", "ECharacterStatus::Wounded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterStatus::Healthy", (int64)ECharacterStatus::Healthy },
		{ "ECharacterStatus::Wounded", (int64)ECharacterStatus::Wounded },
		{ "ECharacterStatus::Ill", (int64)ECharacterStatus::Ill },
		{ "ECharacterStatus::Disabled", (int64)ECharacterStatus::Disabled },
		{ "ECharacterStatus::Dead", (int64)ECharacterStatus::Dead },
		{ "ECharacterStatus::MAX", (int64)ECharacterStatus::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	"ECharacterStatus",
	"ECharacterStatus",
	Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus()
{
	if (!Z_Registration_Info_UEnum_ECharacterStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterStatus.InnerSingleton, Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterStatus.InnerSingleton;
}
// ********** End Enum ECharacterStatus ************************************************************

// ********** Begin Enum EDeathReason **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeathReason;
static UEnum* EDeathReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeathReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeathReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Heros_Of_ST_EDeathReason, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("EDeathReason"));
	}
	return Z_Registration_Info_UEnum_EDeathReason.OuterSingleton;
}
template<> HEROS_OF_ST_API UEnum* StaticEnum<EDeathReason>()
{
	return EDeathReason_StaticEnum();
}
struct Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Accident.DisplayName", "Accident" },
		{ "Accident.Name", "EDeathReason::Accident" },
		{ "Alive.DisplayName", "Alive" },
		{ "Alive.Name", "EDeathReason::Alive" },
		{ "BlueprintType", "true" },
		{ "Disappearance.DisplayName", "Disappearance" },
		{ "Disappearance.Name", "EDeathReason::Disappearance" },
		{ "Disease.DisplayName", "Disease" },
		{ "Disease.Name", "EDeathReason::Disease" },
		{ "Execution.DisplayName", "Execution" },
		{ "Execution.Name", "EDeathReason::Execution" },
		{ "KIA.DisplayName", "KIA" },
		{ "KIA.Name", "EDeathReason::KIA" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EDeathReason::MAX" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
		{ "Murder.DisplayName", "Murder" },
		{ "Murder.Name", "EDeathReason::Murder" },
		{ "Natural.DisplayName", "Natural" },
		{ "Natural.Name", "EDeathReason::Natural" },
		{ "NaturalDisaster.DisplayName", "Natural Disaster" },
		{ "NaturalDisaster.Name", "EDeathReason::NaturalDisaster" },
		{ "Slaughter.DisplayName", "Slaughter" },
		{ "Slaughter.Name", "EDeathReason::Slaughter" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDeathReason::Alive", (int64)EDeathReason::Alive },
		{ "EDeathReason::Natural", (int64)EDeathReason::Natural },
		{ "EDeathReason::Disease", (int64)EDeathReason::Disease },
		{ "EDeathReason::KIA", (int64)EDeathReason::KIA },
		{ "EDeathReason::Murder", (int64)EDeathReason::Murder },
		{ "EDeathReason::Disappearance", (int64)EDeathReason::Disappearance },
		{ "EDeathReason::Execution", (int64)EDeathReason::Execution },
		{ "EDeathReason::NaturalDisaster", (int64)EDeathReason::NaturalDisaster },
		{ "EDeathReason::Accident", (int64)EDeathReason::Accident },
		{ "EDeathReason::Slaughter", (int64)EDeathReason::Slaughter },
		{ "EDeathReason::MAX", (int64)EDeathReason::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	"EDeathReason",
	"EDeathReason",
	Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Heros_Of_ST_EDeathReason()
{
	if (!Z_Registration_Info_UEnum_EDeathReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeathReason.InnerSingleton, Z_Construct_UEnum_Heros_Of_ST_EDeathReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeathReason.InnerSingleton;
}
// ********** End Enum EDeathReason ****************************************************************

// ********** Begin ScriptStruct FCharacterSavedData ***********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCharacterSavedData;
class UScriptStruct* FCharacterSavedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterSavedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCharacterSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSavedData, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("CharacterSavedData"));
	}
	return Z_Registration_Info_UScriptStruct_FCharacterSavedData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCharacterSavedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleIDs_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStatus_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathReason_MetaData[] = {
		{ "Category", "Character Saved Data" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TitleIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSavedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_TitleIDs_Inner = { "TitleIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_TitleIDs = { "TitleIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, TitleIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleIDs_MetaData), NewProp_TitleIDs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, Attributes), Z_Construct_UScriptStruct_FCharAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 868948367
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterStatus = { "CharacterStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, CharacterStatus), Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStatus_MetaData), NewProp_CharacterStatus_MetaData) }; // 3890419556
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_DeathReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSavedData, DeathReason), Z_Construct_UEnum_Heros_Of_ST_EDeathReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathReason_MetaData), NewProp_DeathReason_MetaData) }; // 2762350746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_TitleIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_TitleIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_CharacterStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_DeathReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewProp_DeathReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSavedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"CharacterSavedData",
	Z_Construct_UScriptStruct_FCharacterSavedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedData_Statics::PropPointers),
	sizeof(FCharacterSavedData),
	alignof(FCharacterSavedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterSavedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedData()
{
	if (!Z_Registration_Info_UScriptStruct_FCharacterSavedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCharacterSavedData.InnerSingleton, Z_Construct_UScriptStruct_FCharacterSavedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCharacterSavedData.InnerSingleton;
}
// ********** End ScriptStruct FCharacterSavedData *************************************************

// ********** Begin Class ASTCharacter Function AccuireTitle ***************************************
struct Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics
{
	struct STCharacter_eventAccuireTitle_Parms
	{
		USTTitle* NewTitle;
		bool IsInitial;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTitle;
	static void NewProp_IsInitial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInitial;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_NewTitle = { "NewTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STCharacter_eventAccuireTitle_Parms, NewTitle), Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_IsInitial_SetBit(void* Obj)
{
	((STCharacter_eventAccuireTitle_Parms*)Obj)->IsInitial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_IsInitial = { "IsInitial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STCharacter_eventAccuireTitle_Parms), &Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_IsInitial_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STCharacter_eventAccuireTitle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STCharacter_eventAccuireTitle_Parms), &Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_NewTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_IsInitial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTCharacter, nullptr, "AccuireTitle", Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::STCharacter_eventAccuireTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::STCharacter_eventAccuireTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTCharacter_AccuireTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTCharacter_AccuireTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTCharacter::execAccuireTitle)
{
	P_GET_OBJECT(USTTitle,Z_Param_NewTitle);
	P_GET_UBOOL(Z_Param_IsInitial);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AccuireTitle(Z_Param_NewTitle,Z_Param_IsInitial);
	P_NATIVE_END;
}
// ********** End Class ASTCharacter Function AccuireTitle *****************************************

// ********** Begin Class ASTCharacter Function Death **********************************************
struct Z_Construct_UFunction_ASTCharacter_Death_Statics
{
	struct STCharacter_eventDeath_Parms
	{
		EDeathReason ActualDeathReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualDeathReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualDeathReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASTCharacter_Death_Statics::NewProp_ActualDeathReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASTCharacter_Death_Statics::NewProp_ActualDeathReason = { "ActualDeathReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STCharacter_eventDeath_Parms, ActualDeathReason), Z_Construct_UEnum_Heros_Of_ST_EDeathReason, METADATA_PARAMS(0, nullptr) }; // 2762350746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTCharacter_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_Death_Statics::NewProp_ActualDeathReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_Death_Statics::NewProp_ActualDeathReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_Death_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTCharacter_Death_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTCharacter, nullptr, "Death", Z_Construct_UFunction_ASTCharacter_Death_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_Death_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTCharacter_Death_Statics::STCharacter_eventDeath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_Death_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTCharacter_Death_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTCharacter_Death_Statics::STCharacter_eventDeath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTCharacter_Death()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTCharacter_Death_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTCharacter::execDeath)
{
	P_GET_ENUM(EDeathReason,Z_Param_ActualDeathReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Death(EDeathReason(Z_Param_ActualDeathReason));
	P_NATIVE_END;
}
// ********** End Class ASTCharacter Function Death ************************************************

// ********** Begin Class ASTCharacter Function GetSavedData ***************************************
struct Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics
{
	struct STCharacter_eventGetSavedData_Parms
	{
		FCharacterSavedData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STCharacter_eventGetSavedData_Parms, ReturnValue), Z_Construct_UScriptStruct_FCharacterSavedData, METADATA_PARAMS(0, nullptr) }; // 300549726
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTCharacter, nullptr, "GetSavedData", Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::STCharacter_eventGetSavedData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::STCharacter_eventGetSavedData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTCharacter_GetSavedData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTCharacter_GetSavedData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTCharacter::execGetSavedData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCharacterSavedData*)Z_Param__Result=P_THIS->GetSavedData();
	P_NATIVE_END;
}
// ********** End Class ASTCharacter Function GetSavedData *****************************************

// ********** Begin Class ASTCharacter Function RelinquishTitle ************************************
struct Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics
{
	struct STCharacter_eventRelinquishTitle_Parms
	{
		USTTitle* TitleToRelinquish;
		bool IsEndGame;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleToRelinquish;
	static void NewProp_IsEndGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEndGame;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_TitleToRelinquish = { "TitleToRelinquish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STCharacter_eventRelinquishTitle_Parms, TitleToRelinquish), Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_IsEndGame_SetBit(void* Obj)
{
	((STCharacter_eventRelinquishTitle_Parms*)Obj)->IsEndGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_IsEndGame = { "IsEndGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STCharacter_eventRelinquishTitle_Parms), &Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_IsEndGame_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STCharacter_eventRelinquishTitle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STCharacter_eventRelinquishTitle_Parms), &Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_TitleToRelinquish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_IsEndGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ASTCharacter, nullptr, "RelinquishTitle", Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::STCharacter_eventRelinquishTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::STCharacter_eventRelinquishTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTCharacter_RelinquishTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTCharacter_RelinquishTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTCharacter::execRelinquishTitle)
{
	P_GET_OBJECT(USTTitle,Z_Param_TitleToRelinquish);
	P_GET_UBOOL(Z_Param_IsEndGame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RelinquishTitle(Z_Param_TitleToRelinquish,Z_Param_IsEndGame);
	P_NATIVE_END;
}
// ********** End Class ASTCharacter Function RelinquishTitle **************************************

// ********** Begin Class ASTCharacter *************************************************************
void ASTCharacter::StaticRegisterNativesASTCharacter()
{
	UClass* Class = ASTCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AccuireTitle", &ASTCharacter::execAccuireTitle },
		{ "Death", &ASTCharacter::execDeath },
		{ "GetSavedData", &ASTCharacter::execGetSavedData },
		{ "RelinquishTitle", &ASTCharacter::execRelinquishTitle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASTCharacter;
UClass* ASTCharacter::GetPrivateStaticClass()
{
	using TClass = ASTCharacter;
	if (!Z_Registration_Info_UClass_ASTCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STCharacter"),
			Z_Registration_Info_UClass_ASTCharacter.InnerSingleton,
			StaticRegisterNativesASTCharacter,
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
	return Z_Registration_Info_UClass_ASTCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASTCharacter_NoRegister()
{
	return ASTCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASTCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Characters/STCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Titles_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xcd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd0\xb1\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStatus_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xd7\xb4\xcc\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd7\xb4\xcc\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathReason_MetaData[] = {
		{ "Category", "Character" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xad\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/STCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xad\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Titles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Titles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterStatus;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeathReason_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeathReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTCharacter_AccuireTitle, "AccuireTitle" }, // 3578536049
		{ &Z_Construct_UFunction_ASTCharacter_Death, "Death" }, // 3268103029
		{ &Z_Construct_UFunction_ASTCharacter_GetSavedData, "GetSavedData" }, // 3142047241
		{ &Z_Construct_UFunction_ASTCharacter_RelinquishTitle, "RelinquishTitle" }, // 648697662
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles_Inner = { "Titles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles = { "Titles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Titles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Titles_MetaData), NewProp_Titles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Attributes), Z_Construct_UScriptStruct_FCharAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 868948367
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus = { "CharacterStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterStatus), Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStatus_MetaData), NewProp_CharacterStatus_MetaData) }; // 3890419556
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, DeathReason), Z_Construct_UEnum_Heros_Of_ST_EDeathReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathReason_MetaData), NewProp_DeathReason_MetaData) }; // 2762350746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Attributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASTCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTCharacter_Statics::ClassParams = {
	&ASTCharacter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASTCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASTCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASTCharacter()
{
	if (!Z_Registration_Info_UClass_ASTCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTCharacter.OuterSingleton, Z_Construct_UClass_ASTCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASTCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASTCharacter);
ASTCharacter::~ASTCharacter() {}
// ********** End Class ASTCharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterStatus_StaticEnum, TEXT("ECharacterStatus"), &Z_Registration_Info_UEnum_ECharacterStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3890419556U) },
		{ EDeathReason_StaticEnum, TEXT("EDeathReason"), &Z_Registration_Info_UEnum_EDeathReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2762350746U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterSavedData::StaticStruct, Z_Construct_UScriptStruct_FCharacterSavedData_Statics::NewStructOps, TEXT("CharacterSavedData"), &Z_Registration_Info_UScriptStruct_FCharacterSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterSavedData), 300549726U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTCharacter, ASTCharacter::StaticClass, TEXT("ASTCharacter"), &Z_Registration_Info_UClass_ASTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTCharacter), 3461326676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_1070833245(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
