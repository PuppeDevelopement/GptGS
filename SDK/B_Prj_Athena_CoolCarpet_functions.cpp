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


// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Prj_Athena_CoolCarpet_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ReceiveBeginPlay");

	Params::AB_Prj_Athena_CoolCarpet_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C.ExecuteUbergraph_B_Prj_Athena_CoolCarpet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_CoolCarpet_C::ExecuteUbergraph_B_Prj_Athena_CoolCarpet(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_Prj_Athena_CoolCarpet_C", "ExecuteUbergraph_B_Prj_Athena_CoolCarpet");

	Params::AB_Prj_Athena_CoolCarpet_C_ExecuteUbergraph_B_Prj_Athena_CoolCarpet_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
