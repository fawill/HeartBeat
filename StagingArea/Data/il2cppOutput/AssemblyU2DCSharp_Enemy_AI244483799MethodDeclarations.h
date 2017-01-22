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

// Enemy_AI
struct Enemy_AI_t244483799;
// UnityEngine.Collider
struct Collider_t3497673348;
// UnityEngine.Collision
struct Collision_t2876846408;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"

// System.Void Enemy_AI::.ctor()
extern "C"  void Enemy_AI__ctor_m3907679114 (Enemy_AI_t244483799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::Start()
extern "C"  void Enemy_AI_Start_m1919036822 (Enemy_AI_t244483799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::Update()
extern "C"  void Enemy_AI_Update_m1237139619 (Enemy_AI_t244483799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::Patrol()
extern "C"  void Enemy_AI_Patrol_m2152714658 (Enemy_AI_t244483799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::OnTriggerStay(UnityEngine.Collider)
extern "C"  void Enemy_AI_OnTriggerStay_m3749744317 (Enemy_AI_t244483799 * __this, Collider_t3497673348 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::OnTriggerExit(UnityEngine.Collider)
extern "C"  void Enemy_AI_OnTriggerExit_m509970348 (Enemy_AI_t244483799 * __this, Collider_t3497673348 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy_AI::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Enemy_AI_OnCollisionEnter_m2430011032 (Enemy_AI_t244483799 * __this, Collision_t2876846408 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Enemy_AI::EndGame()
extern "C"  Il2CppObject * Enemy_AI_EndGame_m3769471457 (Enemy_AI_t244483799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
