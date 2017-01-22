#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wave
struct  Wave_t1600141715  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Wave::player
	GameObject_t1756533147 * ___player_2;
	// System.Single Wave::maxScaleFactor
	float ___maxScaleFactor_3;
	// UnityEngine.Vector3 Wave::maxScale
	Vector3_t2243707580  ___maxScale_4;
	// UnityEngine.AudioClip Wave::heart_sound
	AudioClip_t1932558630 * ___heart_sound_5;
	// System.Single Wave::heartbeat_speed
	float ___heartbeat_speed_6;
	// System.Single Wave::fade_out
	float ___fade_out_7;
	// System.Boolean Wave::on_fade
	bool ___on_fade_8;
	// System.Boolean Wave::play_heartbeat
	bool ___play_heartbeat_9;
	// UnityEngine.SpriteRenderer Wave::my_render
	SpriteRenderer_t1209076198 * ___my_render_10;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_maxScaleFactor_3() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___maxScaleFactor_3)); }
	inline float get_maxScaleFactor_3() const { return ___maxScaleFactor_3; }
	inline float* get_address_of_maxScaleFactor_3() { return &___maxScaleFactor_3; }
	inline void set_maxScaleFactor_3(float value)
	{
		___maxScaleFactor_3 = value;
	}

	inline static int32_t get_offset_of_maxScale_4() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___maxScale_4)); }
	inline Vector3_t2243707580  get_maxScale_4() const { return ___maxScale_4; }
	inline Vector3_t2243707580 * get_address_of_maxScale_4() { return &___maxScale_4; }
	inline void set_maxScale_4(Vector3_t2243707580  value)
	{
		___maxScale_4 = value;
	}

	inline static int32_t get_offset_of_heart_sound_5() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___heart_sound_5)); }
	inline AudioClip_t1932558630 * get_heart_sound_5() const { return ___heart_sound_5; }
	inline AudioClip_t1932558630 ** get_address_of_heart_sound_5() { return &___heart_sound_5; }
	inline void set_heart_sound_5(AudioClip_t1932558630 * value)
	{
		___heart_sound_5 = value;
		Il2CppCodeGenWriteBarrier(&___heart_sound_5, value);
	}

	inline static int32_t get_offset_of_heartbeat_speed_6() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___heartbeat_speed_6)); }
	inline float get_heartbeat_speed_6() const { return ___heartbeat_speed_6; }
	inline float* get_address_of_heartbeat_speed_6() { return &___heartbeat_speed_6; }
	inline void set_heartbeat_speed_6(float value)
	{
		___heartbeat_speed_6 = value;
	}

	inline static int32_t get_offset_of_fade_out_7() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___fade_out_7)); }
	inline float get_fade_out_7() const { return ___fade_out_7; }
	inline float* get_address_of_fade_out_7() { return &___fade_out_7; }
	inline void set_fade_out_7(float value)
	{
		___fade_out_7 = value;
	}

	inline static int32_t get_offset_of_on_fade_8() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___on_fade_8)); }
	inline bool get_on_fade_8() const { return ___on_fade_8; }
	inline bool* get_address_of_on_fade_8() { return &___on_fade_8; }
	inline void set_on_fade_8(bool value)
	{
		___on_fade_8 = value;
	}

	inline static int32_t get_offset_of_play_heartbeat_9() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___play_heartbeat_9)); }
	inline bool get_play_heartbeat_9() const { return ___play_heartbeat_9; }
	inline bool* get_address_of_play_heartbeat_9() { return &___play_heartbeat_9; }
	inline void set_play_heartbeat_9(bool value)
	{
		___play_heartbeat_9 = value;
	}

	inline static int32_t get_offset_of_my_render_10() { return static_cast<int32_t>(offsetof(Wave_t1600141715, ___my_render_10)); }
	inline SpriteRenderer_t1209076198 * get_my_render_10() const { return ___my_render_10; }
	inline SpriteRenderer_t1209076198 ** get_address_of_my_render_10() { return &___my_render_10; }
	inline void set_my_render_10(SpriteRenderer_t1209076198 * value)
	{
		___my_render_10 = value;
		Il2CppCodeGenWriteBarrier(&___my_render_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
