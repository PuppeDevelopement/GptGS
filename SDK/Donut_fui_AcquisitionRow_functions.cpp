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


// Function Donut_fui_AcquisitionRow.Donut_fui_AcquisitionRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDonut_fui_AcquisitionRow_C::Construct()
{
	static auto Func = Class->GetFunction("Donut_fui_AcquisitionRow_C", "Construct");

	Params::UDonut_fui_AcquisitionRow_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_fui_AcquisitionRow.Donut_fui_AcquisitionRow_C.ExecuteUbergraph_Donut_fui_AcquisitionRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonut_fui_AcquisitionRow_C::ExecuteUbergraph_Donut_fui_AcquisitionRow(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Donut_fui_AcquisitionRow_C", "ExecuteUbergraph_Donut_fui_AcquisitionRow");

	Params::UDonut_fui_AcquisitionRow_C_ExecuteUbergraph_Donut_fui_AcquisitionRow_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
