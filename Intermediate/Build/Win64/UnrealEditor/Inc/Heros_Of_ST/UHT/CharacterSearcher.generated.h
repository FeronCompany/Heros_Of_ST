// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ResourceManagment/CharacterSearcher.h"

#ifdef HEROS_OF_ST_CharacterSearcher_generated_h
#error "CharacterSearcher.generated.h already included, missing '#pragma once' in CharacterSearcher.h"
#endif
#define HEROS_OF_ST_CharacterSearcher_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ASTCharacter;

// ********** Begin Class UCharacterSearcher *******************************************************
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnregisterCharacter); \
	DECLARE_FUNCTION(execRegisterCharacter); \
	DECLARE_FUNCTION(execFindCharacterByID);


HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSearcher(); \
	friend struct Z_Construct_UClass_UCharacterSearcher_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_UCharacterSearcher_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterSearcher, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_UCharacterSearcher_NoRegister) \
	DECLARE_SERIALIZER(UCharacterSearcher)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSearcher(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterSearcher(UCharacterSearcher&&) = delete; \
	UCharacterSearcher(const UCharacterSearcher&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSearcher); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSearcher); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSearcher) \
	NO_API virtual ~UCharacterSearcher();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_13_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterSearcher;

// ********** End Class UCharacterSearcher *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_ResourceManagment_CharacterSearcher_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
