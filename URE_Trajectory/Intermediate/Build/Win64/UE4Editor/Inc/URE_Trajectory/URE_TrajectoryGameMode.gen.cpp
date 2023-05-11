// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "URE_Trajectory/URE_TrajectoryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeURE_TrajectoryGameMode() {}
// Cross Module References
	URE_TRAJECTORY_API UClass* Z_Construct_UClass_AURE_TrajectoryGameMode_NoRegister();
	URE_TRAJECTORY_API UClass* Z_Construct_UClass_AURE_TrajectoryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_URE_Trajectory();
// End Cross Module References
	void AURE_TrajectoryGameMode::StaticRegisterNativesAURE_TrajectoryGameMode()
	{
	}
	UClass* Z_Construct_UClass_AURE_TrajectoryGameMode_NoRegister()
	{
		return AURE_TrajectoryGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AURE_TrajectoryGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_URE_Trajectory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "URE_TrajectoryGameMode.h" },
		{ "ModuleRelativePath", "URE_TrajectoryGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AURE_TrajectoryGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::ClassParams = {
		&AURE_TrajectoryGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AURE_TrajectoryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AURE_TrajectoryGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AURE_TrajectoryGameMode, 188031182);
	template<> URE_TRAJECTORY_API UClass* StaticClass<AURE_TrajectoryGameMode>()
	{
		return AURE_TrajectoryGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AURE_TrajectoryGameMode(Z_Construct_UClass_AURE_TrajectoryGameMode, &AURE_TrajectoryGameMode::StaticClass, TEXT("/Script/URE_Trajectory"), TEXT("AURE_TrajectoryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AURE_TrajectoryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
