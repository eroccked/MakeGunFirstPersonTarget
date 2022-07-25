// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MakeGunFirstPerson/MakeGunFirstPersonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMakeGunFirstPersonHUD() {}
// Cross Module References
	MAKEGUNFIRSTPERSON_API UClass* Z_Construct_UClass_AMakeGunFirstPersonHUD_NoRegister();
	MAKEGUNFIRSTPERSON_API UClass* Z_Construct_UClass_AMakeGunFirstPersonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_MakeGunFirstPerson();
// End Cross Module References
	void AMakeGunFirstPersonHUD::StaticRegisterNativesAMakeGunFirstPersonHUD()
	{
	}
	UClass* Z_Construct_UClass_AMakeGunFirstPersonHUD_NoRegister()
	{
		return AMakeGunFirstPersonHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_MakeGunFirstPerson,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MakeGunFirstPersonHUD.h" },
		{ "ModuleRelativePath", "MakeGunFirstPersonHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMakeGunFirstPersonHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::ClassParams = {
		&AMakeGunFirstPersonHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMakeGunFirstPersonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMakeGunFirstPersonHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMakeGunFirstPersonHUD, 3234597457);
	template<> MAKEGUNFIRSTPERSON_API UClass* StaticClass<AMakeGunFirstPersonHUD>()
	{
		return AMakeGunFirstPersonHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMakeGunFirstPersonHUD(Z_Construct_UClass_AMakeGunFirstPersonHUD, &AMakeGunFirstPersonHUD::StaticClass, TEXT("/Script/MakeGunFirstPerson"), TEXT("AMakeGunFirstPersonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMakeGunFirstPersonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
