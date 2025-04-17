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


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.Animate POI Title
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        POI_Name                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPS12MainRoomPOITag_C::Animate_POI_Title(class FText POI_Name)
{
	static auto Func = Class->GetFunction("BPS12MainRoomPOITag_C", "Animate POI Title");

	Params::UBPS12MainRoomPOITag_C_Animate_POI_Title_Params Parms;

	Parms.POI_Name = POI_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPS12MainRoomPOITag_C::Construct()
{
	static auto Func = Class->GetFunction("BPS12MainRoomPOITag_C", "Construct");

	Params::UBPS12MainRoomPOITag_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.CollapseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPS12MainRoomPOITag_C::CollapseWidget()
{
	static auto Func = Class->GetFunction("BPS12MainRoomPOITag_C", "CollapseWidget");

	Params::UBPS12MainRoomPOITag_C_CollapseWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPS12MainRoomPOITag.BPS12MainRoomPOITag_C.ExecuteUbergraph_BPS12MainRoomPOITag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_POI_Name                                      ()

void UBPS12MainRoomPOITag_C::ExecuteUbergraph_BPS12MainRoomPOITag(int32 EntryPoint, class FText K2Node_CustomEvent_POI_Name)
{
	static auto Func = Class->GetFunction("BPS12MainRoomPOITag_C", "ExecuteUbergraph_BPS12MainRoomPOITag");

	Params::UBPS12MainRoomPOITag_C_ExecuteUbergraph_BPS12MainRoomPOITag_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_POI_Name = K2Node_CustomEvent_POI_Name;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
