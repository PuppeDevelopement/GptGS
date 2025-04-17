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

// 0x70 (0x318 - 0x2A8)
// Class MeshNetwork.MeshBeaconClient
class AMeshBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_17D0[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConnectedToRoot;                                  // 0x2E8(0x1)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             MeshPingTime;                                      // 0x2F0(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FString>                        ParentIds;                                         // 0x2F8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D2[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconClient");
		return Clss;
	}

	void ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility);
	void OnRep_ParentIds();
	void OnRep_MeshPingTime();
	void OnRep_ConnectedToRoot();
};

// 0x8 (0x308 - 0x300)
// Class MeshNetwork.MeshBeaconHost
class AMeshBeaconHost : public AOnlineBeaconHost
{
public:
	int32                                        MaxConnections;                                    // 0x300(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconHost");
		return Clss;
	}

};

// 0x18 (0x258 - 0x240)
// Class MeshNetwork.MeshBeaconHostObject
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	uint8                                        Pad_17D9[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshBeaconHostObject");
		return Clss;
	}

};

// 0x0 (0x1A90 - 0x1A90)
// Class MeshNetwork.MeshConnection
class UMeshConnection : public UIpConnection
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshConnection");
		return Clss;
	}

};

// 0x8 (0x768 - 0x760)
// Class MeshNetwork.MeshNetDriver
class UMeshNetDriver : public UIpNetDriver
{
public:
	uint8                                        Pad_17DC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetDriver");
		return Clss;
	}

};

// 0x150 (0x200 - 0xB0)
// Class MeshNetwork.MeshNetworkComponent
class UMeshNetworkComponent : public UActorComponent
{
public:
	enum class EMeshNetworkRelevancy             MeshRelevancy;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, double>                    AggregationTimeouts;                               // 0xB8(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class FName>                            NoAggregationFunctions;                            // 0x108(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FNoAggregationParameters> NoAggregationParameters;                           // 0x158(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FAggregatedFunction> AggregatedFunctions;                               // 0x1A8(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17E4[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetworkComponent");
		return Clss;
	}

	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
};

// 0xD8 (0x108 - 0x30)
// Class MeshNetwork.MeshNetworkSubsystem
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnMeshNodeTypeChanged;                             // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConnectedToRootChanged;                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGameServerNodeTypeChanged;                       // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshMetaDataUpdated;                             // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMeshPlayerRequested;                             // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F7[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshNetworkNodeType              NodeType;                                          // 0xB0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMeshNetworkNodeType              GameServerNodeType;                                // 0xB1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConnectedToRoot;                                  // 0xB2(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMetadataReceived;                                 // 0xB3(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17F8[0x54];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshNetworkSubsystem");
		return Clss;
	}

	void SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void SetMetaData(struct FMeshMetaDataStruct& MetaData);
	bool GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData);
	void GetMetadata(struct FMeshMetaDataStruct& MetaData);
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType();
	enum class EMeshNetworkNodeType GetGameServerNodeType();
	bool GetConnectedToRoot();
	void EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass);
	void DisableMeshReplication(class AActor* Actor);
};

// 0x28 (0x120 - 0xF8)
// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
class UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
{
public:
	uint8                                        Pad_1802[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAlwaysRelevantActorInfo>      PastRelevantActors;                                // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReplicationGraphNode_AlwaysRelevant_ForConnection");
		return Clss;
	}

};

// 0x8 (0x4A0 - 0x498)
// Class MeshNetwork.MeshReplicationGraph
class UMeshReplicationGraph : public UReplicationGraph
{
public:
	class UReplicationGraphNode_ActorList*       AlwaysRelevantNode;                                // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReplicationGraph");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
