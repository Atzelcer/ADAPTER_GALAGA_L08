// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ADAPTER_GALAGA_L08/ADAPTER_GALAGA_L08GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeADAPTER_GALAGA_L08GameMode() {}
// Cross Module References
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AAdaptador_Torreta_NoRegister();
	ADAPTER_GALAGA_L08_API UClass* Z_Construct_UClass_AADAPTER_GALAGA_L08Pawn_NoRegister();
// End Cross Module References
	void AADAPTER_GALAGA_L08GameMode::StaticRegisterNativesAADAPTER_GALAGA_L08GameMode()
	{
	}
	UClass* Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_NoRegister()
	{
		return AADAPTER_GALAGA_L08GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptadorTorreta_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdaptadorTorreta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ADAPTER_GALAGA_L08,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ADAPTER_GALAGA_L08GameMode.h" },
		{ "ModuleRelativePath", "ADAPTER_GALAGA_L08GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_AdaptadorTorreta_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "ADAPTER_GALAGA_L08GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_AdaptadorTorreta = { "AdaptadorTorreta", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AADAPTER_GALAGA_L08GameMode, AdaptadorTorreta), Z_Construct_UClass_AAdaptador_Torreta_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_AdaptadorTorreta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_AdaptadorTorreta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_Nave_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "ADAPTER_GALAGA_L08GameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_Nave = { "Nave", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AADAPTER_GALAGA_L08GameMode, Nave), Z_Construct_UClass_AADAPTER_GALAGA_L08Pawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_Nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_AdaptadorTorreta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::NewProp_Nave,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AADAPTER_GALAGA_L08GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::ClassParams = {
		&AADAPTER_GALAGA_L08GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AADAPTER_GALAGA_L08GameMode, 1022008146);
	template<> ADAPTER_GALAGA_L08_API UClass* StaticClass<AADAPTER_GALAGA_L08GameMode>()
	{
		return AADAPTER_GALAGA_L08GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AADAPTER_GALAGA_L08GameMode(Z_Construct_UClass_AADAPTER_GALAGA_L08GameMode, &AADAPTER_GALAGA_L08GameMode::StaticClass, TEXT("/Script/ADAPTER_GALAGA_L08"), TEXT("AADAPTER_GALAGA_L08GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AADAPTER_GALAGA_L08GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
