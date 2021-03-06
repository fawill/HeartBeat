﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// SoundManager
struct SoundManager_t654432262;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource SoundManager::efxSource
	AudioSource_t1135106623 * ___efxSource_2;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t1135106623 * ___musicSource_3;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_5;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_6;

public:
	inline static int32_t get_offset_of_efxSource_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___efxSource_2)); }
	inline AudioSource_t1135106623 * get_efxSource_2() const { return ___efxSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_efxSource_2() { return &___efxSource_2; }
	inline void set_efxSource_2(AudioSource_t1135106623 * value)
	{
		___efxSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___efxSource_2, value);
	}

	inline static int32_t get_offset_of_musicSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___musicSource_3)); }
	inline AudioSource_t1135106623 * get_musicSource_3() const { return ___musicSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_musicSource_3() { return &___musicSource_3; }
	inline void set_musicSource_3(AudioSource_t1135106623 * value)
	{
		___musicSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_3, value);
	}

	inline static int32_t get_offset_of_lowPitchRange_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___lowPitchRange_5)); }
	inline float get_lowPitchRange_5() const { return ___lowPitchRange_5; }
	inline float* get_address_of_lowPitchRange_5() { return &___lowPitchRange_5; }
	inline void set_lowPitchRange_5(float value)
	{
		___lowPitchRange_5 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_6() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___highPitchRange_6)); }
	inline float get_highPitchRange_6() const { return ___highPitchRange_6; }
	inline float* get_address_of_highPitchRange_6() { return &___highPitchRange_6; }
	inline void set_highPitchRange_6(float value)
	{
		___highPitchRange_6 = value;
	}
};

struct SoundManager_t654432262_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t654432262 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___instance_4)); }
	inline SoundManager_t654432262 * get_instance_4() const { return ___instance_4; }
	inline SoundManager_t654432262 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SoundManager_t654432262 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
