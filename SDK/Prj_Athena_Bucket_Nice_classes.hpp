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

// 0x11 (0x951 - 0x940)
// BlueprintGeneratedClass Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C
class APrj_Athena_Bucket_Nice_C : public APrj_Athena_Bucket_Old_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Trail;                                             // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         TurnOffTrail;                                      // 0x950(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Prj_Athena_Bucket_Nice_C");
		return Clss;
	}

	void OnRep_TurnOffTrail();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ExecuteUbergraph_Prj_Athena_Bucket_Nice(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
