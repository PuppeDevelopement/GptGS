#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3898 - 0x3888)
// BlueprintGeneratedClass BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
class ABP_PlayerPawn_Athena_Phoebe_C : public APlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3888(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  AIEvaluator_CharacterLaunchedKeyName;              // 0x3890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerPawn_Athena_Phoebe_C");
		return Clss;
	}

	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, const struct FVector& K2Node_Event_LaunchVelocity, bool K2Node_Event_bXYOverride, bool K2Node_Event_bZOverride, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
