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

// 0x8 (0xC08 - 0xC00)
// BlueprintGeneratedClass GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C
class UGA_HeldObject_Throw_Component_TnTina_C : public UGA_HeldObject_Throw_Component_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC00(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_HeldObject_Throw_Component_TnTina_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
