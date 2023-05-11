// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "URE_Trajectory/URE_TrajectoryHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeURE_TrajectoryHUD() {}
// Cross Module References
	URE_TRAJECTORY_API UClass* Z_Construct_UClass_AURE_TrajectoryHUD_NoRegister();
	URE_TRAJECTORY_API UClass* Z_Construct_UClass_AURE_TrajectoryHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_URE_Trajectory();
// End Cross Module References
	void AURE_TrajectoryHUD::StaticRegisterNativesAURE_TrajectoryHUD()
	{
	}
	UClass* Z_Construct_UClass_AURE_TrajectoryHUD_NoRegister()
	{
		return AURE_TrajectoryHUD::StaticClass();
	}
	struct Z_Construct_UClass_AURE_TrajectoryHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AURE_TrajectoryHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_URE_Trajectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AURE_TrajectoryHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "URE_TrajectoryHUD.h" },
		{ "ModuleRelativePath", "URE_TrajectoryHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AURE_TrajectoryHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AURE_TrajectoryHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AURE_TrajectoryHUD_Statics::ClassParams = {
		&AURE_TrajectoryHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AURE_TrajectoryHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AURE_TrajectoryHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AURE_TrajectoryHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AURE_TrajectoryHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AURE_TrajectoryHUD, 3887957163);
	template<> URE_TRAJECTORY_API UClass* StaticClass<AURE_TrajectoryHUD>()
	{
		return AURE_TrajectoryHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AURE_TrajectoryHUD(Z_Construct_UClass_AURE_TrajectoryHUD, &AURE_TrajectoryHUD::StaticClass, TEXT("/Script/URE_Trajectory"), TEXT("AURE_TrajectoryHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AURE_TrajectoryHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
