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


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuiltInEmotePopUP_C::RequestFadeIn()
{
	static auto Func = Class->GetFunction("BuiltInEmotePopUP_C", "RequestFadeIn");

	Params::UBuiltInEmotePopUP_C_RequestFadeIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBuiltInEmotePopUP_C::RequuestFadeOut()
{
	static auto Func = Class->GetFunction("BuiltInEmotePopUP_C", "RequuestFadeOut");

	Params::UBuiltInEmotePopUP_C_RequuestFadeOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuiltInEmotePopUP_C::ExecuteUbergraph_BuiltInEmotePopUP(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BuiltInEmotePopUP_C", "ExecuteUbergraph_BuiltInEmotePopUP");

	Params::UBuiltInEmotePopUP_C_ExecuteUbergraph_BuiltInEmotePopUP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
