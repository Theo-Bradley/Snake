// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Snake/Public/Pill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePill() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SNAKE_API UClass* Z_Construct_UClass_APill();
SNAKE_API UClass* Z_Construct_UClass_APill_NoRegister();
UPackage* Z_Construct_UPackage__Script_Snake();
// End Cross Module References

// Begin Class APill
void APill::StaticRegisterNativesAPill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APill);
UClass* Z_Construct_UClass_APill_NoRegister()
{
	return APill::StaticClass();
}
struct Z_Construct_UClass_APill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pill.h" },
		{ "ModuleRelativePath", "Public/Pill.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Pill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pill.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APill_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APill, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APill_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APill_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Snake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APill_Statics::ClassParams = {
	&APill::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APill_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APill_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APill_Statics::Class_MetaDataParams), Z_Construct_UClass_APill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APill()
{
	if (!Z_Registration_Info_UClass_APill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APill.OuterSingleton, Z_Construct_UClass_APill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APill.OuterSingleton;
}
template<> SNAKE_API UClass* StaticClass<APill>()
{
	return APill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APill);
APill::~APill() {}
// End Class APill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_Pill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APill, APill::StaticClass, TEXT("APill"), &Z_Registration_Info_UClass_APill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APill), 892819579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_Pill_h_2942345105(TEXT("/Script/Snake"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_Pill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Snake_Snake_UE_Snake_Source_Snake_Public_Pill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
