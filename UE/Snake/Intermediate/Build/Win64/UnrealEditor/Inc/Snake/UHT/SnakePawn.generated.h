// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SnakePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SNAKE_SnakePawn_generated_h
#error "SnakePawn.generated.h already included, missing '#pragma once' in SnakePawn.h"
#endif
#define SNAKE_SnakePawn_generated_h

#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap); \
	DECLARE_FUNCTION(execMoveLR);


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakePawn(); \
	friend struct Z_Construct_UClass_ASnakePawn_Statics; \
public: \
	DECLARE_CLASS(ASnakePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakePawn)


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASnakePawn(ASnakePawn&&); \
	ASnakePawn(const ASnakePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakePawn) \
	NO_API virtual ~ASnakePawn();


#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_12_PROLOG
#define FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ASnakePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_SnakePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
