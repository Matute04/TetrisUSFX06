// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PiezaDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiezaDirector() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDirector_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiezaDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void APiezaDirector::StaticRegisterNativesAPiezaDirector()
	{
	}
	UClass* Z_Construct_UClass_APiezaDirector_NoRegister()
	{
		return APiezaDirector::StaticClass();
	}
	struct Z_Construct_UClass_APiezaDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiezaDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiezaDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PiezaDirector.h" },
		{ "ModuleRelativePath", "PiezaDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiezaDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiezaDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiezaDirector_Statics::ClassParams = {
		&APiezaDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiezaDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiezaDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiezaDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiezaDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiezaDirector, 3548521870);
	template<> TETRISUSFX01_API UClass* StaticClass<APiezaDirector>()
	{
		return APiezaDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiezaDirector(Z_Construct_UClass_APiezaDirector, &APiezaDirector::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiezaDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiezaDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
