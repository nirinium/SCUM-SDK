// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Warning_Rotating_Light_01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Warning_Rotating_Light_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Rotating_Light_01_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.ExecuteUbergraph_BP_Warning_Rotating_Light_01
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Warning_Rotating_Light_01_C::ExecuteUbergraph_BP_Warning_Rotating_Light_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Warning_Rotating_Light_01.BP_Warning_Rotating_Light_01_C.ExecuteUbergraph_BP_Warning_Rotating_Light_01");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
