// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/Public/DefaultMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SNAKE_API UClass* Z_Construct_UClass_ADefaultMode();
SNAKE_API UClass* Z_Construct_UClass_ADefaultMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Snake();
// End Cross Module References

// Begin Class ADefaultMode
void ADefaultMode::StaticRegisterNativesADefaultMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultMode);
UClass* Z_Construct_UClass_ADefaultMode_NoRegister()
{
	return ADefaultMode::StaticClass();
}
struct Z_Construct_UClass_ADefaultMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefaultMode.h" },
		{ "ModuleRelativePath", "Public/DefaultMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefaultMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Snake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultMode_Statics::ClassParams = {
	&ADefaultMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultMode()
{
	if (!Z_Registration_Info_UClass_ADefaultMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultMode.OuterSingleton, Z_Construct_UClass_ADefaultMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultMode.OuterSingleton;
}
template<> SNAKE_API UClass* StaticClass<ADefaultMode>()
{
	return ADefaultMode::StaticClass();
}
ADefaultMode::ADefaultMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultMode);
ADefaultMode::~ADefaultMode() {}
// End Class ADefaultMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultMode, ADefaultMode::StaticClass, TEXT("ADefaultMode"), &Z_Registration_Info_UClass_ADefaultMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultMode), 1848252780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_938516614(TEXT("/Script/Snake"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_DefaultMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
