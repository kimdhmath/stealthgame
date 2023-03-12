// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project20183043/project20183043GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproject20183043GameMode() {}
// Cross Module References
	PROJECT20183043_API UClass* Z_Construct_UClass_Aproject20183043GameMode_NoRegister();
	PROJECT20183043_API UClass* Z_Construct_UClass_Aproject20183043GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_project20183043();
// End Cross Module References
	void Aproject20183043GameMode::StaticRegisterNativesAproject20183043GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aproject20183043GameMode);
	UClass* Z_Construct_UClass_Aproject20183043GameMode_NoRegister()
	{
		return Aproject20183043GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aproject20183043GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aproject20183043GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_project20183043,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproject20183043GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "project20183043GameMode.h" },
		{ "ModuleRelativePath", "project20183043GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aproject20183043GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aproject20183043GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aproject20183043GameMode_Statics::ClassParams = {
		&Aproject20183043GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aproject20183043GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aproject20183043GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aproject20183043GameMode()
	{
		if (!Z_Registration_Info_UClass_Aproject20183043GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aproject20183043GameMode.OuterSingleton, Z_Construct_UClass_Aproject20183043GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aproject20183043GameMode.OuterSingleton;
	}
	template<> PROJECT20183043_API UClass* StaticClass<Aproject20183043GameMode>()
	{
		return Aproject20183043GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aproject20183043GameMode);
	struct Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aproject20183043GameMode, Aproject20183043GameMode::StaticClass, TEXT("Aproject20183043GameMode"), &Z_Registration_Info_UClass_Aproject20183043GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aproject20183043GameMode), 295975192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043GameMode_h_1484132794(TEXT("/Script/project20183043"),
		Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
