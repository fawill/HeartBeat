#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t1147783557  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D Player::pRigidbody
	Rigidbody2D_t502193897 * ___pRigidbody_2;
	// System.Boolean Player::hasKey
	bool ___hasKey_3;
	// System.Single Player::moveForce
	float ___moveForce_4;
	// System.Boolean Player::controllerActive
	bool ___controllerActive_5;

public:
	inline static int32_t get_offset_of_pRigidbody_2() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___pRigidbody_2)); }
	inline Rigidbody2D_t502193897 * get_pRigidbody_2() const { return ___pRigidbody_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_pRigidbody_2() { return &___pRigidbody_2; }
	inline void set_pRigidbody_2(Rigidbody2D_t502193897 * value)
	{
		___pRigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___pRigidbody_2, value);
	}

	inline static int32_t get_offset_of_hasKey_3() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___hasKey_3)); }
	inline bool get_hasKey_3() const { return ___hasKey_3; }
	inline bool* get_address_of_hasKey_3() { return &___hasKey_3; }
	inline void set_hasKey_3(bool value)
	{
		___hasKey_3 = value;
	}

	inline static int32_t get_offset_of_moveForce_4() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___moveForce_4)); }
	inline float get_moveForce_4() const { return ___moveForce_4; }
	inline float* get_address_of_moveForce_4() { return &___moveForce_4; }
	inline void set_moveForce_4(float value)
	{
		___moveForce_4 = value;
	}

	inline static int32_t get_offset_of_controllerActive_5() { return static_cast<int32_t>(offsetof(Player_t1147783557, ___controllerActive_5)); }
	inline bool get_controllerActive_5() const { return ___controllerActive_5; }
	inline bool* get_address_of_controllerActive_5() { return &___controllerActive_5; }
	inline void set_controllerActive_5(bool value)
	{
		___controllerActive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
