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


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_Matchmaking_SpecialEventButton_C::SetupLTM()
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "SetupLTM");

	Params::UAthena_Matchmaking_SpecialEventButton_C_SetupLTM_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UAthena_Matchmaking_SpecialEventButton_C::SetLTMSplashArt(TSoftObjectPtr<class UTexture2D> NewParam)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "SetLTMSplashArt");

	Params::UAthena_Matchmaking_SpecialEventButton_C_SetLTMSplashArt_Params Parms;

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_SpecialEventButton_C::FirstTime_NewBang(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "FirstTime_NewBang");

	Params::UAthena_Matchmaking_SpecialEventButton_C_FirstTime_NewBang_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthena_Matchmaking_SpecialEventButton_C::PlayFirstTimeBang()
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "PlayFirstTimeBang");

	Params::UAthena_Matchmaking_SpecialEventButton_C_PlayFirstTimeBang_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthena_Matchmaking_SpecialEventButton_C::Construct()
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "Construct");

	Params::UAthena_Matchmaking_SpecialEventButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthena_Matchmaking_SpecialEventButton_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "PreConstruct");

	Params::UAthena_Matchmaking_SpecialEventButton_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthena_Matchmaking_GameModeButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Game_Mode_Button         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthena_Matchmaking_SpecialEventButton_C::ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UAthena_Matchmaking_GameModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Game_Mode_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("Athena_Matchmaking_SpecialEventButton_C", "ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton");

	Params::UAthena_Matchmaking_SpecialEventButton_C_ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Game_Mode_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Game_Mode_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
