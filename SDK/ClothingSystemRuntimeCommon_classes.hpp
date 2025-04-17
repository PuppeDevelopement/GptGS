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

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothConfigCommon
class UClothConfigCommon : public UClothConfigBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothConfigCommon");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothSharedConfigCommon");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
class UClothingAssetCustomData : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetCustomData");
		return Clss;
	}

};

// 0x1A8 (0x1F0 - 0x48)
// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                         PhysicsAsset;                                      // 0x48(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UClothConfigBase*>   ClothConfigs;                                      // 0x50(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClothConfigBase*                      ClothSharedSimConfig;                              // 0xA0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                      ClothSimConfig;                                    // 0xA8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClothConfigBase*                      ChaosClothSimConfig;                               // 0xB0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClothLODDataCommon_Legacy*>    ClothLODData;                                      // 0xB8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FClothLODDataCommon>           LODData;                                           // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                LodMap;                                            // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          UsedBoneNames;                                     // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                UsedBoneIndices;                                   // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReferenceBoneIndex;                                // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E69[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClothingAssetCustomData*              CustomData;                                        // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig_Legacy                   ClothConfig;                                       // 0x118(0xD4)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothingAssetCommon");
		return Clss;
	}

};

// 0x160 (0x188 - 0x28)
// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
class UClothLODDataCommon_Legacy : public UObject
{
public:
	class UClothPhysicalMeshDataBase_Legacy*     PhysicalMeshData;                                  // 0x28(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothPhysicalMeshData                ClothPhysicalMeshData;                             // 0x30(0xF8)(NativeAccessSpecifierPublic)
	struct FClothCollisionData                   CollisionData;                                     // 0x128(0x40)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ClothLODDataCommon_Legacy");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
