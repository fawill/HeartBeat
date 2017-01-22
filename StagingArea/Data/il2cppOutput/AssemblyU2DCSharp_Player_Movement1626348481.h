#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player_Movement
struct  Player_Movement_t1626348481  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody Player_Movement::my_rigidbody
	Rigidbody_t4233889191 * ___my_rigidbody_2;
	// UnityEngine.Vector2 Player_Movement::interp_axis
	Vector2_t2243707579  ___interp_axis_3;
	// System.Single Player_Movement::move_speed
	float ___move_speed_4;

public:
	inline static int32_t get_offset_of_my_rigidbody_2() { return static_cast<int32_t>(offsetof(Player_Movement_t1626348481, ___my_rigidbody_2)); }
	inline Rigidbody_t4233889191 * get_my_rigidbody_2() const { return ___my_rigidbody_2; }
	inline Rigidbody_t4233889191 ** get_address_of_my_rigidbody_2() { return &___my_rigidbody_2; }
	inline void set_my_rigidbody_2(Rigidbody_t4233889191 * value)
	{
		___my_rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___my_rigidbody_2, value);
	}

	inline static int32_t get_offset_of_interp_axis_3() { return static_cast<int32_t>(offsetof(Player_Movement_t1626348481, ___interp_axis_3)); }
	inline Vector2_t2243707579  get_interp_axis_3() const { return ___interp_axis_3; }
	inline Vector2_t2243707579 * get_address_of_interp_axis_3() { return &___interp_axis_3; }
	inline void set_interp_axis_3(Vector2_t2243707579  value)
	{
		___interp_axis_3 = value;
	}

	inline static int32_t get_offset_of_move_speed_4() { return static_cast<int32_t>(offsetof(Player_Movement_t1626348481, ___move_speed_4)); }
	inline float get_move_speed_4() const { return ___move_speed_4; }
	inline float* get_address_of_move_speed_4() { return &___move_speed_4; }
	inline void set_move_speed_4(float value)
	{
		___move_speed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
