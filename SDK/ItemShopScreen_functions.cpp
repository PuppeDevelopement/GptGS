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


// Function ItemShopScreen.ItemShopScreen_C.OnSectionsEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmpty                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopScreen_C::OnSectionsEstablished(bool bEmpty)
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "OnSectionsEstablished");

	Params::UItemShopScreen_C_OnSectionsEstablished_Params Parms;

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.OnEstablishingSections
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemShopScreen_C::OnEstablishingSections()
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "OnEstablishingSections");

	Params::UItemShopScreen_C_OnEstablishingSections_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.BPSetupForDonutSequence
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEventEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopScreen_C::BPSetupForDonutSequence(bool bEventEnabled)
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "BPSetupForDonutSequence");

	Params::UItemShopScreen_C_BPSetupForDonutSequence_Params Parms;

	Parms.bEventEnabled = bEventEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.BPPlayDonutAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemShopScreen_C::BPPlayDonutAnimation()
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "BPPlayDonutAnimation");

	Params::UItemShopScreen_C_BPPlayDonutAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShopScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "Construct");

	Params::UItemShopScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.PostDonutDrop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemShopScreen_C::PostDonutDrop()
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "PostDonutDrop");

	Params::UItemShopScreen_C_PostDonutDrop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.ExecuteUbergraph_ItemShopScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bEmpty                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEventEnabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopScreen_C::ExecuteUbergraph_ItemShopScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bEmpty, bool Temp_bool_Variable_2, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bEventEnabled, enum class ESlateVisibility K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "ExecuteUbergraph_ItemShopScreen");

	Params::UItemShopScreen_C_ExecuteUbergraph_ItemShopScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bEmpty = K2Node_Event_bEmpty;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bEventEnabled = K2Node_Event_bEventEnabled;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
