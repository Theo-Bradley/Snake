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

// Begin Class APlayingMode
void APlayingMode::StaticRegisterNativesAPlayingMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayingMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
APlayingMode::APlayingMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayingMode);
APlayingMode::~APlayingMode() {}
// End Class APlayingMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayingMode, APlayingMode::StaticClass, TEXT("APlayingMode"), &Z_Registration_Info_UClass_APlayingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayingMode), 2228739114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_575185765(TEXT("/Script/Snake"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_PlayingMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
