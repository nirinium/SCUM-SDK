#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cal7_62x54mmR_5_bullets_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cal7_62x54mmR_5_bullets.Cal7_62x54mmR_5_bullets_C
// 0x0000 (0x07A0 - 0x07A0)
class ACal7_62x54mmR_5_bullets_C : public AAmmunitionItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cal7_62x54mmR_5_bullets.Cal7_62x54mmR_5_bullets_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
