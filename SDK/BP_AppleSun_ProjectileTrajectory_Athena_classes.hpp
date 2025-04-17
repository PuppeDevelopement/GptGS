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

// 0xF (0x270 - 0x261)
// BlueprintGeneratedClass BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C
class ABP_AppleSun_ProjectileTrajectory_Athena_C : public ABP_ProjectileTrajectory_C
{
public:
	uint8                                        Pad_584E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AppleSun_ProjectileTrajectory_Athena_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
