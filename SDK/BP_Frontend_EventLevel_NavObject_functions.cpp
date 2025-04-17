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


// Function BP_Frontend_EventLevel_NavObject.BP_Frontend_EventLevel_NavObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_EventLevel_NavObject_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_C", "ReceiveBeginPlay");

	Params::ABP_Frontend_EventLevel_NavObject_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_EventLevel_NavObject.BP_Frontend_EventLevel_NavObject_C.ExecuteUbergraph_BP_Frontend_EventLevel_NavObject
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_EventLevel_NavObject_C::ExecuteUbergraph_BP_Frontend_EventLevel_NavObject(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_Frontend_EventLevel_NavObject_C", "ExecuteUbergraph_BP_Frontend_EventLevel_NavObject");

	Params::ABP_Frontend_EventLevel_NavObject_C_ExecuteUbergraph_BP_Frontend_EventLevel_NavObject_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
