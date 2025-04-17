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
// BlueprintGeneratedClass Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C
class IAthena_IGiveSneakySnowman_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_IGiveSneakySnowman_C");
		return Clss;
	}

	void GetMaterialInt(int32* MatInt);
	void SpawnParticles();
	void GetNewSnowmanTransform(struct FTransform* Transform);
	void OnTookSneakySnowman();
	void OnStartedJumpingIn();
	void MovePlayer(class AActor* Player);
	void OnGaveSneakySnowman();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
