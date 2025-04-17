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


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverBegin
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPS12MainRoomInteractionIndicator_C::OnObjectHoverBegin()
{
	static auto Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "OnObjectHoverBegin");

	Params::UBPS12MainRoomInteractionIndicator_C_OnObjectHoverBegin_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.OnObjectHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBPS12MainRoomInteractionIndicator_C::OnObjectHoverEnd()
{
	static auto Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "OnObjectHoverEnd");

	Params::UBPS12MainRoomInteractionIndicator_C_OnObjectHoverEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomInteractionIndicator.BPS12MainRoomInteractionIndicator_C.ExecuteUbergraph_BPS12MainRoomInteractionIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPS12MainRoomInteractionIndicator_C::ExecuteUbergraph_BPS12MainRoomInteractionIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("BPS12MainRoomInteractionIndicator_C", "ExecuteUbergraph_BPS12MainRoomInteractionIndicator");

	Params::UBPS12MainRoomInteractionIndicator_C_ExecuteUbergraph_BPS12MainRoomInteractionIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
