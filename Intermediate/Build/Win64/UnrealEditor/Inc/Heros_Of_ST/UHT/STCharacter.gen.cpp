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
		{ "ill.DisplayName", "Ill" },
		{ "ill.Name", "ECharacterStatus::ill" },
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
		{ "ECharacterStatus::ill", (int64)ECharacterStatus::ill },
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

// ********** Begin Class ASTCharacter *************************************************************
void ASTCharacter::StaticRegisterNativesASTCharacter()
{
	UClass* Class = ASTCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Death", &ASTCharacter::execDeath },
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
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
		{ &Z_Construct_UFunction_ASTCharacter_Death, "Death" }, // 3268103029
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles_Inner = { "Titles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles = { "Titles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Titles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Titles_MetaData), NewProp_Titles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Attributes), Z_Construct_UScriptStruct_FCharAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 868948367
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterStatus = { "CharacterStatus", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterStatus), Z_Construct_UEnum_Heros_Of_ST_ECharacterStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStatus_MetaData), NewProp_CharacterStatus_MetaData) }; // 3391448368
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_DeathReason = { "DeathReason", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, DeathReason), Z_Construct_UEnum_Heros_Of_ST_EDeathReason, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathReason_MetaData), NewProp_DeathReason_MetaData) }; // 2762350746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID,
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
		{ ECharacterStatus_StaticEnum, TEXT("ECharacterStatus"), &Z_Registration_Info_UEnum_ECharacterStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3391448368U) },
		{ EDeathReason_StaticEnum, TEXT("EDeathReason"), &Z_Registration_Info_UEnum_EDeathReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2762350746U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTCharacter, ASTCharacter::StaticClass, TEXT("ASTCharacter"), &Z_Registration_Info_UClass_ASTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTCharacter), 603484140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_360807999(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
