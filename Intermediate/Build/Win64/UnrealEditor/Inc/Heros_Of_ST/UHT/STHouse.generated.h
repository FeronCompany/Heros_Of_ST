// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Identity/STHouse.h"

#ifdef HEROS_OF_ST_STHouse_generated_h
#error "STHouse.generated.h already included, missing '#pragma once' in STHouse.h"
#endif
#define HEROS_OF_ST_STHouse_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASTCharacter;

// ********** Begin ScriptStruct FHouseSavedData ***************************************************
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHouseSavedData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FHouseSavedData;
// ********** End ScriptStruct FHouseSavedData *****************************************************

// ********** Begin Class USTHouse *****************************************************************
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddMember);


HEROS_OF_ST_API UClass* Z_Construct_UClass_USTHouse_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTHouse(); \
	friend struct Z_Construct_UClass_USTHouse_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_USTHouse_NoRegister(); \
public: \
	DECLARE_CLASS2(USTHouse, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_USTHouse_NoRegister) \
	DECLARE_SERIALIZER(USTHouse)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTHouse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USTHouse(USTHouse&&) = delete; \
	USTHouse(const USTHouse&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTHouse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTHouse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTHouse) \
	NO_API virtual ~USTHouse();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_33_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USTHouse;

// ********** End Class USTHouse *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Identity_STHouse_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
