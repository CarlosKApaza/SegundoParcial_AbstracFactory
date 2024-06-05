// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SegundoParcial_PROO/ABSFabricaNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABSFabricaNaves() {}
// Cross Module References
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_AABSFabricaNaves_NoRegister();
	SEGUNDOPARCIAL_PROO_API UClass* Z_Construct_UClass_AABSFabricaNaves();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SegundoParcial_PROO();
// End Cross Module References
	void AABSFabricaNaves::StaticRegisterNativesAABSFabricaNaves()
	{
	}
	UClass* Z_Construct_UClass_AABSFabricaNaves_NoRegister()
	{
		return AABSFabricaNaves::StaticClass();
	}
	struct Z_Construct_UClass_AABSFabricaNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AABSFabricaNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SegundoParcial_PROO,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AABSFabricaNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ABSFabricaNaves.h" },
		{ "ModuleRelativePath", "ABSFabricaNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AABSFabricaNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AABSFabricaNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AABSFabricaNaves_Statics::ClassParams = {
		&AABSFabricaNaves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AABSFabricaNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AABSFabricaNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AABSFabricaNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AABSFabricaNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AABSFabricaNaves, 3710244060);
	template<> SEGUNDOPARCIAL_PROO_API UClass* StaticClass<AABSFabricaNaves>()
	{
		return AABSFabricaNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AABSFabricaNaves(Z_Construct_UClass_AABSFabricaNaves, &AABSFabricaNaves::StaticClass, TEXT("/Script/SegundoParcial_PROO"), TEXT("AABSFabricaNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AABSFabricaNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
