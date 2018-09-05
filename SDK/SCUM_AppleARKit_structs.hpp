#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Basic.hpp"
#include "SCUM_CoreUObject_classes.hpp"
#include "SCUM_Engine_classes.hpp"
#include "SCUM_ProceduralMeshComponent_classes.hpp"
#include "SCUM_AugmentedReality_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AppleARKit.EARFaceComponentTransformMixing
enum class EARFaceComponentTransformMixing : uint8_t
{
	EARFaceComponentTransformMixing__ComponentOnly = 0,
	EARFaceComponentTransformMixing__ComponentLocationTrackedRotation = 1,
	EARFaceComponentTransformMixing__ComponentWithTracked = 2,
	EARFaceComponentTransformMixing__TrackingOnly = 3,
	EARFaceComponentTransformMixing__EARFaceComponentTransformMixing_MAX = 4
};


// Enum AppleARKit.EAppleARKitHitTestResultType
enum class EAppleARKitHitTestResultType : uint8_t
{
	EAppleARKitHitTestResultType__None = 0,
	EAppleARKitHitTestResultType__FeaturePoint = 1,
	EAppleARKitHitTestResultType__EstimatedHorizontalPlane = 2,
	EAppleARKitHitTestResultType__ExistingPlane = 3,
	EAppleARKitHitTestResultType__ExistingPlaneUsingExtent = 4,
	EAppleARKitHitTestResultType__EAppleARKitHitTestResultType_MAX = 5
};


// Enum AppleARKit.EARKitTextureType
enum class EARKitTextureType : uint8_t
{
	TextureY                       = 0,
	TextureCbCr                    = 1,
	EARKitTextureType_MAX          = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AppleARKit.AppleARKitHitTestResult
// 0x0050
struct FAppleARKitHitTestResult
{
	EAppleARKitHitTestResultType                       Type;                                                     // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UAppleARKitAnchor*                           Anchor;                                                   // 0x0040(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct AppleARKit.AppleARKitFrame
// 0x00B0
struct FAppleARKitFrame
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AppleARKit.AppleARKitCamera
// 0x0080
struct FAppleARKitCamera
{
	EARTrackingQuality                                 TrackingQuality;                                          // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FQuat                                       Orientation;                                              // 0x0040(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     Translation;                                              // 0x0050(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   ImageResolution;                                          // 0x005C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   FocalLength;                                              // 0x0064(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector2D                                   PrincipalPoint;                                           // 0x006C(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0074(0x000C) MISSED OFFSET
};

// ScriptStruct AppleARKit.AppleARKitLightEstimate
// 0x000C
struct FAppleARKitLightEstimate
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AmbientIntensity;                                         // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientColorTemperatureKelvin;                            // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
