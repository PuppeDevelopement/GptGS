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


// Function Donut_ComicBubble.Donut_ComicBubble_C.StartExistingDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::StartExistingDialogue()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "StartExistingDialogue");

	Params::UDonut_ComicBubble_C_StartExistingDialogue_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.SetNewDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()

void UDonut_ComicBubble_C::SetNewDialogue(class FText NewText, float DisplayTime, class FText CallFunc_TextToUpper_ReturnValue)
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "SetNewDialogue");

	Params::UDonut_ComicBubble_C_SetNewDialogue_Params Parms;

	Parms.NewText = NewText;
	Parms.DisplayTime = DisplayTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.IntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::IntroFinished()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "IntroFinished");

	Params::UDonut_ComicBubble_C_IntroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::Construct()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "Construct");

	Params::UDonut_ComicBubble_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.DialogueTimeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::DialogueTimeOut()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "DialogueTimeOut");

	Params::UDonut_ComicBubble_C_DialogueTimeOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.OnDialogueFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::OnDialogueFinished()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "OnDialogueFinished");

	Params::UDonut_ComicBubble_C_OnDialogueFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.StartDialogueSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDonut_ComicBubble_C::StartDialogueSequence()
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "StartDialogueSequence");

	Params::UDonut_ComicBubble_C_StartDialogueSequence_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDonut_ComicBubble_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "PreConstruct");

	Params::UDonut_ComicBubble_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Donut_ComicBubble.Donut_ComicBubble_C.ExecuteUbergraph_Donut_ComicBubble
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonut_ComicBubble_C::ExecuteUbergraph_Donut_ComicBubble(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInterface* K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInterface* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("Donut_ComicBubble_C", "ExecuteUbergraph_Donut_ComicBubble");

	Params::UDonut_ComicBubble_C_ExecuteUbergraph_Donut_ComicBubble_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
