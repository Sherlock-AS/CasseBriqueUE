// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasseBriques/MyGameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameStateBase() {}

// Begin Cross Module References
CASSEBRIQUES_API UClass* Z_Construct_UClass_AMyGameStateBase();
CASSEBRIQUES_API UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_CasseBriques();
// End Cross Module References

// Begin Class AMyGameStateBase
void AMyGameStateBase::StaticRegisterNativesAMyGameStateBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameStateBase);
UClass* Z_Construct_UClass_AMyGameStateBase_NoRegister()
{
	return AMyGameStateBase::StaticClass();
}
struct Z_Construct_UClass_AMyGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameStateBase.h" },
		{ "ModuleRelativePath", "MyGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CasseBriques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams = {
	&AMyGameStateBase::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameStateBase()
{
	if (!Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton, Z_Construct_UClass_AMyGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameStateBase.OuterSingleton;
}
template<> CASSEBRIQUES_API UClass* StaticClass<AMyGameStateBase>()
{
	return AMyGameStateBase::StaticClass();
}
AMyGameStateBase::AMyGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameStateBase);
AMyGameStateBase::~AMyGameStateBase() {}
// End Class AMyGameStateBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_MyGameStateBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameStateBase, AMyGameStateBase::StaticClass, TEXT("AMyGameStateBase"), &Z_Registration_Info_UClass_AMyGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameStateBase), 930150515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_MyGameStateBase_h_1615685976(TEXT("/Script/CasseBriques"),
	Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_MyGameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_Unreal_Projects_CasseBriques_Source_CasseBriques_MyGameStateBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
