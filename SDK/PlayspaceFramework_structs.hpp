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

// 0x44 (0x50 - 0xC)
// ScriptStruct PlayspaceFramework.PlayspaceUser
struct FPlayspaceUser : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      UserId;                                            // 0x10(0x28)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayspace*                            LeafPlayspace;                                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerState*                          PlayerStateCached;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AController*                           ControllerCached;                                  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x128 - 0x108)
// ScriptStruct PlayspaceFramework.PlayspaceUserList
struct FPlayspaceUserList : public FFastArraySerializer
{
public:
	TArray<struct FPlayspaceUser>                PlayspaceUsers;                                    // 0x108(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsInitialized;                                    // 0x118(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9D4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayspace*                            Playspace;                                         // 0x120(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
