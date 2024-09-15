// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasseBriques/Public/Player/PaddlePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaddlePawn() {}

// Begin Cross Module References
CASSEBRIQUES_API UClass* Z_Construct_UClass_APaddlePawn();
CASSEBRIQUES_API UClass* Z_Construct_UClass_APaddlePawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CasseBriques();
// End Cross Module References

// Begin Class APaddlePawn
void APaddlePawn::StaticRegisterNativesAPaddlePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaddlePawn);
UClass* Z_Construct_UClass_APaddlePawn_NoRegister()
{
	return APaddlePawn::StaticClass();
}
struct Z_Construct_UClass_APaddlePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PaddlePawn.h" },
		{ "ModuleRelativePath", "Public/Player/PaddlePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "PaddlePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PaddlePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PaddlePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PaddlePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaddlePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddlePawn, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaddlePawn_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APaddlePawn, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaddlePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaddlePawn_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APaddlePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CasseBriques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APaddlePawn_Statics::ClassParams = {
	&APaddlePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APaddlePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APaddlePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_APaddlePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APaddlePawn()
{
	if (!Z_Registration_Info_UClass_APaddlePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaddlePawn.OuterSingleton, Z_Construct_UClass_APaddlePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APaddlePawn.OuterSingleton;
}
template<> CASSEBRIQUES_API UClass* StaticClass<APaddlePawn>()
{
	return APaddlePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APaddlePawn);
APaddlePawn::~APaddlePawn() {}
// End Class APaddlePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_Public_Player_PaddlePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APaddlePawn, APaddlePawn::StaticClass, TEXT("APaddlePawn"), &Z_Registration_Info_UClass_APaddlePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaddlePawn), 4257087650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_Public_Player_PaddlePawn_h_2288266598(TEXT("/Script/CasseBriques"),
	Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_Public_Player_PaddlePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_Public_Player_PaddlePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
