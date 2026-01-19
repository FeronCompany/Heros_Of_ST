// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/STCharacter.h"

#ifdef HEROS_OF_ST_STCharacter_generated_h
#error "STCharacter.generated.h already included, missing '#pragma once' in STCharacter.h"
#endif
#define HEROS_OF_ST_STCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USTTitle;
enum class EDeathReason : uint8;

// ********** Begin Class ASTCharacter *************************************************************
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAccuireTitle); \
	DECLARE_FUNCTION(execDeath);


HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTCharacter(); \
	friend struct Z_Construct_UClass_ASTCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASTCharacter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_ASTCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASTCharacter)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASTCharacter(ASTCharacter&&) = delete; \
	ASTCharacter(const ASTCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTCharacter) \
	NO_API virtual ~ASTCharacter();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_39_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASTCharacter;

// ********** End Class ASTCharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_Characters_STCharacter_h

// ********** Begin Enum ECharacterStatus **********************************************************
#define FOREACH_ENUM_ECHARACTERSTATUS(op) \
	op(ECharacterStatus::Healthy) \
	op(ECharacterStatus::Wounded) \
	op(ECharacterStatus::Ill) \
	op(ECharacterStatus::Disabled) \
	op(ECharacterStatus::Dead) 

enum class ECharacterStatus : uint8;
template<> struct TIsUEnumClass<ECharacterStatus> { enum { Value = true }; };
template<> HEROS_OF_ST_API UEnum* StaticEnum<ECharacterStatus>();
// ********** End Enum ECharacterStatus ************************************************************

// ********** Begin Enum EDeathReason **************************************************************
#define FOREACH_ENUM_EDEATHREASON(op) \
	op(EDeathReason::Alive) \
	op(EDeathReason::Natural) \
	op(EDeathReason::Disease) \
	op(EDeathReason::KIA) \
	op(EDeathReason::Murder) \
	op(EDeathReason::Disappearance) \
	op(EDeathReason::Execution) \
	op(EDeathReason::NaturalDisaster) \
	op(EDeathReason::Accident) \
	op(EDeathReason::Slaughter) 

enum class EDeathReason : uint8;
template<> struct TIsUEnumClass<EDeathReason> { enum { Value = true }; };
template<> HEROS_OF_ST_API UEnum* StaticEnum<EDeathReason>();
// ********** End Enum EDeathReason ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
