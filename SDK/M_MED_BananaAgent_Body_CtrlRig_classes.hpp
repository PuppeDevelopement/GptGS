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

// 0x620 (0x960 - 0x340)
// ControlRigBlueprintGeneratedClass M_MED_BananaAgent_Body_CtrlRig.M_MED_BananaAgent_Body_CtrlRig_C
class UM_MED_BananaAgent_Body_CtrlRig_C : public UControlRig
{
public:
	struct FRigUnit_BeginExecution               BeginExecution;                                    // 0x340(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7100[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform;                          // 0x370(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0_0;                     // 0x3E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs;                                      // 0x420(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0_0_0_0;                        // 0x448(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7101[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_GetRelativeBoneTransform     GetRelativeBoneTransform_0;                        // 0x490(0x70)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionToEuler        MathQuaternionToEuler_0_0_0_0_0;                   // 0x500(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatRemap               MathFloatRemap_0_0_0_0_0_0_0;                      // 0x540(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathFloatAbs                 MathFloatAbs_0;                                    // 0x580(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms;                              // 0x5A8(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0;                       // 0x600(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0;                            // 0x640(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7102[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0;                     // 0x6A0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_1;                            // 0x6E0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7103[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_1;                     // 0x740(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_0;                          // 0x780(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7104[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0_0;                   // 0x7E0(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_1;                          // 0x820(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7105[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0_1;                   // 0x880(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRigUnit_ModifyBoneTransforms         ModifyBoneTransforms_0_1_0;                        // 0x8C0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_7106[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathQuaternionFromEuler      MathQuaternionFromEuler_1_0_0_0_0;                 // 0x920(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_BananaAgent_Body_CtrlRig_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
