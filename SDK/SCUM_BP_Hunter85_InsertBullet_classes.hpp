#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Hunter85_InsertBullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Hunter85_InsertBullet.BP_Hunter85_InsertBullet_C
// 0x0000 (0x0090 - 0x0090)
class UBP_Hunter85_InsertBullet_C : public UInsertCartridge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Hunter85_InsertBullet.BP_Hunter85_InsertBullet_C");
		return ptr;
	}


	bool CanExecuteUsingData(const struct FWeaponReloadData& Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
