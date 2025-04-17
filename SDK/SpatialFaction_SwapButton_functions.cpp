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


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("SpatialFaction_SwapButton_C", "BP_OnHovered");

	Params::USpatialFaction_SwapButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("SpatialFaction_SwapButton_C", "BP_OnUnhovered");

	Params::USpatialFaction_SwapButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.Go Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::Go_Up()
{
	static auto Func = Class->GetFunction("SpatialFaction_SwapButton_C", "Go Up");

	Params::USpatialFaction_SwapButton_C_Go_Up_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.Go Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpatialFaction_SwapButton_C::Go_Down()
{
	static auto Func = Class->GetFunction("SpatialFaction_SwapButton_C", "Go Down");

	Params::USpatialFaction_SwapButton_C_Go_Down_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SpatialFaction_SwapButton.SpatialFaction_SwapButton_C.ExecuteUbergraph_SpatialFaction_SwapButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USpatialFaction_SwapButton_C::ExecuteUbergraph_SpatialFaction_SwapButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static auto Func = Class->GetFunction("SpatialFaction_SwapButton_C", "ExecuteUbergraph_SpatialFaction_SwapButton");

	Params::USpatialFaction_SwapButton_C_ExecuteUbergraph_SpatialFaction_SwapButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
