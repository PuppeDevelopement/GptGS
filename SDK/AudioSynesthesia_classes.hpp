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
// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSynesthesiaNRTSettings");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class AudioSynesthesia.AudioSynesthesiaNRT
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSynesthesiaNRT");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class AudioSynesthesia.ConstantQNRTSettings
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        StartingFrequency;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBands;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumBandsPerOctave;                                 // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnalysisPeriod;                                    // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDownmixToMono;                                    // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConstantQFFTSizeEnum             FFTSize;                                           // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTWindowType                    WindowType;                                        // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x3B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BandWidthStretch;                                  // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConstantQNormalizationEnum       CQTNormalization;                                  // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1276[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseFloorDb;                                      // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstantQNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.ConstantQNRT
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                 Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstantQNRT");
		return Clss;
	}

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ);
	void GetChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessNRTSettings
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoudnessNRTCurveTypeEnum         CurveType;                                         // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.LoudnessNRT
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                  Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessNRT");
		return Clss;
	}

	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness);
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.OnsetNRTSettings
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                         bDownmixToMono;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GranularityInSeconds;                              // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sensitivity;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnsetNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.OnsetNRT
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                     Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnsetNRT");
		return Clss;
	}

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
