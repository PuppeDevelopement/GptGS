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

// 0x10 (0x468 - 0x458)
// BlueprintGeneratedClass SoldierMannequin_Male.SoldierMannequin_Male_C
class ASoldierMannequin_Male_C : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       MannequinAudio;                                    // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoldierMannequin_Male_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_SoldierMannequin_Male(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
