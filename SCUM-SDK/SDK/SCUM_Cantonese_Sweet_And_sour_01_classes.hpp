#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_Cantonese_Sweet_And_sour_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Cantonese_Sweet_And_sour_01.Cantonese_Sweet_And_sour_01_C
// 0x0000 (0x0860 - 0x0860)
class ACantonese_Sweet_And_sour_01_C : public AFoodItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Cantonese_Sweet_And_sour_01.Cantonese_Sweet_And_sour_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
