// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "OJAMAUnrealTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOJAMAUnrealTestGameModeBase() {}
// Cross Module References
	OJAMAUNREALTEST_API UClass* Z_Construct_UClass_AOJAMAUnrealTestGameModeBase_NoRegister();
	OJAMAUNREALTEST_API UClass* Z_Construct_UClass_AOJAMAUnrealTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OJAMAUnrealTest();
// End Cross Module References
	void AOJAMAUnrealTestGameModeBase::StaticRegisterNativesAOJAMAUnrealTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOJAMAUnrealTestGameModeBase_NoRegister()
	{
		return AOJAMAUnrealTestGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AOJAMAUnrealTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_OJAMAUnrealTest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "OJAMAUnrealTestGameModeBase.h" },
				{ "ModuleRelativePath", "OJAMAUnrealTestGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOJAMAUnrealTestGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOJAMAUnrealTestGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOJAMAUnrealTestGameModeBase, 2318282491);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOJAMAUnrealTestGameModeBase(Z_Construct_UClass_AOJAMAUnrealTestGameModeBase, &AOJAMAUnrealTestGameModeBase::StaticClass, TEXT("/Script/OJAMAUnrealTest"), TEXT("AOJAMAUnrealTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOJAMAUnrealTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
