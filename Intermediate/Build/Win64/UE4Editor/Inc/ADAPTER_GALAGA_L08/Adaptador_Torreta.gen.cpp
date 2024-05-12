// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADAPTER_GALAGA_L08/Adaptador_Torreta.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdaptador_Torreta() {}
// Cross Module References
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AAdaptador_Torreta_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AAdaptador_Torreta();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_ATORRETA_ESPACIAL_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_UTorreta_INT_NoRegister();
// End Cross Module References
	void AAdaptador_Torreta::StaticRegisterNativesAAdaptador_Torreta()
	{
	}
	UClass* Z_Construct_UClass_AAdaptador_Torreta_NoRegister()
	{
		return AAdaptador_Torreta::StaticClass();
	}
	struct Z_Construct_UClass_AAdaptador_Torreta_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torreta_Spaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Torreta_Spaw;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdaptador_Torreta_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptador_Torreta_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Adaptador_Torreta.h" },
		{ "ModuleRelativePath", "Adaptador_Torreta.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdaptador_Torreta_Statics::NewProp_Torreta_Spaw_MetaData[] = {
		{ "Category", "Torreta" },
		{ "ModuleRelativePath", "Adaptador_Torreta.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdaptador_Torreta_Statics::NewProp_Torreta_Spaw = { "Torreta_Spaw", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdaptador_Torreta, Torreta_Spaw), Z_Construct_UClass_ATORRETA_ESPACIAL_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdaptador_Torreta_Statics::NewProp_Torreta_Spaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Torreta_Statics::NewProp_Torreta_Spaw_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdaptador_Torreta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdaptador_Torreta_Statics::NewProp_Torreta_Spaw,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAdaptador_Torreta_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTorreta_INT_NoRegister, (int32)VTABLE_OFFSET(AAdaptador_Torreta, ITorreta_INT), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdaptador_Torreta_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdaptador_Torreta>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdaptador_Torreta_Statics::ClassParams = {
		&AAdaptador_Torreta::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdaptador_Torreta_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Torreta_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdaptador_Torreta_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdaptador_Torreta_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdaptador_Torreta()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdaptador_Torreta_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdaptador_Torreta, 1151423331);
	template<> ADAPTER_GALAGA_L08_API UClass* StaticClass<AAdaptador_Torreta>()
	{
		return AAdaptador_Torreta::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdaptador_Torreta(Z_Construct_UClass_AAdaptador_Torreta, &AAdaptador_Torreta::StaticClass, TEXT("/Script/ADAPTER_GALAGA_L08"), TEXT("AAdaptador_Torreta"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdaptador_Torreta);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
