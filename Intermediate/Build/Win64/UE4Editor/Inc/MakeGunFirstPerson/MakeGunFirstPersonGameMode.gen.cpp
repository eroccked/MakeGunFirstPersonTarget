// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MakeGunFirstPerson/MakeGunFirstPersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeGunFirstPersonGameMode() {}
// Cross Module References
	MAKEGUNFIRSTPERSON_API UClass* Z_Construct_UClass_AMakeGunFirstPersonGameMode_NoRegister();
	MAKEGUNFIRSTPERSON_API UClass* Z_Construct_UClass_AMakeGunFirstPersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MakeGunFirstPerson();
// End Cross Module References
	void AMakeGunFirstPersonGameMode::StaticRegisterNativesAMakeGunFirstPersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMakeGunFirstPersonGameMode_NoRegister()
	{
		return AMakeGunFirstPersonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MakeGunFirstPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MakeGunFirstPersonGameMode.h" },
		{ "ModuleRelativePath", "MakeGunFirstPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMakeGunFirstPersonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::ClassParams = {
		&AMakeGunFirstPersonGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMakeGunFirstPersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMakeGunFirstPersonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMakeGunFirstPersonGameMode, 136303063);
	template<> MAKEGUNFIRSTPERSON_API UClass* StaticClass<AMakeGunFirstPersonGameMode>()
	{
		return AMakeGunFirstPersonGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMakeGunFirstPersonGameMode(Z_Construct_UClass_AMakeGunFirstPersonGameMode, &AMakeGunFirstPersonGameMode::StaticClass, TEXT("/Script/MakeGunFirstPerson"), TEXT("AMakeGunFirstPersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMakeGunFirstPersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
