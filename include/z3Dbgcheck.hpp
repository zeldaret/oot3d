#pragma once

#include "z3Dvec.hpp"

#define BG_ACTOR_MAX 50

typedef struct {
    /* 0x00 */ char unk_00[0x2];
    /* 0x02 */ s16 ySurface;
} WaterBox;

typedef struct {
    /* 0x00 */ char unk_00[0x28];
    /* 0x28 */ WaterBox* waterBoxes;
} CollisionHeader;

typedef struct {
    /* 0x00 */ CollisionHeader* colHeader;
    /* 0x04 */ char             unk_04[0x4C];
} StaticCollisionContext; // size = 0x50

typedef struct {
    /* 0x0000 */ u8     bitFlag;
    /* 0x0004 */ ActorMesh actorMeshArr[BG_ACTOR_MAX];
    /* 0x151C */ u16    bgActorFlags[BG_ACTOR_MAX];
    /* 0x1580 */ char   unk_13F0[0x24];
} DynaCollisionContext; // size = 0x15A4

typedef struct {
    /* 0x0000 */ StaticCollisionContext stat;
    /* 0x0050 */ DynaCollisionContext   dyna;
} CollisionContext; // size = 0x15F4

void ReadCollisionHeaderFromZsi(void* arg1, CollisionHeader** col);
