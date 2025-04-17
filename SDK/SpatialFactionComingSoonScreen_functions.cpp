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


// Function SpatialFactionComingSoonScreen.SpatialFactionComingSoonScreen_C.OnActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFactionComingSoonScreen_C::OnActivated()
{
	static auto Func = Class->GetFunction("SpatialFactionComingSoonScreen_C", "OnActivated");

	Params::USpatialFactionComingSoonScreen_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFactionComingSoonScreen.SpatialFactionComingSoonScreen_C.ExecuteUbergraph_SpatialFactionComingSoonScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFactionComingSoonScreen_C::ExecuteUbergraph_SpatialFactionComingSoonScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("SpatialFactionComingSoonScreen_C", "ExecuteUbergraph_SpatialFactionComingSoonScreen");

	Params::USpatialFactionComingSoonScreen_C_ExecuteUbergraph_SpatialFactionComingSoonScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
