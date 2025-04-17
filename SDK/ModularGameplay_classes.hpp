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

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameFrameworkComponent
class UGameFrameworkComponent : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFrameworkComponent");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PawnComponent
class UPawnComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PawnComponent");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.ControllerComponent
class UControllerComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerComponent");
		return Clss;
	}

};

// 0x140 (0x168 - 0x28)
// Class ModularGameplay.GameFrameworkComponentManager
class UGameFrameworkComponentManager : public UObject
{
public:
	uint8                                        Pad_D30[0x140];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFrameworkComponentManager");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.GameStateComponent
class UGameStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameStateComponent");
		return Clss;
	}

};

// 0x0 (0xB0 - 0xB0)
// Class ModularGameplay.PlayerStateComponent
class UPlayerStateComponent : public UGameFrameworkComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerStateComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
