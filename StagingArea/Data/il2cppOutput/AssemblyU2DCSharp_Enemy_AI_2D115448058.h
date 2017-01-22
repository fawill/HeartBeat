#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy_AI_2D
struct  Enemy_AI_2D_t115448058  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Enemy_AI_2D::target
	Transform_t3275118058 * ___target_2;
	// System.Single Enemy_AI_2D::move_speed
	float ___move_speed_3;
	// UnityEngine.AudioClip Enemy_AI_2D::enemy_hit_clip
	AudioClip_t1932558630 * ___enemy_hit_clip_4;
	// UnityEngine.GameObject Enemy_AI_2D::death
	GameObject_t1756533147 * ___death_5;
	// UnityEngine.Rigidbody2D Enemy_AI_2D::my_rigidbody
	Rigidbody2D_t502193897 * ___my_rigidbody_6;
	// UnityEngine.Animator Enemy_AI_2D::my_anim
	Animator_t69676727 * ___my_anim_7;
	// System.Boolean Enemy_AI_2D::chase_player
	bool ___chase_player_8;
	// UnityEngine.Vector3 Enemy_AI_2D::start_pos
	Vector3_t2243707580  ___start_pos_9;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_move_speed_3() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___move_speed_3)); }
	inline float get_move_speed_3() const { return ___move_speed_3; }
	inline float* get_address_of_move_speed_3() { return &___move_speed_3; }
	inline void set_move_speed_3(float value)
	{
		___move_speed_3 = value;
	}

	inline static int32_t get_offset_of_enemy_hit_clip_4() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___enemy_hit_clip_4)); }
	inline AudioClip_t1932558630 * get_enemy_hit_clip_4() const { return ___enemy_hit_clip_4; }
	inline AudioClip_t1932558630 ** get_address_of_enemy_hit_clip_4() { return &___enemy_hit_clip_4; }
	inline void set_enemy_hit_clip_4(AudioClip_t1932558630 * value)
	{
		___enemy_hit_clip_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_hit_clip_4, value);
	}

	inline static int32_t get_offset_of_death_5() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___death_5)); }
	inline GameObject_t1756533147 * get_death_5() const { return ___death_5; }
	inline GameObject_t1756533147 ** get_address_of_death_5() { return &___death_5; }
	inline void set_death_5(GameObject_t1756533147 * value)
	{
		___death_5 = value;
		Il2CppCodeGenWriteBarrier(&___death_5, value);
	}

	inline static int32_t get_offset_of_my_rigidbody_6() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___my_rigidbody_6)); }
	inline Rigidbody2D_t502193897 * get_my_rigidbody_6() const { return ___my_rigidbody_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_my_rigidbody_6() { return &___my_rigidbody_6; }
	inline void set_my_rigidbody_6(Rigidbody2D_t502193897 * value)
	{
		___my_rigidbody_6 = value;
		Il2CppCodeGenWriteBarrier(&___my_rigidbody_6, value);
	}

	inline static int32_t get_offset_of_my_anim_7() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___my_anim_7)); }
	inline Animator_t69676727 * get_my_anim_7() const { return ___my_anim_7; }
	inline Animator_t69676727 ** get_address_of_my_anim_7() { return &___my_anim_7; }
	inline void set_my_anim_7(Animator_t69676727 * value)
	{
		___my_anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___my_anim_7, value);
	}

	inline static int32_t get_offset_of_chase_player_8() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___chase_player_8)); }
	inline bool get_chase_player_8() const { return ___chase_player_8; }
	inline bool* get_address_of_chase_player_8() { return &___chase_player_8; }
	inline void set_chase_player_8(bool value)
	{
		___chase_player_8 = value;
	}

	inline static int32_t get_offset_of_start_pos_9() { return static_cast<int32_t>(offsetof(Enemy_AI_2D_t115448058, ___start_pos_9)); }
	inline Vector3_t2243707580  get_start_pos_9() const { return ___start_pos_9; }
	inline Vector3_t2243707580 * get_address_of_start_pos_9() { return &___start_pos_9; }
	inline void set_start_pos_9(Vector3_t2243707580  value)
	{
		___start_pos_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
