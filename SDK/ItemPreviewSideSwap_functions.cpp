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


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsErebus_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::LightControl(bool Active, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "LightControl");

	Params::AItemPreviewSideSwap_C_LightControl_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsErebus_ReturnValue = CallFunc_IsErebus_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsErebus_ReturnValue_1 = CallFunc_IsErebus_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::SwitchPCLighting(bool Visibility)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchPCLighting");

	Params::AItemPreviewSideSwap_C_SwitchPCLighting_Params Parms;

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::SwitchPCLighting_LOWDetail(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchPCLighting_LOWDetail");

	Params::AItemPreviewSideSwap_C_SwitchPCLighting_LOWDetail_Params Parms;

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::SwitchMobileLighting(bool Visibility, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "SwitchMobileLighting");

	Params::AItemPreviewSideSwap_C_SwitchMobileLighting_Params Parms;

	Parms.Visibility = Visibility;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveOutLeft__FinishedFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutLeft__FinishedFunc");

	Params::AItemPreviewSideSwap_C_MoveOutLeft__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveOutLeft__UpdateFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutLeft__UpdateFunc");

	Params::AItemPreviewSideSwap_C_MoveOutLeft__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveInLeft__FinishedFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInLeft__FinishedFunc");

	Params::AItemPreviewSideSwap_C_MoveInLeft__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveInLeft__UpdateFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInLeft__UpdateFunc");

	Params::AItemPreviewSideSwap_C_MoveInLeft__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveInRight__FinishedFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInRight__FinishedFunc");

	Params::AItemPreviewSideSwap_C_MoveInRight__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveInRight__UpdateFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveInRight__UpdateFunc");

	Params::AItemPreviewSideSwap_C_MoveInRight__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveOutRight__FinishedFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutRight__FinishedFunc");

	Params::AItemPreviewSideSwap_C_MoveOutRight__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::MoveOutRight__UpdateFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "MoveOutRight__UpdateFunc");

	Params::AItemPreviewSideSwap_C_MoveOutRight__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_0__FinishedFunc");

	Params::AItemPreviewSideSwap_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "Timeline_0__UpdateFunc");

	Params::AItemPreviewSideSwap_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "ReceiveBeginPlay");

	Params::AItemPreviewSideSwap_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     Options                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AItemPreviewSideSwap_C::OnReadyToSwap(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& Options)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnReadyToSwap");

	Params::AItemPreviewSideSwap_C_OnReadyToSwap_Params Parms;

	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.Options = Options;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortAccountItemDefinition*  PrimaryRequestedItem                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     TransitionOptions                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AItemPreviewSideSwap_C::OnNewSceneRequested(class UFortAccountItemDefinition* PrimaryRequestedItem, struct FSceneTransitionOptions& TransitionOptions)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "OnNewSceneRequested");

	Params::AItemPreviewSideSwap_C_OnNewSceneRequested_Params Parms;

	Parms.PrimaryRequestedItem = PrimaryRequestedItem;
	Parms.TransitionOptions = TransitionOptions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.SetZoom
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bZoomedIn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::SetZoom(bool bZoomedIn)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "SetZoom");

	Params::AItemPreviewSideSwap_C_SetZoom_Params Parms;

	Parms.bZoomedIn = bZoomedIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AItemPreviewSideSwap_C::UpdateSettings()
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "UpdateSettings");

	Params::AItemPreviewSideSwap_C_UpdateSettings_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_4                             (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_B_Execution_Happened_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem_1                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_Options                                             (ConstParm, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAccountItemDefinition*  K2Node_Event_PrimaryRequestedItem                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSceneTransitionOptions     K2Node_Event_TransitionOptions                                   (ConstParm, NoDestructor)
// bool                               Temp_bool_A_Execution_Happened_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bZoomedIn                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_5                             (IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::ExecuteUbergraph_ItemPreviewSideSwap(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable_1, bool CallFunc_BooleanAND_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem_1, const struct FSceneTransitionOptions& K2Node_Event_Options, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortAccountItemDefinition* K2Node_Event_PrimaryRequestedItem, const struct FSceneTransitionOptions& K2Node_Event_TransitionOptions, bool Temp_bool_A_Execution_Happened_Variable_1, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_Event_bZoomedIn, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_5)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "ExecuteUbergraph_ItemPreviewSideSwap");

	Params::AItemPreviewSideSwap_C_ExecuteUbergraph_ItemPreviewSideSwap_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_4 = CallFunc_MakeTransform_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_B_Execution_Happened_Variable = Temp_bool_B_Execution_Happened_Variable;
	Parms.Temp_bool_A_Execution_Happened_Variable = Temp_bool_A_Execution_Happened_Variable;
	Parms.Temp_bool_B_Execution_Happened_Variable_1 = Temp_bool_B_Execution_Happened_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_PrimaryRequestedItem_1 = K2Node_Event_PrimaryRequestedItem_1;
	Parms.K2Node_Event_Options = K2Node_Event_Options;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_PrimaryRequestedItem = K2Node_Event_PrimaryRequestedItem;
	Parms.K2Node_Event_TransitionOptions = K2Node_Event_TransitionOptions;
	Parms.Temp_bool_A_Execution_Happened_Variable_1 = Temp_bool_A_Execution_Happened_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_bZoomedIn = K2Node_Event_bZoomedIn;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_5 = CallFunc_MakeTransform_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_Show_Floor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemPreviewSideSwap_C::On_New_Item_Spawned__DelegateSignature(bool Should_Show_Floor)
{
	static auto Func = Class->GetFunction("ItemPreviewSideSwap_C", "On New Item Spawned__DelegateSignature");

	Params::AItemPreviewSideSwap_C_On_New_Item_Spawned__DelegateSignature_Params Parms;

	Parms.Should_Show_Floor = Should_Show_Floor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
