#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KeyCollect
struct  KeyCollect_t2742327831  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip KeyCollect::key_clip
	AudioClip_t1932558630 * ___key_clip_2;
	// System.Boolean KeyCollect::keyCollected
	bool ___keyCollected_3;

public:
	inline static int32_t get_offset_of_key_clip_2() { return static_cast<int32_t>(offsetof(KeyCollect_t2742327831, ___key_clip_2)); }
	inline AudioClip_t1932558630 * get_key_clip_2() const { return ___key_clip_2; }
	inline AudioClip_t1932558630 ** get_address_of_key_clip_2() { return &___key_clip_2; }
	inline void set_key_clip_2(AudioClip_t1932558630 * value)
	{
		___key_clip_2 = value;
		Il2CppCodeGenWriteBarrier(&___key_clip_2, value);
	}

	inline static int32_t get_offset_of_keyCollected_3() { return static_cast<int32_t>(offsetof(KeyCollect_t2742327831, ___keyCollected_3)); }
	inline bool get_keyCollected_3() const { return ___keyCollected_3; }
	inline bool* get_address_of_keyCollected_3() { return &___keyCollected_3; }
	inline void set_keyCollected_3(bool value)
	{
		___keyCollected_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
