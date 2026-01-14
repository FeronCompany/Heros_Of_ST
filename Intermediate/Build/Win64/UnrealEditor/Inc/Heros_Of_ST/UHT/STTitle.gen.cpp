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
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USTTitle *****************************************************************
void USTTitle::StaticRegisterNativesUSTTitle()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xcd\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb5\xef\xbf\xbd\xcd\xb7\xef\xbf\xbd\xce\xa1\xef\xbf\xbd\xef\xbf\xbd\xc6\xba\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "States/STTitle.h" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TitleName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TitleDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleHolder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TitleBelonging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTTitle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleName = { "TitleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleName_MetaData), NewProp_TitleName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleDescription = { "TitleDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleDescription_MetaData), NewProp_TitleDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleHolder = { "TitleHolder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleHolder), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleHolder_MetaData), NewProp_TitleHolder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTTitle_Statics::NewProp_TitleBelonging = { "TitleBelonging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTTitle, TitleBelonging), Z_Construct_UClass_ASTState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleBelonging_MetaData), NewProp_TitleBelonging_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleHolder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTTitle_Statics::NewProp_TitleBelonging,
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
	nullptr,
	Z_Construct_UClass_USTTitle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTTitle, USTTitle::StaticClass, TEXT("USTTitle"), &Z_Registration_Info_UClass_USTTitle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTTitle), 2725846506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_3474028963(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STTitle_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
