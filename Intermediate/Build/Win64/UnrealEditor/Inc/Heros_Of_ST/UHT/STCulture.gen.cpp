// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Identity/STCulture.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTCulture() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCulture();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCulture_NoRegister();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FSTCultureData();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSTCultureData ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSTCultureData;
class UScriptStruct* FSTCultureData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSTCultureData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSTCultureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTCultureData, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("STCultureData"));
	}
	return Z_Registration_Info_UScriptStruct_FSTCultureData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSTCultureData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureID_MetaData[] = {
		{ "Category", "Culture Data" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[] = {
		{ "Category", "Culture Data" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Culture Data" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCultureID_MetaData[] = {
		{ "Category", "Culture Data" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CultureName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentCultureID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTCultureData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_CultureID = { "CultureID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSTCultureData, CultureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureID_MetaData), NewProp_CultureID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_CultureName = { "CultureName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSTCultureData, CultureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureName_MetaData), NewProp_CultureName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSTCultureData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_ParentCultureID = { "ParentCultureID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSTCultureData, ParentCultureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCultureID_MetaData), NewProp_ParentCultureID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTCultureData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_CultureID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_CultureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTCultureData_Statics::NewProp_ParentCultureID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTCultureData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTCultureData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"STCultureData",
	Z_Construct_UScriptStruct_FSTCultureData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTCultureData_Statics::PropPointers),
	sizeof(FSTCultureData),
	alignof(FSTCultureData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTCultureData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSTCultureData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSTCultureData()
{
	if (!Z_Registration_Info_UScriptStruct_FSTCultureData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSTCultureData.InnerSingleton, Z_Construct_UScriptStruct_FSTCultureData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSTCultureData.InnerSingleton;
}
// ********** End ScriptStruct FSTCultureData ******************************************************

// ********** Begin Class USTCulture ***************************************************************
void USTCulture::StaticRegisterNativesUSTCulture()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTCulture;
UClass* USTCulture::GetPrivateStaticClass()
{
	using TClass = USTCulture;
	if (!Z_Registration_Info_UClass_USTCulture.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STCulture"),
			Z_Registration_Info_UClass_USTCulture.InnerSingleton,
			StaticRegisterNativesUSTCulture,
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
	return Z_Registration_Info_UClass_USTCulture.InnerSingleton;
}
UClass* Z_Construct_UClass_USTCulture_NoRegister()
{
	return USTCulture::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTCulture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Identity/STCulture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureID_MetaData[] = {
		{ "Category", "Culture" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CultureName_MetaData[] = {
		{ "Category", "Culture" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Culture" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentCulture_MetaData[] = {
		{ "Category", "Culture" },
		{ "ModuleRelativePath", "Public/Identity/STCulture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CultureID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CultureName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentCulture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTCulture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USTCulture_Statics::NewProp_CultureID = { "CultureID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCulture, CultureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureID_MetaData), NewProp_CultureID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTCulture_Statics::NewProp_CultureName = { "CultureName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCulture, CultureName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CultureName_MetaData), NewProp_CultureName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTCulture_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCulture, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTCulture_Statics::NewProp_ParentCulture = { "ParentCulture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTCulture, ParentCulture), Z_Construct_UClass_USTCulture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentCulture_MetaData), NewProp_ParentCulture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTCulture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCulture_Statics::NewProp_CultureID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCulture_Statics::NewProp_CultureName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCulture_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTCulture_Statics::NewProp_ParentCulture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTCulture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTCulture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTCulture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTCulture_Statics::ClassParams = {
	&USTCulture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USTCulture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USTCulture_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTCulture_Statics::Class_MetaDataParams), Z_Construct_UClass_USTCulture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTCulture()
{
	if (!Z_Registration_Info_UClass_USTCulture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTCulture.OuterSingleton, Z_Construct_UClass_USTCulture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTCulture.OuterSingleton;
}
USTCulture::USTCulture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTCulture);
USTCulture::~USTCulture() {}
// ********** End Class USTCulture *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSTCultureData::StaticStruct, Z_Construct_UScriptStruct_FSTCultureData_Statics::NewStructOps, TEXT("STCultureData"), &Z_Registration_Info_UScriptStruct_FSTCultureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTCultureData), 2373928008U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTCulture, USTCulture::StaticClass, TEXT("USTCulture"), &Z_Registration_Info_UClass_USTCulture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTCulture), 2677765581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_3166509232(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STCulture_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
