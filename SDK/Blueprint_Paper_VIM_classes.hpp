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

// 0x508 (0x858 - 0x350)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_3;                        // 0x358(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_2;                        // 0x480(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_1;                        // 0x5A8(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone;                          // 0x6D0(0x128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x7F8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x818(0x30)()
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose;                         // 0x848(0x10)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Blueprint_Paper_VIM_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
