#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AmbientAudio.AmbientProxy
struct FAmbientProxy
{
public:
	uint8                                        Pad_198C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AmbientAudio.AmbientAudioBase
struct FAmbientAudioBase
{
public:
	TSoftObjectPtr<class USoundBase>             Sound;                                             // 0x0(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     Requirements;                                      // 0x28(0x48)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x80 - 0x70)
// ScriptStruct AmbientAudio.AmbientAudioOneShot
struct FAmbientAudioOneShot : public FAmbientAudioBase
{
public:
	struct FVector2D                             RetriggerTimeRange;                                // 0x70(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             TriggerDistanceRange;                              // 0x78(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct AmbientAudio.AmbientAudioLoop
struct FAmbientAudioLoop : public FAmbientAudioBase
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
