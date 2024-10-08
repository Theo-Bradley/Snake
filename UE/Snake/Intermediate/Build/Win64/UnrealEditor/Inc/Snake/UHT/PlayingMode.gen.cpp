// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/Public/PlayingMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayingMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SNAKE_API UClass* Z_Construct_UClass_APlayingMode();
SNAKE_API UClass* Z_Construct_UClass_APlayingMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Snake();
// End Cross Module References

// Begin Class APlayingMode Function Score
struct Z_Construct_UFunction_APlayingMode_Score_Statics
{
	struct PlayingMode_eventScore_Parms
	{
		float amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayingMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayingMode_Score_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayingMode_eventScore_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayingMode_Score_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayingMode_Score_Statics::NewProp_amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayingMode_Score_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayingMode_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayingMode, nullptr, "Score", nullptr, nullptr, Z_Construct_UFunction_APlayingMode_Score_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayingMode_Score_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayingMode_Score_Statics::PlayingMode_eventScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayingMode_Score_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayingMode_Score_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayingMode_Score_Statics::PlayingMode_eventScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayingMode_Score()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayingMode_Score_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayingMode::execScore)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Score(Z_Param_amount);
	P_NATIVE_END;
}
// End Class APlayingMode Function Score

// Begin Class APlayingMode
void APlayingMode::StaticRegisterNativesAPlayingMode()
{
	UClass* Class = APlayingMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Score", &APlayingMode::execScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayingMode);
UClass* Z_Construct_UClass_APlayingMode_NoRegister()
{
	return APlayingMode::StaticClass();
}
struct Z_Construct_UClass_APlayingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayingMode.h" },
		{ "ModuleRelativePath", "Public/PlayingMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentScore_MetaData[] = {
		{ "Category", "PlayingMode" },
		{ "ModuleRelativePath", "Public/PlayingMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayingMode_Score, "Score" }, // 3387004549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayingMode_Statics::NewProp_currentScore = { "currentScore", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayingMode, currentScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentScore_MetaData), NewProp_currentScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayingMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayingMode_Statics::NewProp_currentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayingMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Snake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayingMode_Statics::ClassParams = {
	&APlayingMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayingMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayingMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayingMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayingMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayingMode()
{
	if (!Z_Registration_Info_UClass_APlayingMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayingMode.OuterSingleton, Z_Construct_UClass_APlayingMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayingMode.OuterSingleton;
}
template<> SNAKE_API UClass* StaticClass<APlayingMode>()
{
	return APlayingMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayingMode);
APlayingMode::~APlayingMode() {}
// End Class APlayingMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayingMode, APlayingMode::StaticClass, TEXT("APlayingMode"), &Z_Registration_Info_UClass_APlayingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayingMode), 1220566171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_3832476927(TEXT("/Script/Snake"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
