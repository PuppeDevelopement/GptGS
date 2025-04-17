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


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.SetTechText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_SideMessaging_NewTech_C::SetTechText(const struct FGameplayTagContainer& NewParam, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_HasTag_ReturnValue_2, bool CallFunc_HasTag_ReturnValue_3, bool CallFunc_HasTag_ReturnValue_4, bool CallFunc_HasTag_ReturnValue_5, bool CallFunc_HasTag_ReturnValue_6)
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "SetTechText");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_SetTechText_Params Parms;

	Parms.NewParam = NewParam;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_HasTag_ReturnValue_2 = CallFunc_HasTag_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue_3 = CallFunc_HasTag_ReturnValue_3;
	Parms.CallFunc_HasTag_ReturnValue_4 = CallFunc_HasTag_ReturnValue_4;
	Parms.CallFunc_HasTag_ReturnValue_5 = CallFunc_HasTag_ReturnValue_5;
	Parms.CallFunc_HasTag_ReturnValue_6 = CallFunc_HasTag_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "Construct");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleItemSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*         NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_SideMessaging_NewTech_C::HandleItemSet(class UFortItemDefinition* NewItem)
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleItemSet");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_HandleItemSet_Params Parms;

	Parms.NewItem = NewItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleTrackShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::HandleTrackShown()
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleTrackShown");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_HandleTrackShown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.HandleDetailsShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassScreen_SideMessaging_NewTech_C::HandleDetailsShown()
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "HandleDetailsShown");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_HandleDetailsShown_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_SideMessaging_NewTech_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "PreConstruct");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen_SideMessaging_NewTech.BattlePassScreen_SideMessaging_NewTech_C.ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         K2Node_CustomEvent_NewItem                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_SideMessaging_NewTech_C::ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& Temp_struct_Variable_2, bool Temp_bool_Variable_2, const struct FVector2D& Temp_struct_Variable_3, const struct FVector2D& Temp_struct_Variable_4, const struct FVector2D& Temp_struct_Variable_5, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortItemDefinition* K2Node_CustomEvent_NewItem, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& K2Node_Select_Default, const struct FMargin& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2, const struct FVector2D& K2Node_Select_Default_3)
{
	static auto Func = Class->GetFunction("BattlePassScreen_SideMessaging_NewTech_C", "ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech");

	Params::UBattlePassScreen_SideMessaging_NewTech_C_ExecuteUbergraph_BattlePassScreen_SideMessaging_NewTech_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_NewItem = K2Node_CustomEvent_NewItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
