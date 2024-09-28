extern "C" {
#include "z_obj_bombiwa.hpp"

#define FLAGS 0x00000000

void ObjBombiwa_Init(Actor* actor, GameState* state);
void ObjBombiwa_Destroy(Actor* actor, GameState* state);
void ObjBombiwa_Update(Actor* actor, GameState* state);
void ObjBombiwa_Draw(Actor* actor, GameState* state);

ActorInit Obj_Bombiwa_InitVars = {
    ACTOR_OBJ_BOMBIWA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BOMBIWA,
    sizeof(ObjBombiwa),
    (ActorFunc)ObjBombiwa_Init,
    (ActorFunc)ObjBombiwa_Destroy,
    (ActorFunc)ObjBombiwa_Update,
    (ActorFunc)ObjBombiwa_Draw,
};

static CollisionCheckInfoInit sColChkInfoInit = { 0, 12, 60, MASS_IMMOVABLE };

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_HARD,
        AT_NONE,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x4FC1FFFE, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_ON,
    },
    { 55.0f, 70.0f, 0, { 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 350, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 1000, ICHAIN_STOP),
};

#ifdef NON_MATCHING
static s16 sEffectScales[] = {
    17, 14, 10, 8, 7, 5, 3, 2,
};
#else
s16 sEffectScales[] = {
    17, 14, 10, 8, 7, 5, 3, 2,
};
#endif

static void ObjBombiwa_InitCollision(ObjBombiwa* self, PlayState* play) {
    Collider_InitCylinder(play, &self->collider);
    Collider_SetCylinder(play, &self->collider, &self->actor, &sCylinderInit);
    Collider_UpdateCylinder(&self->actor, &self->collider);
}

void ObjBombiwa_Init(Actor* actor, GameState* state) {
    ObjBombiwa* self = (ObjBombiwa*)actor;
    PlayState* play = (PlayState*)state;

    Actor_ProcessInitChain(&self->actor, sInitChain);
    FUN_00372f38(&self->actor, play, &self->skelAnimModel, 0, 0);
    ObjBombiwa_InitCollision(self, play);
    if ((Flags_GetSwitch(play, self->actor.params & 0x3F) != 0)) {
        Actor_Kill(&self->actor);
    } else {
        CollisionCheck_SetInfo(&self->actor.colChkInfo, NULL, &sColChkInfoInit);
        if (self->actor.shape.rot.y == 0) {
            s16 rand = (s16)Rand_ZeroFloat(65536.0f);
            self->actor.world.rot.y = rand;
            self->actor.shape.rot.y = rand;
        }
        self->actor.shape.yOffset = -200.0f;
        self->actor.world.pos.y = self->actor.home.pos.y + 20.0f;
    }
}

void ObjBombiwa_Destroy(Actor* actor, GameState* state) {
    ObjBombiwa* self = (ObjBombiwa*)actor;
    PlayState* play = (PlayState*)state;

    Collider_DestroyCylinder(play, &self->collider);
    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

#ifdef NON_MATCHING
/*
static void ObjBombiwa_Break(ObjBombiwa* self, PlayState* play) {
    Vec3f pos;
    Vec3f velocity;
    s16 arg5;
    s16 scale;
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sEffectScales); i++) {
        pos.x = ((Rand_ZeroOne() - 0.5f) * 10.0f) + self->actor.home.pos.x;
        pos.y = ((Rand_ZeroOne() * 5.0f) + self->actor.home.pos.y) + 8.0f;
        pos.z = ((Rand_ZeroOne() - 0.5f) * 10.0f) + self->actor.home.pos.z;
        velocity.x = (Rand_ZeroOne() - 0.5f) * 15.0f;
        velocity.y = (Rand_ZeroOne() * 16.0f) + 5.0f;
        velocity.z = (Rand_ZeroOne() - 0.5f) * 15.0f;
        scale = sEffectScales[i];
        if (10 < scale) {
            arg5 = 0x221;
        } else {
            arg5 = 33;
        }
        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, -400, arg5, 10, 2, 0, scale, 1, 0, 80, -1,
                             OBJECT_BOMBIWA, NULL);
    }
    FUN_0037378c(play, &self->actor.world.pos, 60.0f, 8, 100, 160, 1);
}

void ObjBombiwa_Update(Actor* actor, GameState* state) {
    ObjBombiwa* self = (ObjBombiwa*)actor;
    PlayState* play = (PlayState*)state;
    u8 acFlags = self->collider.base.acFlags;

    if ((FUN_00346d94(play, &self->actor) != NULL) ||
        ((self->collider.base.acFlags & 0x2) && (self->collider.info.acHitInfo->toucher.dmgFlags & 0x40000040))) {
        if ((play->sceneNum == 0x59) && ((actor->params & 0x3F) == 0x16)) {
            Actor* otherActor;
            otherActor = play->actorCtx.actorLists[ACTORCAT_PROP].head;
            while (otherActor != NULL) {
                if ((u16)otherActor->params != 0xFF21) {
                    otherActor = otherActor->next;
                } else if (otherActor != NULL) {
                    return;
                } else {
                    break;
                }
            }
        }

        ObjBombiwa_Break(self, play);

        Flags_SetSwitch(play, self->actor.params & 0x3F);
        Audio_PlaySoundAtPosition(play, &self->actor.world.pos, 80, 0x1000167);
        if (((self->actor.params >> 0xF) & 1) != 0) {
            FUN_00372244(&play->unk_5FCC, 0x1E, 0x1000487);
        }
        Actor_Kill(&self->actor);
    } else {
        self->collider.base.acFlags &= ~0x2;
        if (self->actor.xzDistToPlayer < 800.0f) {
            CollisionCheck_SetAC(play, &play->colChkCtx, &self->collider.base);
            CollisionCheck_SetOC(play, &play->colChkCtx, &self->collider.base);
        }
    }
}
*/
#else
GLOBAL_ASM("asm/ObjBombiwa_Update.s")
#endif

void ObjBombiwa_Draw(Actor* actor, GameState* state) {
    ObjBombiwa* self = (ObjBombiwa*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);
    if (self->skelAnimModel != NULL) {
        self->skelAnimModel->SetUnkAC(1);
        self->skelAnimModel->FUN_003721e0(&modelMtx);
        self->skelAnimModel->FUN_00372170(0);
    }
}
}
