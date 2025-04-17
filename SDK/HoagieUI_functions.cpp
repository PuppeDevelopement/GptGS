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


// Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortHoagieVehicleReticle::OnSetupComplete()
{
	static auto Func = Class->GetFunction("FortHoagieVehicleReticle", "OnSetupComplete");

	Params::UFortHoagieVehicleReticle_OnSetupComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
