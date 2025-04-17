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

// 0x8 (0xBD8 - 0xBD0)
// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowman_Instant.GA_Athena_Apply_SneakySnowman_Instant_C
class UGA_Athena_Apply_SneakySnowman_Instant_C : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Apply_SneakySnowman_Instant_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Instant(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
