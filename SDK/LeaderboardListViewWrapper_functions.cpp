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


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Bar Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::Set_Bar_Color(const struct FLinearColor& Color)
{
	static auto Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Bar Color");

	Params::ULeaderboardListViewWrapper_C_Set_Bar_Color_Params Parms;

	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.Set Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      EventId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      EventWindowId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::Set_Event(const class FString& EventId, const class FString& EventWindowId)
{
	static auto Func = Class->GetFunction("LeaderboardListViewWrapper_C", "Set Event");

	Params::ULeaderboardListViewWrapper_C_Set_Event_Params Parms;

	Parms.EventId = EventId;
	Parms.EventWindowId = EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LeaderboardListViewWrapper.LeaderboardListViewWrapper_C.ExecuteUbergraph_LeaderboardListViewWrapper
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventId                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EventWindowId                                 (ZeroConstructor, HasGetValueTypeHash)

void ULeaderboardListViewWrapper_C::ExecuteUbergraph_LeaderboardListViewWrapper(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_Color, const class FString& K2Node_CustomEvent_EventId, const class FString& K2Node_CustomEvent_EventWindowId)
{
	static auto Func = Class->GetFunction("LeaderboardListViewWrapper_C", "ExecuteUbergraph_LeaderboardListViewWrapper");

	Params::ULeaderboardListViewWrapper_C_ExecuteUbergraph_LeaderboardListViewWrapper_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_EventId = K2Node_CustomEvent_EventId;
	Parms.K2Node_CustomEvent_EventWindowId = K2Node_CustomEvent_EventWindowId;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
