// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SegundoParcial_PROO/FabricaNavesNiv1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNavesNiv1() {}
// Cross Module References
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_AFabricaNavesNiv1_NoRegister();
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_AFabricaNavesNiv1();
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_AABSFabricaNaves();
	UPackage* Z_Construct_UPackage__Script_SegundoParcial_PROO();
// End Cross Module References
	void AFabricaNavesNiv1::StaticRegisterNativesAFabricaNavesNiv1()
	{
	}
	UClass* Z_Construct_UClass_AFabricaNavesNiv1_NoRegister()
	{
		return AFabricaNavesNiv1::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNavesNiv1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNavesNiv1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AABSFabricaNaves,
		(UObject* (*)())Z_Construct_UPackage__Script_SegundoParcial_PROO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNavesNiv1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaNavesNiv1.h" },
		{ "ModuleRelativePath", "FabricaNavesNiv1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNavesNiv1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNavesNiv1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNavesNiv1_Statics::ClassParams = {
		&AFabricaNavesNiv1::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNavesNiv1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNavesNiv1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNavesNiv1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaNavesNiv1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaNavesNiv1, 372989942);
	template<> SEGUNDOPARCIAL_PROO_API UClass* StaticClass<AFabricaNavesNiv1>()
	{
		return AFabricaNavesNiv1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaNavesNiv1(Z_Construct_UClass_AFabricaNavesNiv1, &AFabricaNavesNiv1::StaticClass, TEXT("/Script/SegundoParcial_PROO"), TEXT("AFabricaNavesNiv1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNavesNiv1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
