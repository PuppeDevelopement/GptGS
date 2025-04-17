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

// 0x550 (0x7C0 - 0x270)
// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
class UFlopper_Gadget_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x278(0x18)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x290(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2B0(0x20)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_1;                             // 0x2D0(0x260)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail;                               // 0x530(0x260)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x790(0x30)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Flopper_Gadget_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
