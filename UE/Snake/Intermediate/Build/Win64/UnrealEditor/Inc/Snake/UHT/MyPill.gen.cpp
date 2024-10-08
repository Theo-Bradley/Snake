// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/Public/MyPill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPill() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKE_API UClass* Z_Construct_UClass_AMyPill();
SNAKE_API UClass* Z_Construct_UClass_AMyPill_NoRegister();
UPackage* Z_Construct_UPackage__Script_Snake();
// End Cross Module References

// Begin Class AMyPill
void AMyPill::StaticRegisterNativesAMyPill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPill);
UClass* Z_Construct_UClass_AMyPill_NoRegister()
{
	return AMyPill::StaticClass();
}
struct Z_Construct_UClass_AMyPill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyPill.h" },
		{ "ModuleRelativePath", "Public/MyPill.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "MyPill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPill.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPill_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPill, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPill_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPill_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Snake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPill_Statics::ClassParams = {
	&AMyPill::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyPill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPill_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPill_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPill()
{
	if (!Z_Registration_Info_UClass_AMyPill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPill.OuterSingleton, Z_Construct_UClass_AMyPill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPill.OuterSingleton;
}
template<> SNAKE_API UClass* StaticClass<AMyPill>()
{
	return AMyPill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPill);
AMyPill::~AMyPill() {}
// End Class AMyPill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_MyPill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPill, AMyPill::StaticClass, TEXT("AMyPill"), &Z_Registration_Info_UClass_AMyPill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPill), 1385757504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_MyPill_h_1807514369(TEXT("/Script/Snake"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_MyPill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_MyPill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
