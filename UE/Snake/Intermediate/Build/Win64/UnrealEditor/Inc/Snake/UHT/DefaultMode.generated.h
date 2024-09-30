// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE_DefaultMode_generated_h
#error "DefaultMode.generated.h already included, missing '#pragma once' in DefaultMode.h"
#endif
#define SNAKE_DefaultMode_generated_h

#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultMode(); \
	friend struct Z_Construct_UClass_ADefaultMode_Statics; \
public: \
	DECLARE_CLASS(ADefaultMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ADefaultMode)


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADefaultMode(ADefaultMode&&); \
	ADefaultMode(const ADefaultMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultMode) \
	NO_API virtual ~ADefaultMode();


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_12_PROLOG
#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ADefaultMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
