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


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      TournamentSeriesId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ULeaderboardTab_C*           K2Node_DynamicCast_AsLeaderboard_Tab                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventLeaderboardScreen_C::Init(const class FString& EventWindowId, const class FString& TournamentSeriesId, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Init");

	Params::UEventLeaderboardScreen_C_Init_Params Parms;

	Parms.EventWindowId = EventWindowId;
	Parms.TournamentSeriesId = TournamentSeriesId;
	Parms.K2Node_DynamicCast_AsLeaderboard_Tab = K2Node_DynamicCast_AsLeaderboard_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  TournamentDisplayInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UEventLeaderboardScreen_C::EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventColorize");

	Params::UEventLeaderboardScreen_C_EventColorize_Params Parms;

	Parms.TournamentDisplayInfo = TournamentDisplayInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventIntro()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventIntro");

	Params::UEventLeaderboardScreen_C_EventIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortEventLeaderboardEntryData*EntryData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::OnLeaderboardEntrySelected(class UFortEventLeaderboardEntryData* EntryData)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "OnLeaderboardEntrySelected");

	Params::UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params Parms;

	Parms.EntryData = EntryData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::Event_Leaderboard_Screen_On_Activated()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Event Leaderboard Screen On Activated");

	Params::UEventLeaderboardScreen_C_Event_Leaderboard_Screen_On_Activated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::Construct()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Construct");

	Params::UEventLeaderboardScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::ShowMyStats(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "ShowMyStats");

	Params::UEventLeaderboardScreen_C_ShowMyStats_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UEventLeaderboardScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Item Double-Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventLeaderboardScreen_C::Item_Double_Clicked(class UObject* Item)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "Item Double-Clicked");

	Params::UEventLeaderboardScreen_C_Item_Double_Clicked_Params Parms;

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaderboardTab_C*           K2Node_DynamicCast_AsLeaderboard_Tab                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_TournamentDisplayInfo                         ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortEventLeaderboardEntryData*K2Node_Event_EntryData                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*CallFunc_GetMyLeaderboardEntry_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UListView*                   CallFunc_GetListView_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULeaderboardListViewWrapper_C*K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortEventLeaderboardEntryData*K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventLeaderboardScreen_C::ExecuteUbergraph_EventLeaderboardScreen(int32 EntryPoint, class ULeaderboardTab_C* K2Node_DynamicCast_AsLeaderboard_Tab, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortEventLeaderboardEntryData* K2Node_Event_EntryData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UCommonButton* K2Node_CustomEvent_Button, class UFortEventLeaderboardEntryData* CallFunc_GetMyLeaderboardEntry_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UListView* CallFunc_GetListView_ReturnValue, class ULeaderboardListViewWrapper_C* K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Item, class UFortEventLeaderboardEntryData* K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "ExecuteUbergraph_EventLeaderboardScreen");

	Params::UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsLeaderboard_Tab = K2Node_DynamicCast_AsLeaderboard_Tab;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_CustomEvent_TournamentDisplayInfo = K2Node_CustomEvent_TournamentDisplayInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EntryData = K2Node_Event_EntryData;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetMyLeaderboardEntry_ReturnValue = CallFunc_GetMyLeaderboardEntry_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetListView_ReturnValue = CallFunc_GetListView_ReturnValue;
	Parms.K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper = K2Node_DynamicCast_AsLeaderboard_List_View_Wrapper;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data = K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventViewLiveGames__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventViewLiveGames__DelegateSignature");

	Params::UEventLeaderboardScreen_C_EventViewLiveGames__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventLeaderboardScreen_C::EventCloseButton__DelegateSignature()
{
	static auto Func = Class->GetFunction("EventLeaderboardScreen_C", "EventCloseButton__DelegateSignature");

	Params::UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
