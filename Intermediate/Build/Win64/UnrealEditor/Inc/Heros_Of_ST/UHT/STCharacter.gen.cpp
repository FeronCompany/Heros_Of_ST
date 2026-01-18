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
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FCharAttributes();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASTCharacter *************************************************************
void ASTCharacter::StaticRegisterNativesASTCharacter()
{
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Titles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Titles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles_Inner = { "Titles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USTTitle_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles = { "Titles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Titles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Titles_MetaData), NewProp_Titles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASTCharacter_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTCharacter, Attributes), Z_Construct_UScriptStruct_FCharAttributes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attributes_MetaData), NewProp_Attributes_MetaData) }; // 868948367
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Titles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTCharacter_Statics::NewProp_Attributes,
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
	nullptr,
	Z_Construct_UClass_ASTCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTCharacter, ASTCharacter::StaticClass, TEXT("ASTCharacter"), &Z_Registration_Info_UClass_ASTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTCharacter), 3751625342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_3456472160(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
