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
#ifdef MAKEGUNFIRSTPERSON_MakeGunFirstPersonProjectile_generated_h
#error "MakeGunFirstPersonProjectile.generated.h already included, missing '#pragma once' in MakeGunFirstPersonProjectile.h"
#endif
#define MAKEGUNFIRSTPERSON_MakeGunFirstPersonProjectile_generated_h

#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_SPARSE_DATA
#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMakeGunFirstPersonProjectile(); \
	friend struct Z_Construct_UClass_AMakeGunFirstPersonProjectile_Statics; \
public: \
	DECLARE_CLASS(AMakeGunFirstPersonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MakeGunFirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AMakeGunFirstPersonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMakeGunFirstPersonProjectile(); \
	friend struct Z_Construct_UClass_AMakeGunFirstPersonProjectile_Statics; \
public: \
	DECLARE_CLASS(AMakeGunFirstPersonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MakeGunFirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AMakeGunFirstPersonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMakeGunFirstPersonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMakeGunFirstPersonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMakeGunFirstPersonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMakeGunFirstPersonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMakeGunFirstPersonProjectile(AMakeGunFirstPersonProjectile&&); \
	NO_API AMakeGunFirstPersonProjectile(const AMakeGunFirstPersonProjectile&); \
public:


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMakeGunFirstPersonProjectile(AMakeGunFirstPersonProjectile&&); \
	NO_API AMakeGunFirstPersonProjectile(const AMakeGunFirstPersonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMakeGunFirstPersonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMakeGunFirstPersonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMakeGunFirstPersonProjectile)


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMakeGunFirstPersonProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMakeGunFirstPersonProjectile, ProjectileMovement); }


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_12_PROLOG
#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_SPARSE_DATA \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_RPC_WRAPPERS \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_INCLASS \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_SPARSE_DATA \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MAKEGUNFIRSTPERSON_API UClass* StaticClass<class AMakeGunFirstPersonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MakeGunFirstPerson_Source_MakeGunFirstPerson_MakeGunFirstPersonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
