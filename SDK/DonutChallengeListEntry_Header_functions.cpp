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


// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.BPUpdateTitle
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              InWeek                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDonutChallengeListEntry_Header_C::BPUpdateTitle(int32 InWeek)
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_Header_C", "BPUpdateTitle");

	Params::UDonutChallengeListEntry_Header_C_BPUpdateTitle_Params Parms;

	Parms.InWeek = InWeek;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DonutChallengeListEntry_Header.DonutChallengeListEntry_Header_C.ExecuteUbergraph_DonutChallengeListEntry_Header
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InWeek                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UDonutChallengeListEntry_Header_C::ExecuteUbergraph_DonutChallengeListEntry_Header(int32 EntryPoint, int32 K2Node_Event_InWeek, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("DonutChallengeListEntry_Header_C", "ExecuteUbergraph_DonutChallengeListEntry_Header");

	Params::UDonutChallengeListEntry_Header_C_ExecuteUbergraph_DonutChallengeListEntry_Header_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InWeek = K2Node_Event_InWeek;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
