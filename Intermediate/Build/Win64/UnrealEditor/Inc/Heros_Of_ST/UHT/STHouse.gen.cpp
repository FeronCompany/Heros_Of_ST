// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Identity/STHouse.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSTHouse() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTHouse();
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTHouse_NoRegister();
HEROS_OF_ST_API UScriptStruct* Z_Construct_UScriptStruct_FHouseSavedData();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FHouseSavedData ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHouseSavedData;
class UScriptStruct* FHouseSavedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHouseSavedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHouseSavedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHouseSavedData, (UObject*)Z_Construct_UPackage__Script_Heros_Of_ST(), TEXT("HouseSavedData"));
	}
	return Z_Registration_Info_UScriptStruct_FHouseSavedData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHouseSavedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseID_MetaData[] = {
		{ "Category", "House Saved Data" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseName_MetaData[] = {
		{ "Category", "House Saved Data" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Motto_MetaData[] = {
		{ "Category", "House Saved Data" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderID_MetaData[] = {
		{ "Category", "House Saved Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"House Saved Data\")\n//TArray<FString> MemberIDs;\n" },
#endif
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"House Saved Data\")\nTArray<FString> MemberIDs;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentHouseID_MetaData[] = {
		{ "Category", "House Saved Data" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HouseName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Motto;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParentHouseID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHouseSavedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_HouseID = { "HouseID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseSavedData, HouseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseID_MetaData), NewProp_HouseID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_HouseName = { "HouseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseSavedData, HouseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseName_MetaData), NewProp_HouseName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_Motto = { "Motto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseSavedData, Motto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Motto_MetaData), NewProp_Motto_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_LeaderID = { "LeaderID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseSavedData, LeaderID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderID_MetaData), NewProp_LeaderID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_ParentHouseID = { "ParentHouseID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHouseSavedData, ParentHouseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentHouseID_MetaData), NewProp_ParentHouseID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHouseSavedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_HouseID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_HouseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_Motto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_LeaderID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewProp_ParentHouseID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseSavedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHouseSavedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
	nullptr,
	&NewStructOps,
	"HouseSavedData",
	Z_Construct_UScriptStruct_FHouseSavedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseSavedData_Statics::PropPointers),
	sizeof(FHouseSavedData),
	alignof(FHouseSavedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHouseSavedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHouseSavedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHouseSavedData()
{
	if (!Z_Registration_Info_UScriptStruct_FHouseSavedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHouseSavedData.InnerSingleton, Z_Construct_UScriptStruct_FHouseSavedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHouseSavedData.InnerSingleton;
}
// ********** End ScriptStruct FHouseSavedData *****************************************************

// ********** Begin Class USTHouse Function AddMember **********************************************
struct Z_Construct_UFunction_USTHouse_AddMember_Statics
{
	struct STHouse_eventAddMember_Parms
	{
		ASTCharacter* NewMember;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMember;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_NewMember = { "NewMember", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STHouse_eventAddMember_Parms, NewMember), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((STHouse_eventAddMember_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(STHouse_eventAddMember_Parms), &Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USTHouse_AddMember_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_NewMember,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USTHouse_AddMember_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USTHouse_AddMember_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USTHouse_AddMember_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USTHouse, nullptr, "AddMember", Z_Construct_UFunction_USTHouse_AddMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USTHouse_AddMember_Statics::PropPointers), sizeof(Z_Construct_UFunction_USTHouse_AddMember_Statics::STHouse_eventAddMember_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USTHouse_AddMember_Statics::Function_MetaDataParams), Z_Construct_UFunction_USTHouse_AddMember_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USTHouse_AddMember_Statics::STHouse_eventAddMember_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USTHouse_AddMember()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USTHouse_AddMember_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USTHouse::execAddMember)
{
	P_GET_OBJECT(ASTCharacter,Z_Param_NewMember);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddMember(Z_Param_NewMember);
	P_NATIVE_END;
}
// ********** End Class USTHouse Function AddMember ************************************************

// ********** Begin Class USTHouse *****************************************************************
void USTHouse::StaticRegisterNativesUSTHouse()
{
	UClass* Class = USTHouse::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMember", &USTHouse::execAddMember },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USTHouse;
UClass* USTHouse::GetPrivateStaticClass()
{
	using TClass = USTHouse;
	if (!Z_Registration_Info_UClass_USTHouse.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("STHouse"),
			Z_Registration_Info_UClass_USTHouse.InnerSingleton,
			StaticRegisterNativesUSTHouse,
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
	return Z_Registration_Info_UClass_USTHouse.InnerSingleton;
}
UClass* Z_Construct_UClass_USTHouse_NoRegister()
{
	return USTHouse::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USTHouse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Identity/STHouse.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseID_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HouseName_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Motto_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentHouse_MetaData[] = {
		{ "Category", "House" },
		{ "ModuleRelativePath", "Public/Identity/STHouse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HouseID;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HouseName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Motto;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Leader;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentHouse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USTHouse_AddMember, "AddMember" }, // 669010117
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTHouse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_HouseID = { "HouseID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, HouseID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseID_MetaData), NewProp_HouseID_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_HouseName = { "HouseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, HouseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HouseName_MetaData), NewProp_HouseName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_Motto = { "Motto", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, Motto), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Motto_MetaData), NewProp_Motto_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, Members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Members_MetaData), NewProp_Members_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, Leader), Z_Construct_UClass_ASTCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leader_MetaData), NewProp_Leader_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTHouse_Statics::NewProp_ParentHouse = { "ParentHouse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USTHouse, ParentHouse), Z_Construct_UClass_USTHouse_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentHouse_MetaData), NewProp_ParentHouse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTHouse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_HouseID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_HouseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_Motto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_Members_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_Members,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_Leader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTHouse_Statics::NewProp_ParentHouse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTHouse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USTHouse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USTHouse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USTHouse_Statics::ClassParams = {
	&USTHouse::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USTHouse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USTHouse_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USTHouse_Statics::Class_MetaDataParams), Z_Construct_UClass_USTHouse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USTHouse()
{
	if (!Z_Registration_Info_UClass_USTHouse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USTHouse.OuterSingleton, Z_Construct_UClass_USTHouse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USTHouse.OuterSingleton;
}
USTHouse::USTHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USTHouse);
USTHouse::~USTHouse() {}
// ********** End Class USTHouse *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHouseSavedData::StaticStruct, Z_Construct_UScriptStruct_FHouseSavedData_Statics::NewStructOps, TEXT("HouseSavedData"), &Z_Registration_Info_UScriptStruct_FHouseSavedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHouseSavedData), 3751658719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USTHouse, USTHouse::StaticClass, TEXT("USTHouse"), &Z_Registration_Info_UClass_USTHouse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USTHouse), 2351619278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_1912541968(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h__Script_Heros_Of_ST_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
