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

// Door
struct  Door_t1896021008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip Door::open_door
	AudioClip_t1932558630 * ___open_door_2;
	// UnityEngine.AudioClip Door::closed_door
	AudioClip_t1932558630 * ___closed_door_3;
	// System.Boolean Door::doorOpened
	bool ___doorOpened_4;

public:
	inline static int32_t get_offset_of_open_door_2() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___open_door_2)); }
	inline AudioClip_t1932558630 * get_open_door_2() const { return ___open_door_2; }
	inline AudioClip_t1932558630 ** get_address_of_open_door_2() { return &___open_door_2; }
	inline void set_open_door_2(AudioClip_t1932558630 * value)
	{
		___open_door_2 = value;
		Il2CppCodeGenWriteBarrier(&___open_door_2, value);
	}

	inline static int32_t get_offset_of_closed_door_3() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___closed_door_3)); }
	inline AudioClip_t1932558630 * get_closed_door_3() const { return ___closed_door_3; }
	inline AudioClip_t1932558630 ** get_address_of_closed_door_3() { return &___closed_door_3; }
	inline void set_closed_door_3(AudioClip_t1932558630 * value)
	{
		___closed_door_3 = value;
		Il2CppCodeGenWriteBarrier(&___closed_door_3, value);
	}

	inline static int32_t get_offset_of_doorOpened_4() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorOpened_4)); }
	inline bool get_doorOpened_4() const { return ___doorOpened_4; }
	inline bool* get_address_of_doorOpened_4() { return &___doorOpened_4; }
	inline void set_doorOpened_4(bool value)
	{
		___doorOpened_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
