// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "States/STState.h"

#ifdef HEROS_OF_ST_STState_generated_h
#error "STState.generated.h already included, missing '#pragma once' in STState.h"
#endif
#define HEROS_OF_ST_STState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USTTitle;

// ********** Begin Class ASTState *****************************************************************
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitTitles); \
	DECLARE_FUNCTION(execGetTitles);


HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTState(); \
	friend struct Z_Construct_UClass_ASTState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_ASTState_NoRegister(); \
public: \
	DECLARE_CLASS2(ASTState, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_ASTState_NoRegister) \
	DECLARE_SERIALIZER(ASTState)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASTState(ASTState&&) = delete; \
	ASTState(const ASTState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTState) \
	NO_API virtual ~ASTState();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_14_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASTState;

// ********** End Class ASTState *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_Public_States_STState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
