#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MarshallerGliderPreset.MarshallerGliderPreset_C.ExecuteUbergraph_MarshallerGliderPreset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarshallerGliderPreset_C::ExecuteUbergraph_MarshallerGliderPreset(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MarshallerGliderPreset_C", "ExecuteUbergraph_MarshallerGliderPreset");

	Params::UMarshallerGliderPreset_C_ExecuteUbergraph_MarshallerGliderPreset_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
