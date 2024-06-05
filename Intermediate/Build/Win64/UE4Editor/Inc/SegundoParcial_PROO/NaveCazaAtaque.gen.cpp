// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SegundoParcial_PROO/NaveCazaAtaque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveCazaAtaque() {}
// Cross Module References
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_ANaveCazaAtaque_NoRegister();
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_ANaveCazaAtaque();
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_SegundoParcial_PROO();
// End Cross Module References
	void ANaveCazaAtaque::StaticRegisterNativesANaveCazaAtaque()
	{
	}
	UClass* Z_Construct_UClass_ANaveCazaAtaque_NoRegister()
	{
		return ANaveCazaAtaque::StaticClass();
	}
	struct Z_Construct_UClass_ANaveCazaAtaque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveCazaAtaque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_SegundoParcial_PROO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveCazaAtaque_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveCazaAtaque.h" },
		{ "ModuleRelativePath", "NaveCazaAtaque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveCazaAtaque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveCazaAtaque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveCazaAtaque_Statics::ClassParams = {
		&ANaveCazaAtaque::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveCazaAtaque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveCazaAtaque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveCazaAtaque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveCazaAtaque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveCazaAtaque, 4081742351);
	template<> SEGUNDOPARCIAL_PROO_API UClass* StaticClass<ANaveCazaAtaque>()
	{
		return ANaveCazaAtaque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveCazaAtaque(Z_Construct_UClass_ANaveCazaAtaque, &ANaveCazaAtaque::StaticClass, TEXT("/Script/SegundoParcial_PROO"), TEXT("ANaveCazaAtaque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveCazaAtaque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
