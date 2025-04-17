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


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_HeldObject_Generic_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_HeldObject_Generic_C", "ReceiveBeginPlay");

	Params::AB_HeldObject_Generic_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ZeroConstructor, ReferenceParm)
// TArray<class AActor*>              CallFunc_FilterArray_FilteredArray                               (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_HeldObject_Parent_C*      K2Node_DynamicCast_AsB_Held_Object_Parent                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_HeldObject_Generic_C::ExecuteUbergraph_B_HeldObject_Generic(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_FilterArray_FilteredArray, class AActor* CallFunc_Array_Get_Item, class AB_HeldObject_Parent_C* K2Node_DynamicCast_AsB_Held_Object_Parent, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static auto Func = Class->GetFunction("B_HeldObject_Generic_C", "ExecuteUbergraph_B_HeldObject_Generic");

	Params::AB_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_FilterArray_FilteredArray = CallFunc_FilterArray_FilteredArray;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsB_Held_Object_Parent = K2Node_DynamicCast_AsB_Held_Object_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
