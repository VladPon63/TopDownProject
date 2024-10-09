// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownProject/DamageAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UDamageAttributeSet();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UDamageAttributeSet_NoRegister();
TOPDOWNPROJECT_API UClass* Z_Construct_UClass_UTopDownAttributeSet();
UPackage* Z_Construct_UPackage__Script_TopDownProject();
// End Cross Module References

// Begin Class UDamageAttributeSet
void UDamageAttributeSet::StaticRegisterNativesUDamageAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageAttributeSet);
UClass* Z_Construct_UClass_UDamageAttributeSet_NoRegister()
{
	return UDamageAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UDamageAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DamageAttributeSet.h" },
		{ "ModuleRelativePath", "DamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "DamageAttributeSet" },
		{ "ModuleRelativePath", "DamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resistance_MetaData[] = {
		{ "Category", "DamageAttributeSet" },
		{ "ModuleRelativePath", "DamageAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicPower_MetaData[] = {
		{ "Category", "DamageAttributeSet" },
		{ "ModuleRelativePath", "DamageAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Resistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MagicPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_Resistance = { "Resistance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageAttributeSet, Resistance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resistance_MetaData), NewProp_Resistance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_MagicPower = { "MagicPower", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDamageAttributeSet, MagicPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicPower_MetaData), NewProp_MagicPower_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDamageAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_Resistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDamageAttributeSet_Statics::NewProp_MagicPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDamageAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTopDownAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TopDownProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageAttributeSet_Statics::ClassParams = {
	&UDamageAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDamageAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDamageAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageAttributeSet()
{
	if (!Z_Registration_Info_UClass_UDamageAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageAttributeSet.OuterSingleton, Z_Construct_UClass_UDamageAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageAttributeSet.OuterSingleton;
}
template<> TOPDOWNPROJECT_API UClass* StaticClass<UDamageAttributeSet>()
{
	return UDamageAttributeSet::StaticClass();
}
UDamageAttributeSet::UDamageAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageAttributeSet);
UDamageAttributeSet::~UDamageAttributeSet() {}
// End Class UDamageAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_DamageAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageAttributeSet, UDamageAttributeSet::StaticClass, TEXT("UDamageAttributeSet"), &Z_Registration_Info_UClass_UDamageAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageAttributeSet), 3456146604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_DamageAttributeSet_h_870126680(TEXT("/Script/TopDownProject"),
	Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_DamageAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Vlad_ROBOT_DREAMS_CPP_UNREAL_LEXUS_MY_TOP_DOWN_PROJECT_TopDownProject_Source_TopDownProject_DamageAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
