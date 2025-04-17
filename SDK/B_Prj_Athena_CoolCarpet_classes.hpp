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

// 0x8 (0x920 - 0x918)
// BlueprintGeneratedClass B_Prj_Athena_CoolCarpet.B_Prj_Athena_CoolCarpet_C
class AB_Prj_Athena_CoolCarpet_C : public AB_Prj_Athena_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_CoolCarpet_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_Athena_CoolCarpet(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
