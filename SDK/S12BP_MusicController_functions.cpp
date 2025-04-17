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


// Function S12BP_MusicController.S12BP_MusicController_C.GetTracksForRegistration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UBP_TimeSynthTrackComponent_C*>Tracks                                                           (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<class UBP_TimeSynthTrackComponent_C*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AS12BP_MusicController_C::GetTracksForRegistration(TArray<class UBP_TimeSynthTrackComponent_C*>* Tracks, TArray<class UBP_TimeSynthTrackComponent_C*>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("S12BP_MusicController_C", "GetTracksForRegistration");

	Params::AS12BP_MusicController_C_GetTracksForRegistration_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Tracks != nullptr)
		*Tracks = Parms.Tracks;

}


// Function S12BP_MusicController.S12BP_MusicController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AS12BP_MusicController_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("S12BP_MusicController_C", "ReceiveBeginPlay");

	Params::AS12BP_MusicController_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function S12BP_MusicController.S12BP_MusicController_C.ExecuteUbergraph_S12BP_MusicController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AS12BP_MusicController_C::ExecuteUbergraph_S12BP_MusicController(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("S12BP_MusicController_C", "ExecuteUbergraph_S12BP_MusicController");

	Params::AS12BP_MusicController_C_ExecuteUbergraph_S12BP_MusicController_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
