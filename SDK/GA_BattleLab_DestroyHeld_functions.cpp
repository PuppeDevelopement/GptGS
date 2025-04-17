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


// Function GA_BattleLab_DestroyHeld.GA_BattleLab_DestroyHeld_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_BattleLab_DestroyHeld_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_BattleLab_DestroyHeld_C", "K2_ActivateAbility");

	Params::UGA_BattleLab_DestroyHeld_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BattleLab_DestroyHeld.GA_BattleLab_DestroyHeld_C.ExecuteUbergraph_GA_BattleLab_DestroyHeld
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABLGA_BattleLab_Parent_C*    K2Node_DynamicCast_AsBLGA_Battle_Lab_Parent                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BattleLab_DestroyHeld_C::ExecuteUbergraph_GA_BattleLab_DestroyHeld(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, class ABLGA_BattleLab_Parent_C* K2Node_DynamicCast_AsBLGA_Battle_Lab_Parent, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("GA_BattleLab_DestroyHeld_C", "ExecuteUbergraph_GA_BattleLab_DestroyHeld");

	Params::UGA_BattleLab_DestroyHeld_C_ExecuteUbergraph_GA_BattleLab_DestroyHeld_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue = CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBLGA_Battle_Lab_Parent = K2Node_DynamicCast_AsBLGA_Battle_Lab_Parent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
