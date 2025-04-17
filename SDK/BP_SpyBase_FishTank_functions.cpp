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


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpyBase_FishTank_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("BP_SpyBase_FishTank_C", "UserConstructionScript");

	Params::ABP_SpyBase_FishTank_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SpyBase_FishTank_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_SpyBase_FishTank_C", "ReceiveBeginPlay");

	Params::ABP_SpyBase_FishTank_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpyBase_FishTank.BP_SpyBase_FishTank_C.ExecuteUbergraph_BP_SpyBase_FishTank
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompletedQuest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCompletedQuest_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SpyBase_FishTank_C::ExecuteUbergraph_BP_SpyBase_FishTank(int32 EntryPoint, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue_1, bool CallFunc_HasCompletedQuest_ReturnValue_2)
{
	static auto Func = Class->GetFunction("BP_SpyBase_FishTank_C", "ExecuteUbergraph_BP_SpyBase_FishTank");

	Params::ABP_SpyBase_FishTank_C_ExecuteUbergraph_BP_SpyBase_FishTank_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue = CallFunc_HasCompletedQuest_ReturnValue;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_1 = CallFunc_HasCompletedQuest_ReturnValue_1;
	Parms.CallFunc_HasCompletedQuest_ReturnValue_2 = CallFunc_HasCompletedQuest_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
