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

// 0x8 (0x460 - 0x458)
// BlueprintGeneratedClass BP12_PaperDoll_Mannequin.BP12_PaperDoll_Mannequin_C
class ABP12_PaperDoll_Mannequin_C : public AFortPlayerMannequin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP12_PaperDoll_Mannequin_C");
		return Clss;
	}

	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& OldVariantTag, const struct FGameplayTag& NewVariantTag);
	void OnPartChanged(class UCustomCharacterPart* OldPart, class UCustomCharacterPart* NewPart, enum class EFortCustomPartType PartType);
	void ExecuteUbergraph_BP12_PaperDoll_Mannequin(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_OldVariantTag, const struct FGameplayTag& K2Node_Event_NewVariantTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_1, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_2, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_3, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue_4, class UCustomCharacterPart* K2Node_Event_OldPart, class UCustomCharacterPart* K2Node_Event_NewPart, enum class EFortCustomPartType K2Node_Event_PartType, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
