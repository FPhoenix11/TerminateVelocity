// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedSessions/Classes/AdvancedGameSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedGameSession() {}
// Cross Module References
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_AAdvancedGameSession_NoRegister();
	ADVANCEDSESSIONS_API UClass* Z_Construct_UClass_AAdvancedGameSession();
	ENGINE_API UClass* Z_Construct_UClass_AGameSession();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
	void AAdvancedGameSession::StaticRegisterNativesAAdvancedGameSession()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAdvancedGameSession);
	UClass* Z_Construct_UClass_AAdvancedGameSession_NoRegister()
	{
		return AAdvancedGameSession::StaticClass();
	}
	struct Z_Construct_UClass_AAdvancedGameSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BanList_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BanList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BanList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BanList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvancedGameSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameSession,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvancedSessions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n A quick wrapper around the game session to add a partial ban implementation. Just bans for the duration of the current session\n*/" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AdvancedGameSession.h" },
		{ "ModuleRelativePath", "Classes/AdvancedGameSession.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A quick wrapper around the game session to add a partial ban implementation. Just bans for the duration of the current session" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_ValueProp = { "BanList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_Key_KeyProp = { "BanList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 3508419189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AdvancedGameSession.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList = { "BanList", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdvancedGameSession, BanList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_MetaData)) }; // 3508419189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdvancedGameSession_Statics::NewProp_BanList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvancedGameSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvancedGameSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAdvancedGameSession_Statics::ClassParams = {
		&AAdvancedGameSession::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvancedGameSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvancedGameSession()
	{
		if (!Z_Registration_Info_UClass_AAdvancedGameSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAdvancedGameSession.OuterSingleton, Z_Construct_UClass_AAdvancedGameSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAdvancedGameSession.OuterSingleton;
	}
	template<> ADVANCEDSESSIONS_API UClass* StaticClass<AAdvancedGameSession>()
	{
		return AAdvancedGameSession::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvancedGameSession);
	struct Z_CompiledInDeferFile_FID_TerminateVelocity_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedGameSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TerminateVelocity_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedGameSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAdvancedGameSession, AAdvancedGameSession::StaticClass, TEXT("AAdvancedGameSession"), &Z_Registration_Info_UClass_AAdvancedGameSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAdvancedGameSession), 3583822719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TerminateVelocity_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedGameSession_h_532764824(TEXT("/Script/AdvancedSessions"),
		Z_CompiledInDeferFile_FID_TerminateVelocity_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedGameSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TerminateVelocity_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedGameSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
