// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCamera.h"

#ifdef HEROS_OF_ST_MainCamera_generated_h
#error "MainCamera.generated.h already included, missing '#pragma once' in MainCamera.h"
#endif
#define HEROS_OF_ST_MainCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMainCamera **************************************************************
HEROS_OF_ST_API UClass* Z_Construct_UClass_AMainCamera_NoRegister();

#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCamera(); \
	friend struct Z_Construct_UClass_AMainCamera_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HEROS_OF_ST_API UClass* Z_Construct_UClass_AMainCamera_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Heros_Of_ST"), Z_Construct_UClass_AMainCamera_NoRegister) \
	DECLARE_SERIALIZER(AMainCamera)


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainCamera(AMainCamera&&) = delete; \
	AMainCamera(const AMainCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCamera) \
	NO_API virtual ~AMainCamera();


#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_16_PROLOG
#define FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainCamera;

// ********** End Class AMainCamera ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Documents_Unreal_Projects_Heros_Of_ST_Source_Heros_Of_ST_MainCamera_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
