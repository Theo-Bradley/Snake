// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayingMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE_PlayingMode_generated_h
#error "PlayingMode.generated.h already included, missing '#pragma once' in PlayingMode.h"
#endif
#define SNAKE_PlayingMode_generated_h

#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execScore);


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayingMode(); \
	friend struct Z_Construct_UClass_APlayingMode_Statics; \
public: \
	DECLARE_CLASS(APlayingMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(APlayingMode)


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayingMode(APlayingMode&&); \
	APlayingMode(const APlayingMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayingMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayingMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayingMode) \
	NO_API virtual ~APlayingMode();


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_12_PROLOG
#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class APlayingMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
