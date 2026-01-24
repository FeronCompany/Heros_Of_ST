// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ResourceManagment/STSaveGame.h"
#include "Characters/STCharacter.h"
#include "States/STHolding.h"
#include "States/STState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTSaveGame() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTSaveGame();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTSaveGame_NoRegister();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedData();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FHoldingSavedData();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FStateSavedData();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTSaveGame **************************************************************
void USTSaveGame::StaticRegisterNativesUSTSaveGame()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTSaveGame;
UClass* USTSaveGame::GetPrivateStaticClass()
{
	using TClass = USTSaveGame;
	if (!Z_Registration_Info_UClass_USTSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STSaveGame"),
			Z_Registration_Info_UClass_USTSaveGame.InnerSingleton,
			StaticRegisterNativesUSTSaveGame,
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
	return Z_Registration_Info_UClass_USTSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_USTSaveGame_NoRegister()
{
	return USTSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceManagment/STSaveGame.h" },
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedHoldings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSavedVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacterID_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResourceManagment/STSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedCharacters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedCharacters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedHoldings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedHoldings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSavedVersion;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MainCharacterID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedCharacters_Inner = { "SavedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCharacterSavedData, METADATA_PARAMS(0, nullptr) }; // 300549726
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedCharacters = { "SavedCharacters", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTSaveGame, SavedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedCharacters_MetaData), NewProp_SavedCharacters_MetaData) }; // 300549726
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedStates_Inner = { "SavedStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStateSavedData, METADATA_PARAMS(0, nullptr) }; // 1858294653
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedStates = { "SavedStates", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTSaveGame, SavedStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedStates_MetaData), NewProp_SavedStates_MetaData) }; // 1858294653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedHoldings_Inner = { "SavedHoldings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHoldingSavedData, METADATA_PARAMS(0, nullptr) }; // 613153170
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedHoldings = { "SavedHoldings", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTSaveGame, SavedHoldings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedHoldings_MetaData), NewProp_SavedHoldings_MetaData) }; // 613153170
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_CurrentSavedVersion = { "CurrentSavedVersion", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTSaveGame, CurrentSavedVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSavedVersion_MetaData), NewProp_CurrentSavedVersion_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USTSaveGame_Statics::NewProp_MainCharacterID = { "MainCharacterID", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTSaveGame, MainCharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacterID_MetaData), NewProp_MainCharacterID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedCharacters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedCharacters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedHoldings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_SavedHoldings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_CurrentSavedVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTSaveGame_Statics::NewProp_MainCharacterID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTSaveGame_Statics::ClassParams = {
	&USTSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USTSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTSaveGame()
{
	if (!Z_Registration_Info_UClass_USTSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTSaveGame.OuterSingleton, Z_Construct_UClass_USTSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTSaveGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTSaveGame);
USTSaveGame::~USTSaveGame() {}
// ********** End Class USTSaveGame ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STSaveGame_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTSaveGame, USTSaveGame::StaticClass, TEXT("USTSaveGame"), &Z_Registration_Info_UClass_USTSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTSaveGame), 3568847603U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STSaveGame_h__Script_Heros_Of_ST_735604210(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STSaveGame_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_STSaveGame_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
