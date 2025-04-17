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

// 0x2 (0x32 - 0x30)
// BlueprintGeneratedClass AnimNotify_OverrideVisibilityBasedAnimTick.AnimNotify_OverrideVisibilityBasedAnimTick_C
class UAnimNotify_OverrideVisibilityBasedAnimTick_C : public UAnimNotifyState
{
public:
	enum class EVisibilityBasedAnimTickOption    OnBeginTickSetting;                                // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVisibilityBasedAnimTickOption    OnEndTickSetting;                                  // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_OverrideVisibilityBasedAnimTick_C");
		return Clss;
	}

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerMannequin* K2Node_DynamicCast_AsFort_Player_Mannequin, bool K2Node_DynamicCast_bSuccess, TArray<class USkeletalMeshComponent*>& CallFunc_GetAllPartSkeletalMeshComponents_SkeletalMeshComponents, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerMannequin* K2Node_DynamicCast_AsFort_Player_Mannequin, bool K2Node_DynamicCast_bSuccess, TArray<class USkeletalMeshComponent*>& CallFunc_GetAllPartSkeletalMeshComponents_SkeletalMeshComponents, int32 Temp_int_Loop_Counter_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
