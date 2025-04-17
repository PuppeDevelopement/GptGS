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

// 0xF (0xB90 - 0xB81)
// BlueprintGeneratedClass B_DangerGrape_Athena_Weap.B_DangerGrape_Athena_Weap_C
class AB_DangerGrape_Athena_Weap_C : public AB_ConsumableSmall_Athena_C
{
public:
	uint8                                        Pad_59FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  SM_PG_Bot_Grenade;                                 // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_DangerGrape_Athena_Weap_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
