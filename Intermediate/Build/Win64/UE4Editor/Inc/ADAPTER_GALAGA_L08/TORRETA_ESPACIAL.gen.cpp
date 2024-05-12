// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADAPTER_GALAGA_L08/TORRETA_ESPACIAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTORRETA_ESPACIAL() {}
// Cross Module References
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_ATORRETA_ESPACIAL_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_ATORRETA_ESPACIAL();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATORRETA_ESPACIAL::StaticRegisterNativesATORRETA_ESPACIAL()
	{
	}
	UClass* Z_Construct_UClass_ATORRETA_ESPACIAL_NoRegister()
	{
		return ATORRETA_ESPACIAL::StaticClass();
	}
	struct Z_Construct_UClass_ATORRETA_ESPACIAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Malla_Torreta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Malla_Torreta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TORRETA_ESPACIAL.h" },
		{ "ModuleRelativePath", "TORRETA_ESPACIAL.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::NewProp_Malla_Torreta_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TORRETA_ESPACIAL.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::NewProp_Malla_Torreta = { "Malla_Torreta", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATORRETA_ESPACIAL, Malla_Torreta), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::NewProp_Malla_Torreta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::NewProp_Malla_Torreta_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::NewProp_Malla_Torreta,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATORRETA_ESPACIAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::ClassParams = {
		&ATORRETA_ESPACIAL::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATORRETA_ESPACIAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATORRETA_ESPACIAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATORRETA_ESPACIAL, 1032009042);
	template<> ADAPTER_GALAGA_L08_API UClass* StaticClass<ATORRETA_ESPACIAL>()
	{
		return ATORRETA_ESPACIAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATORRETA_ESPACIAL(Z_Construct_UClass_ATORRETA_ESPACIAL, &ATORRETA_ESPACIAL::StaticClass, TEXT("/Script/ADAPTER_GALAGA_L08"), TEXT("ATORRETA_ESPACIAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATORRETA_ESPACIAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
