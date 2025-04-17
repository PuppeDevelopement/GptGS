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


// Function ItemPreviewViewport.ItemPreviewViewport_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemPreviewViewport_C::Construct()
{
	static auto Func = Class->GetFunction("ItemPreviewViewport_C", "Construct");

	Params::UItemPreviewViewport_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewViewport.ItemPreviewViewport_C.ExecuteUbergraph_ItemPreviewViewport
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPreviewViewport_C::ExecuteUbergraph_ItemPreviewViewport(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ItemPreviewViewport_C", "ExecuteUbergraph_ItemPreviewViewport");

	Params::UItemPreviewViewport_C_ExecuteUbergraph_ItemPreviewViewport_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
