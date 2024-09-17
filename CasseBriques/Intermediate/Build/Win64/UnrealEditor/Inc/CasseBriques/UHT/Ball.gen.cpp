// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CasseBriques/Public/Objects/Ball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBall() {}

// Begin Cross Module References
CASSEBRIQUES_API UClass* Z_Construct_UClass_ABall();
CASSEBRIQUES_API UClass* Z_Construct_UClass_ABall_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CasseBriques();
// End Cross Module References

// Begin Class ABall Function OnOverlap
struct Z_Construct_UFunction_ABall_OnOverlap_Statics
{
	struct Ball_eventOnOverlap_Parms
	{
		AActor* MyActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Objects/Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_OnOverlap_Statics::NewProp_MyActor = { "MyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ball_eventOnOverlap_Parms, MyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABall_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Ball_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABall_OnOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_OnOverlap_Statics::NewProp_MyActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABall_OnOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABall_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABall, nullptr, "OnOverlap", nullptr, nullptr, Z_Construct_UFunction_ABall_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABall_OnOverlap_Statics::Ball_eventOnOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABall_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABall_OnOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABall_OnOverlap_Statics::Ball_eventOnOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABall_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABall_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABall::execOnOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_MyActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap(Z_Param_MyActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class ABall Function OnOverlap

// Begin Class ABall
void ABall::StaticRegisterNativesABall()
{
	UClass* Class = ABall::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlap", &ABall::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABall);
UClass* Z_Construct_UClass_ABall_NoRegister()
{
	return ABall::StaticClass();
}
struct Z_Construct_UClass_ABall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/Ball.h" },
		{ "ModuleRelativePath", "Public/Objects/Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[] = {
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/Ball.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BallMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/Ball.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BallMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABall_OnOverlap, "OnOverlap" }, // 141532254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereCollision_MetaData), NewProp_SphereCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABall_Statics::NewProp_BallMesh = { "BallMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABall, BallMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BallMesh_MetaData), NewProp_BallMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABall_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_SphereCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABall_Statics::NewProp_BallMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CasseBriques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABall_Statics::ClassParams = {
	&ABall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABall_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABall_Statics::Class_MetaDataParams), Z_Construct_UClass_ABall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABall()
{
	if (!Z_Registration_Info_UClass_ABall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABall.OuterSingleton, Z_Construct_UClass_ABall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABall.OuterSingleton;
}
template<> CASSEBRIQUES_API UClass* StaticClass<ABall>()
{
	return ABall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABall);
ABall::~ABall() {}
// End Class ABall

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_GitHub_CasseBriqueUE_CasseBriques_Source_CasseBriques_Public_Objects_Ball_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABall, ABall::StaticClass, TEXT("ABall"), &Z_Registration_Info_UClass_ABall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABall), 4022976684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_GitHub_CasseBriqueUE_CasseBriques_Source_CasseBriques_Public_Objects_Ball_h_830141001(TEXT("/Script/CasseBriques"),
	Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_GitHub_CasseBriqueUE_CasseBriques_Source_CasseBriques_Public_Objects_Ball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_audre_OneDrive_Documents_GitHub_CasseBriqueUE_CasseBriques_Source_CasseBriques_Public_Objects_Ball_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
