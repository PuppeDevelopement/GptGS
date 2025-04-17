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

// 0x20 (0x50 - 0x30)
// Class AmbientAudio.AmbientAudioDataAsset
class UAmbientAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FAmbientAudioLoop>             LoopingSounds;                                     // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FAmbientAudioOneShot>          OneShotSounds;                                     // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientAudioDataAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AmbientAudio.AmbientAudioStatics
class UAmbientAudioStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientAudioStatics");
		return Clss;
	}

	void RemoveAmbientGameplayTag(class UObject* WorldContextObject, struct FGameplayTag& GameplayTag);
	void RemoveAmbientEntry(class UObject* WorldContextObject, class FName AmbientName);
	void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundBase* Sound, const struct FVector& Location);
	class UAudioComponent* CreateAudioComponent(class UObject* WorldContextObject, class USoundBase* Sound);
	void AddAmbientGameplayTag(class UObject* WorldContextObject, struct FGameplayTag& GameplayTag);
	void AddAmbientEntry(class UObject* WorldContextObject, class FName AmbientName, class UAmbientAudioDataAsset* Asset, int32 Priority);
};

// 0x10 (0x260 - 0x250)
// Class AmbientAudio.AmbientVolume
class AAmbientVolume : public AVolume
{
public:
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0x250(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Priority;                                          // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x25C(0x1)(Edit, BlueprintVisible, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_198B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientVolume");
		return Clss;
	}

	void SetPriority(int32 NewPriority);
	void SetEnabled(bool bNewEnabled);
	void SetAmbientAsset(class UAmbientAudioDataAsset* NewAmbientAsset);
	void OnRep_bEnabled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
