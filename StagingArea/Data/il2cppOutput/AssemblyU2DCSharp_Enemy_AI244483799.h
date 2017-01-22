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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_t2761625415;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Enemy_AI_Enemy_Type4106375389.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy_AI
struct  Enemy_AI_t244483799  : public MonoBehaviour_t1158329972
{
public:
	// Enemy_AI/Enemy_Type Enemy_AI::my_type
	int32_t ___my_type_2;
	// UnityEngine.Transform Enemy_AI::target
	Transform_t3275118058 * ___target_3;
	// UnityEngine.Vector3 Enemy_AI::start_pos
	Vector3_t2243707580  ___start_pos_4;
	// UnityEngine.Vector3[] Enemy_AI::patrol_list
	Vector3U5BU5D_t1172311765* ___patrol_list_5;
	// System.Int32 Enemy_AI::patrol_index
	int32_t ___patrol_index_6;
	// UnityEngine.AI.NavMeshAgent Enemy_AI::agent
	NavMeshAgent_t2761625415 * ___agent_7;
	// System.Boolean Enemy_AI::chase_player
	bool ___chase_player_8;

public:
	inline static int32_t get_offset_of_my_type_2() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___my_type_2)); }
	inline int32_t get_my_type_2() const { return ___my_type_2; }
	inline int32_t* get_address_of_my_type_2() { return &___my_type_2; }
	inline void set_my_type_2(int32_t value)
	{
		___my_type_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_start_pos_4() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___start_pos_4)); }
	inline Vector3_t2243707580  get_start_pos_4() const { return ___start_pos_4; }
	inline Vector3_t2243707580 * get_address_of_start_pos_4() { return &___start_pos_4; }
	inline void set_start_pos_4(Vector3_t2243707580  value)
	{
		___start_pos_4 = value;
	}

	inline static int32_t get_offset_of_patrol_list_5() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___patrol_list_5)); }
	inline Vector3U5BU5D_t1172311765* get_patrol_list_5() const { return ___patrol_list_5; }
	inline Vector3U5BU5D_t1172311765** get_address_of_patrol_list_5() { return &___patrol_list_5; }
	inline void set_patrol_list_5(Vector3U5BU5D_t1172311765* value)
	{
		___patrol_list_5 = value;
		Il2CppCodeGenWriteBarrier(&___patrol_list_5, value);
	}

	inline static int32_t get_offset_of_patrol_index_6() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___patrol_index_6)); }
	inline int32_t get_patrol_index_6() const { return ___patrol_index_6; }
	inline int32_t* get_address_of_patrol_index_6() { return &___patrol_index_6; }
	inline void set_patrol_index_6(int32_t value)
	{
		___patrol_index_6 = value;
	}

	inline static int32_t get_offset_of_agent_7() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___agent_7)); }
	inline NavMeshAgent_t2761625415 * get_agent_7() const { return ___agent_7; }
	inline NavMeshAgent_t2761625415 ** get_address_of_agent_7() { return &___agent_7; }
	inline void set_agent_7(NavMeshAgent_t2761625415 * value)
	{
		___agent_7 = value;
		Il2CppCodeGenWriteBarrier(&___agent_7, value);
	}

	inline static int32_t get_offset_of_chase_player_8() { return static_cast<int32_t>(offsetof(Enemy_AI_t244483799, ___chase_player_8)); }
	inline bool get_chase_player_8() const { return ___chase_player_8; }
	inline bool* get_address_of_chase_player_8() { return &___chase_player_8; }
	inline void set_chase_player_8(bool value)
	{
		___chase_player_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
