// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Weapon_MP5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Weapon_MP5.BP_Weapon_MP5_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Weapon_MP5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapon_MP5.BP_Weapon_MP5_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
