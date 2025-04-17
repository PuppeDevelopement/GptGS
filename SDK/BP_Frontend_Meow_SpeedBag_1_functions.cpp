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


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.CanCommitNavigationRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Frontend_Meow_SpeedBag_1_C::CanCommitNavigationRequest()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "CanCommitNavigationRequest");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_CanCommitNavigationRequest_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::Bobblin___FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "Bobblin'__FinishedFunc");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::Bobblin___UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "Bobblin'__UpdateFunc");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__ResetWobbleStrength__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::Bobblin___ResetWobbleStrength__EventFunc()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "Bobblin'__ResetWobbleStrength__EventFunc");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___ResetWobbleStrength__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Bobblin'__Retrigger__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::Bobblin___Retrigger__EventFunc()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "Bobblin'__Retrigger__EventFunc");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_Bobblin___Retrigger__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::Commit_OnSpecialInteraction()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "Commit_OnSpecialInteraction");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_Commit_OnSpecialInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_Meow_SpeedBag_1_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "HandleObjectSpecialInteraction");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_HandleObjectSpecialInteraction_Params Parms;

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Frontend_Meow_SpeedBag_1_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "ReceiveBeginPlay");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_Meow_SpeedBag_1.BP_Frontend_Meow_SpeedBag_1_C.ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Frontend_Meow_SpeedBag_1_C::ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Frontend_Meow_SpeedBag_1_C", "ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1");

	Params::ABP_Frontend_Meow_SpeedBag_1_C_ExecuteUbergraph_BP_Frontend_Meow_SpeedBag_1_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
