// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef URE_TRAJECTORY_URE_TrajectoryProjectile_generated_h
#error "URE_TrajectoryProjectile.generated.h already included, missing '#pragma once' in URE_TrajectoryProjectile.h"
#endif
#define URE_TRAJECTORY_URE_TrajectoryProjectile_generated_h

#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_SPARSE_DATA
#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAURE_TrajectoryProjectile(); \
	friend struct Z_Construct_UClass_AURE_TrajectoryProjectile_Statics; \
public: \
	DECLARE_CLASS(AURE_TrajectoryProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/URE_Trajectory"), NO_API) \
	DECLARE_SERIALIZER(AURE_TrajectoryProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAURE_TrajectoryProjectile(); \
	friend struct Z_Construct_UClass_AURE_TrajectoryProjectile_Statics; \
public: \
	DECLARE_CLASS(AURE_TrajectoryProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/URE_Trajectory"), NO_API) \
	DECLARE_SERIALIZER(AURE_TrajectoryProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AURE_TrajectoryProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AURE_TrajectoryProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AURE_TrajectoryProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AURE_TrajectoryProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AURE_TrajectoryProjectile(AURE_TrajectoryProjectile&&); \
	NO_API AURE_TrajectoryProjectile(const AURE_TrajectoryProjectile&); \
public:


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AURE_TrajectoryProjectile(AURE_TrajectoryProjectile&&); \
	NO_API AURE_TrajectoryProjectile(const AURE_TrajectoryProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AURE_TrajectoryProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AURE_TrajectoryProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AURE_TrajectoryProjectile)


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AURE_TrajectoryProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AURE_TrajectoryProjectile, ProjectileMovement); }


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_12_PROLOG
#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_SPARSE_DATA \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_RPC_WRAPPERS \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_INCLASS \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_SPARSE_DATA \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_INCLASS_NO_PURE_DECLS \
	URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> URE_TRAJECTORY_API UClass* StaticClass<class AURE_TrajectoryProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID URE_Trajectory_Source_URE_Trajectory_URE_TrajectoryProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
