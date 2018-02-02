// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Bullet_generated_h
#error "Bullet.generated.h already included, missing '#pragma once' in Bullet.h"
#endif
#define MYPROJECT_Bullet_generated_h

#define MyProject_Source_MyProject_Bullet_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Bullet_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ABullet(); \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABullet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Bullet_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABullet(); \
	friend MYPROJECT_API class UClass* Z_Construct_UClass_ABullet(); \
public: \
	DECLARE_CLASS(ABullet, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABullet) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject_Source_MyProject_Bullet_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public:


#define MyProject_Source_MyProject_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABullet(ABullet&&); \
	NO_API ABullet(const ABullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABullet); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABullet)


#define MyProject_Source_MyProject_Bullet_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Bullet_h_9_PROLOG
#define MyProject_Source_MyProject_Bullet_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Bullet_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Bullet_h_12_INCLASS \
	MyProject_Source_MyProject_Bullet_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Bullet_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Bullet_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Bullet_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Bullet_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Bullet_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Bullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
