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

// 0xCFC (0xF6C - 0x270)
// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x278(0x70)()
	uint8                                        Pad_5BD2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x2F0(0x5A0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1;             // 0x890(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1;             // 0x8B0(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x8D0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x8F8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x920(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x998(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x9C8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xA40(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xA70(0xB0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0xB20(0x108)()
	uint8                                        Pad_5BD3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0xC30(0x260)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xE90(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xED8(0x30)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF08(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF28(0x20)()
	struct FVector                               GripOffset;                                        // 0xF48(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OneHandGrip;                                       // 0xF54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Trail_Alpha;                                       // 0xF58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Trail_RelaxScale;                                  // 0xF5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              GripRotation;                                      // 0xF60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
