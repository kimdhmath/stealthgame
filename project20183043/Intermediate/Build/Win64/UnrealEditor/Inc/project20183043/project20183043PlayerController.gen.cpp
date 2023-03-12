// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project20183043/project20183043PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproject20183043PlayerController() {}
// Cross Module References
	PROJECT20183043_API UClass* Z_Construct_UClass_Aproject20183043PlayerController_NoRegister();
	PROJECT20183043_API UClass* Z_Construct_UClass_Aproject20183043PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_project20183043();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	void Aproject20183043PlayerController::StaticRegisterNativesAproject20183043PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aproject20183043PlayerController);
	UClass* Z_Construct_UClass_Aproject20183043PlayerController_NoRegister()
	{
		return Aproject20183043PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_Aproject20183043PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aproject20183043PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_project20183043,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproject20183043PlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "project20183043PlayerController.h" },
		{ "ModuleRelativePath", "project20183043PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "project20183043PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aproject20183043PlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "project20183043PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aproject20183043PlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_FXCursor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aproject20183043PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aproject20183043PlayerController_Statics::NewProp_FXCursor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aproject20183043PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aproject20183043PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aproject20183043PlayerController_Statics::ClassParams = {
		&Aproject20183043PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aproject20183043PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Aproject20183043PlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aproject20183043PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aproject20183043PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aproject20183043PlayerController()
	{
		if (!Z_Registration_Info_UClass_Aproject20183043PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aproject20183043PlayerController.OuterSingleton, Z_Construct_UClass_Aproject20183043PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aproject20183043PlayerController.OuterSingleton;
	}
	template<> PROJECT20183043_API UClass* StaticClass<Aproject20183043PlayerController>()
	{
		return Aproject20183043PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aproject20183043PlayerController);
	struct Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aproject20183043PlayerController, Aproject20183043PlayerController::StaticClass, TEXT("Aproject20183043PlayerController"), &Z_Registration_Info_UClass_Aproject20183043PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aproject20183043PlayerController), 3878246358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043PlayerController_h_43090128(TEXT("/Script/project20183043"),
		Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project20183043_Source_project20183043_project20183043PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
