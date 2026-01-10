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
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher();
HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCharacterSearcher Function FindCharacterByID ****************************
struct Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics
{
	struct CharacterSearcher_eventFindCharacterByID_Parms
	{
		FName CharacterID;
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCharacterByID_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventFindCharacterByID_Parms, ReturnValue), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_CharacterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "FindCharacterByID", Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::CharacterSearcher_eventFindCharacterByID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID_Statics::Function_MetaDataParams)},  };
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
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASTCharacter**)Z_Param__Result=P_THIS->FindCharacterByID(Z_Param_Out_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function FindCharacterByID ******************************

// ********** Begin Class UCharacterSearcher Function RegisterCharacter ****************************
struct Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics
{
	struct CharacterSearcher_eventRegisterCharacter_Parms
	{
		ASTCharacter* Character;
		FName CharacterID;
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCharacter_Parms, Character), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventRegisterCharacter_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "RegisterCharacter", Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::CharacterSearcher_eventRegisterCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter_Statics::Function_MetaDataParams)},  };
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
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterCharacter(Z_Param_Character,Z_Param_Out_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function RegisterCharacter ******************************

// ********** Begin Class UCharacterSearcher Function UnregisterCharacter **************************
struct Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics
{
	struct CharacterSearcher_eventUnregisterCharacter_Parms
	{
		FName CharacterID;
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
	static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterSearcher_eventUnregisterCharacter_Parms, CharacterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterID_MetaData), NewProp_CharacterID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::NewProp_CharacterID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCharacterSearcher, nullptr, "UnregisterCharacter", Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::CharacterSearcher_eventUnregisterCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter_Statics::Function_MetaDataParams)},  };
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
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CharacterID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterCharacter(Z_Param_Out_CharacterID);
	P_NATIVE_END;
}
// ********** End Class UCharacterSearcher Function UnregisterCharacter ****************************

// ********** Begin Class UCharacterSearcher *******************************************************
void UCharacterSearcher::StaticRegisterNativesUCharacterSearcher()
{
	UClass* Class = UCharacterSearcher::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCharacterByID", &UCharacterSearcher::execFindCharacterByID },
		{ "RegisterCharacter", &UCharacterSearcher::execRegisterCharacter },
		{ "UnregisterCharacter", &UCharacterSearcher::execUnregisterCharacter },
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
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ResourceManagment/CharacterSearcher.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ResourceManagment/CharacterSearcher.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSearcher_FindCharacterByID, "FindCharacterByID" }, // 2543529259
		{ &Z_Construct_UFunction_UCharacterSearcher_RegisterCharacter, "RegisterCharacter" }, // 3238595800
		{ &Z_Construct_UFunction_UCharacterSearcher_UnregisterCharacter, "UnregisterCharacter" }, // 490613699
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSearcher>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSearcher, UCharacterSearcher::StaticClass, TEXT("UCharacterSearcher"), &Z_Registration_Info_UClass_UCharacterSearcher, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSearcher), 1754944995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_2678609172(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
