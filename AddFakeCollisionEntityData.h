
#ifndef FBGEN_AddFakeCollisionEntityData_H
#define FBGEN_AddFakeCollisionEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "Vec3.h"
#include "Vec3.h"
#include "Uint32.h"
#include "MaterialDecl.h"
#include "EntityData.h"

class AddFakeCollisionEntityData :
	public EntityData // size = 0x18
{
public:
	Realm m_Realm; // 0x18
	Vec3 m_Position; // 0x20
	Vec3 m_Normal; // 0x30
	Vec3 m_ImpulseDirection; // 0x40
	Uint32 m_PartIndex; // 0x50
	float m_Speed; // 0x54
	MaterialDecl m_Material; // 0x58
	float m_ImpulseMagnitude; // 0x5c
	float m_Damage; // 0x60
	bool m_ApplyToAllParts; // 0x64
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_AddFakeCollisionEntityData_H
