#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Rabbitry_01_door_down_no_destruction_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Rabbitry_01_door_down_no_destruction.BP_Rabbitry_01_door_down_no_destruction_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_Rabbitry_01_door_down_no_destruction_C : public ARegularDoorStatic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Rabbitry_01_door_down_no_destruction.BP_Rabbitry_01_door_down_no_destruction_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
