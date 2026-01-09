// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STCharacter.h"

#ifdef HEROS_OF_ST_STCharacter_generated_h
#error "STCharacter.generated.h already included, missing '#pragma once' in STCharacter.h"
#endif
#define HEROS_OF_ST_STCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USTCharacter *************************************************************
HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCharacter_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSTCharacter(); \
	friend struct Z_Construct_UClass_USTCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_USTCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(USTCharacter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_USTCharacter_NoRegister) \
	DECLARE_SERIALIZER(USTCharacter)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USTCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USTCharacter(USTCharacter&&) = delete; \
	USTCharacter(const USTCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USTCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USTCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USTCharacter) \
	NO_API virtual ~USTCharacter();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_12_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USTCharacter;

// ********** End Class USTCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_STCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
