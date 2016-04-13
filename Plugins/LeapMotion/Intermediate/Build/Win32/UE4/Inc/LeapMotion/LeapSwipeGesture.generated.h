// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULeapPointable;
#ifdef LEAPMOTION_LeapSwipeGesture_generated_h
#error "LeapSwipeGesture.generated.h already included, missing '#pragma once' in LeapSwipeGesture.h"
#endif
#define LEAPMOTION_LeapSwipeGesture_generated_h

#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
	}


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPointable) \
	{ \
		P_FINISH; \
		*(ULeapPointable**)Z_Param__Result=this->Pointable(); \
	}


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesULeapSwipeGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapSwipeGesture(); \
	public: \
	DECLARE_CLASS(ULeapSwipeGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapSwipeGesture) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapSwipeGesture*>(this); }


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesULeapSwipeGesture(); \
	friend LEAPMOTION_API class UClass* Z_Construct_UClass_ULeapSwipeGesture(); \
	public: \
	DECLARE_CLASS(ULeapSwipeGesture, ULeapGesture, COMPILED_IN_FLAGS(0), 0, LeapMotion, NO_API) \
	DECLARE_SERIALIZER(ULeapSwipeGesture) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ULeapSwipeGesture*>(this); }


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapSwipeGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapSwipeGesture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapSwipeGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapSwipeGesture); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapSwipeGesture(const ULeapSwipeGesture& InCopy); \
public:


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeapSwipeGesture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ULeapSwipeGesture(const ULeapSwipeGesture& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeapSwipeGesture); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeapSwipeGesture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeapSwipeGesture)


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_7_PROLOG
#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_RPC_WRAPPERS \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_INCLASS \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_INCLASS_NO_PURE_DECLS \
	leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeapSwipeGesture."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID leapmotion_boardgame_Plugins_LeapMotion_Source_LeapMotion_Public_LeapSwipeGesture_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
