// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/VitalAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVitalAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UTopDownAttributeSet();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UVitalAttributeSet();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UVitalAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References

// Begin Class UVitalAttributeSet
void UVitalAttributeSet::StaticRegisterNativesUVitalAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVitalAttributeSet);
UClass* Z_Construct_UClass_UVitalAttributeSet_NoRegister()
{
	return UVitalAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UVitalAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "VitalAttributeSet.h" },
		{ "ModuleRelativePath", "VitalAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "VitalAttributeSet" },
		{ "ModuleRelativePath", "VitalAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVitalAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVitalAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVitalAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVitalAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVitalAttributeSet_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVitalAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTopDownAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVitalAttributeSet_Statics::ClassParams = {
	&UVitalAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVitalAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVitalAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVitalAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UVitalAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVitalAttributeSet()
{
	if (!Z_Registration_Info_UClass_UVitalAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVitalAttributeSet.OuterSingleton, Z_Construct_UClass_UVitalAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVitalAttributeSet.OuterSingleton;
}
template<> TOPDOWNPROJECT_API UClass* StaticClass<UVitalAttributeSet>()
{
	return UVitalAttributeSet::StaticClass();
}
UVitalAttributeSet::UVitalAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVitalAttributeSet);
UVitalAttributeSet::~UVitalAttributeSet() {}
// End Class UVitalAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_VitalAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVitalAttributeSet, UVitalAttributeSet::StaticClass, TEXT("UVitalAttributeSet"), &Z_Registration_Info_UClass_UVitalAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVitalAttributeSet), 44809753U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_VitalAttributeSet_h_3803786018(TEXT("/Script/TopDownProject"),
	Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_VitalAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_VitalAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
