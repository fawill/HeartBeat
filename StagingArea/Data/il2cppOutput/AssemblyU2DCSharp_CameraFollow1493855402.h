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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 CameraFollow::velocity
	Vector2_t2243707579  ___velocity_2;
	// System.Single CameraFollow::smoothTimeX
	float ___smoothTimeX_3;
	// System.Single CameraFollow::smoothTimeY
	float ___smoothTimeY_4;
	// UnityEngine.GameObject CameraFollow::player
	GameObject_t1756533147 * ___player_5;

public:
	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___velocity_2)); }
	inline Vector2_t2243707579  get_velocity_2() const { return ___velocity_2; }
	inline Vector2_t2243707579 * get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(Vector2_t2243707579  value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_smoothTimeX_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___smoothTimeX_3)); }
	inline float get_smoothTimeX_3() const { return ___smoothTimeX_3; }
	inline float* get_address_of_smoothTimeX_3() { return &___smoothTimeX_3; }
	inline void set_smoothTimeX_3(float value)
	{
		___smoothTimeX_3 = value;
	}

	inline static int32_t get_offset_of_smoothTimeY_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___smoothTimeY_4)); }
	inline float get_smoothTimeY_4() const { return ___smoothTimeY_4; }
	inline float* get_address_of_smoothTimeY_4() { return &___smoothTimeY_4; }
	inline void set_smoothTimeY_4(float value)
	{
		___smoothTimeY_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___player_5)); }
	inline GameObject_t1756533147 * get_player_5() const { return ___player_5; }
	inline GameObject_t1756533147 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1756533147 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
