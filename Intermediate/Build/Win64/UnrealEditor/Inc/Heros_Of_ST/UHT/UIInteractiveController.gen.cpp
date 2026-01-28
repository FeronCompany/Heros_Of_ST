// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/UIInteractiveController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIInteractiveController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
HEROS_OF_ST_API UClass* Z_Construct_UClass_AUIInteractiveController();
HEROS_OF_ST_API UClass* Z_Construct_UClass_AUIInteractiveController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Heros_Of_ST();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUIInteractiveController Function LoadGame *******************************
struct UIInteractiveController_eventLoadGame_Parms
{
	FString SlotName;
};
static FName NAME_AUIInteractiveController_LoadGame = FName(TEXT("LoadGame"));
void AUIInteractiveController::LoadGame(const FString& SlotName)
{
	UFunction* Func = FindFunctionChecked(NAME_AUIInteractiveController_LoadGame);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		UIInteractiveController_eventLoadGame_Parms Parms;
		Parms.SlotName=SlotName;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		LoadGame_Implementation(SlotName);
	}
}
struct Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UIInteractiveController" },
		{ "ModuleRelativePath", "Public/Controller/UIInteractiveController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIInteractiveController_eventLoadGame_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::NewProp_SlotName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUIInteractiveController, nullptr, "LoadGame", Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::PropPointers), sizeof(UIInteractiveController_eventLoadGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(UIInteractiveController_eventLoadGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUIInteractiveController_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUIInteractiveController_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUIInteractiveController::execLoadGame)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGame_Implementation(Z_Param_SlotName);
	P_NATIVE_END;
}
// ********** End Class AUIInteractiveController Function LoadGame *********************************

// ********** Begin Class AUIInteractiveController *************************************************
void AUIInteractiveController::StaticRegisterNativesAUIInteractiveController()
{
	UClass* Class = AUIInteractiveController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadGame", &AUIInteractiveController::execLoadGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUIInteractiveController;
UClass* AUIInteractiveController::GetPrivateStaticClass()
{
	using TClass = AUIInteractiveController;
	if (!Z_Registration_Info_UClass_AUIInteractiveController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIInteractiveController"),
			Z_Registration_Info_UClass_AUIInteractiveController.InnerSingleton,
			StaticRegisterNativesAUIInteractiveController,
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
	return Z_Registration_Info_UClass_AUIInteractiveController.InnerSingleton;
}
UClass* Z_Construct_UClass_AUIInteractiveController_NoRegister()
{
	return AUIInteractiveController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUIInteractiveController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controller/UIInteractiveController.h" },
		{ "ModuleRelativePath", "Public/Controller/UIInteractiveController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUIInteractiveController_LoadGame, "LoadGame" }, // 2047852912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIInteractiveController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUIInteractiveController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Heros_Of_ST,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUIInteractiveController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUIInteractiveController_Statics::ClassParams = {
	&AUIInteractiveController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUIInteractiveController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUIInteractiveController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUIInteractiveController()
{
	if (!Z_Registration_Info_UClass_AUIInteractiveController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUIInteractiveController.OuterSingleton, Z_Construct_UClass_AUIInteractiveController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUIInteractiveController.OuterSingleton;
}
AUIInteractiveController::AUIInteractiveController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUIInteractiveController);
AUIInteractiveController::~AUIInteractiveController() {}
// ********** End Class AUIInteractiveController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Controller_UIInteractiveController_h__Script_Heros_Of_ST_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUIInteractiveController, AUIInteractiveController::StaticClass, TEXT("AUIInteractiveController"), &Z_Registration_Info_UClass_AUIInteractiveController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUIInteractiveController), 2929108493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Controller_UIInteractiveController_h__Script_Heros_Of_ST_29627552(TEXT("/Script/Heros_Of_ST"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Controller_UIInteractiveController_h__Script_Heros_Of_ST_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Controller_UIInteractiveController_h__Script_Heros_Of_ST_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
