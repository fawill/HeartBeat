#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Player
struct Player_t1147783557;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m1986401168 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m3139373552 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m717746161 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ChangePlayerDirection(System.Single)
extern "C"  void Player_ChangePlayerDirection_m851194077 (Player_t1147783557 * __this, float ___moveX0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::PlayerIsMoving()
extern "C"  bool Player_PlayerIsMoving_m3630971021 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::KeyCollected()
extern "C"  void Player_KeyCollected_m2581741272 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Death()
extern "C"  void Player_Death_m2608764782 (Player_t1147783557 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TryDoor(UnityEngine.GameObject)
extern "C"  void Player_TryDoor_m3278249149 (Player_t1147783557 * __this, GameObject_t1756533147 * ___door0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
