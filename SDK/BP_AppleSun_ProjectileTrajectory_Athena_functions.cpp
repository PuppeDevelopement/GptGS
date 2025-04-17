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


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveBeginPlay");

	Params::ABP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ReceiveTick");

	Params::ABP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static auto Func = Class->GetFunction("BP_AppleSun_ProjectileTrajectory_Athena_C", "ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena");

	Params::ABP_AppleSun_ProjectileTrajectory_Athena_C_ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
