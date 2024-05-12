// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADAPTER_GALAGA_L08/Torreta_INT.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTorreta_INT() {}
// Cross Module References
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_UTorreta_INT_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_UTorreta_INT();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08();
// End Cross Module References
	void UTorreta_INT::StaticRegisterNativesUTorreta_INT()
	{
	}
	UClass* Z_Construct_UClass_UTorreta_INT_NoRegister()
	{
		return UTorreta_INT::StaticClass();
	}
	struct Z_Construct_UClass_UTorreta_INT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTorreta_INT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTorreta_INT_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Torreta_INT.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTorreta_INT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITorreta_INT>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTorreta_INT_Statics::ClassParams = {
		&UTorreta_INT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTorreta_INT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTorreta_INT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTorreta_INT()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTorreta_INT_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTorreta_INT, 395742582);
	template<> ADAPTER_GALAGA_L08_API UClass* StaticClass<UTorreta_INT>()
	{
		return UTorreta_INT::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTorreta_INT(Z_Construct_UClass_UTorreta_INT, &UTorreta_INT::StaticClass, TEXT("/Script/ADAPTER_GALAGA_L08"), TEXT("UTorreta_INT"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTorreta_INT);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
