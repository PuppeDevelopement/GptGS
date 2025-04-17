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


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "Construct");

	Params::UPlayerSurveyPanel_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OutroDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::OutroDone()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "OutroDone");

	Params::UPlayerSurveyPanel_C_OutroDone_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::StartIntro()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "StartIntro");

	Params::UPlayerSurveyPanel_C_StartIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.StartIntro_BP
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::StartIntro_BP()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "StartIntro_BP");

	Params::UPlayerSurveyPanel_C_StartIntro_BP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.OnPlayerSurveyEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerSurveyPanel_C::OnPlayerSurveyEnded()
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "OnPlayerSurveyEnded");

	Params::UPlayerSurveyPanel_C_OnPlayerSurveyEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyPanel.PlayerSurveyPanel_C.ExecuteUbergraph_PlayerSurveyPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyPanel_C::ExecuteUbergraph_PlayerSurveyPanel(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float Temp_float_Variable, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PlayerSurveyPanel_C", "ExecuteUbergraph_PlayerSurveyPanel");

	Params::UPlayerSurveyPanel_C_ExecuteUbergraph_PlayerSurveyPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
