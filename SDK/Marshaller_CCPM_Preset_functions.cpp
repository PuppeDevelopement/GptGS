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


// Function Marshaller_CCPM_Preset.Marshaller_CCPM_Preset_C.ExecuteUbergraph_Marshaller_CCPM_Preset
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMarshaller_CCPM_Preset_C::ExecuteUbergraph_Marshaller_CCPM_Preset(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Marshaller_CCPM_Preset_C", "ExecuteUbergraph_Marshaller_CCPM_Preset");

	Params::UMarshaller_CCPM_Preset_C_ExecuteUbergraph_Marshaller_CCPM_Preset_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
