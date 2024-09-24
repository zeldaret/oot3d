extern "C" {
#include "z_obj_kibako2.hpp"

#define FLAGS 0x00000000

void ObjKibako2_Init(Actor* actor, GameState* state);
void ObjKibako2_Destroy(Actor* actor, GameState* state);
void ObjKibako2_Update(Actor* actor, GameState* state);
void ObjKibako2_Draw(Actor* actor, GameState* state);

void ObjKibako2_Idle(ObjKibako2* self, PlayState* play);
void ObjKibako2_Kill(ObjKibako2* self, PlayState* play);

ActorInit Obj_Kibako2_InitVars = {
    ACTOR_OBJ_KIBAKO2,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_KIBAKO2,
    sizeof(ObjKibako2),
    (ActorFunc)ObjKibako2_Init,
    (ActorFunc)ObjKibako2_Destroy,
    (ActorFunc)ObjKibako2_Update,
    (ActorFunc)ObjKibako2_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x40000040, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_NONE,
    },
    { 31, 48, 0, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 1000, ICHAIN_STOP),
};

static void ObjKibako2_InitCollider(ObjKibako2* self, PlayState* play) {
    Collider_InitCylinder(play, &self->collider);
    Collider_SetCylinder(play, &self->collider, &self->dyna.actor, &sCylinderInit);
    Collider_UpdateCylinder(&self->dyna.actor, &self->collider);
}

static void ObjKibako2_Break(ObjKibako2* self, PlayState* play) {
    s32 pad[2];
    Vec3f* selfPos;
    Vec3f pos;
    Vec3f velocity;
    s16 angle;
    s32 i;

    selfPos = &self->dyna.actor.world.pos;
    for (i = 0, angle = 0; i < 0x10; i++, angle += 0x4E20) {
        f32 sn = Math_SinS(angle);
        f32 cs = Math_CosS(angle);
        f32 temp_rand;
        s16 phi_s0;

        temp_rand = Rand_ZeroOne() * 30.0f;
        pos.x = sn * temp_rand;
        pos.y = (Rand_ZeroOne() * 10.0f) + 2.0f;
        pos.z = cs * temp_rand;
        velocity.x = pos.x * 0.2f;
        velocity.y = (Rand_ZeroOne() * 10.0f) + 2.0f;
        velocity.z = pos.z * 0.2f;
        pos.x += selfPos->x;
        pos.y += selfPos->y;
        pos.z += selfPos->z;
        temp_rand = Rand_ZeroOne();
        if (temp_rand < 0.05f) {
            phi_s0 = 0x60;
        } else if (temp_rand < 0.7f) {
            phi_s0 = 0x40;
        } else {
            phi_s0 = 0x20;
        }

        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, -200, phi_s0 | 0x200, 28, 2, 0, (Rand_ZeroOne() * 30.0f) + 5.0f, 0, 0,
                             70, -1, OBJECT_KIBAKO2, NULL);
    }
    
    FUN_0037378c(play, selfPos, 90.0f, 6, 100, 160, 1);
}

static void ObjKibako2_SpawnCollectible(ObjKibako2* self, PlayState* play2) {
    PlayState* play = play2;
    s16 itemDropped = self->dyna.actor.home.rot.x;
    s16 collectibleFlagTemp = self->collectibleFlag;

    if (itemDropped >= 0 && itemDropped < ITEM00_MAX) {
        Item_DropCollectible(play, &self->dyna.actor.world.pos, itemDropped | (collectibleFlagTemp << 8));
    }
}

void ObjKibako2_Init(Actor* actor, GameState* state) {
    ObjKibako2* self = (ObjKibako2*)actor;
    PlayState* play = (PlayState*)state;
    CollisionHeader* colHeader = NULL;
    u32 bgId;

    DynaPolyActor_Init(&self->dyna, 0);
    Actor_ProcessInitChain(&self->dyna.actor, sInitChain);
    FUN_00372f38(actor, play, &self->skelAnimModel, 1, 0);
    ObjKibako2_InitCollider(self, play);
    ReadCollisionHeaderFromZsi(DynaPolyInfo_Alloc(&self->dyna, state, 0), &colHeader);
    bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &self->dyna.actor, colHeader);
    self->dyna.bgId = bgId;
    self->collectibleFlag = self->dyna.actor.home.rot.z & 0x3F;
    self->dyna.actor.shape.rot.x = 0;
    self->dyna.actor.world.rot.x = 0;
    self->dyna.actor.shape.rot.z = 0;
    self->dyna.actor.world.rot.z = 0;
    self->dyna.actor.home.rot.z = 0;
    self->actionFunc = ObjKibako2_Idle;
    self->dyna.actor.unk_19B = 2;
}

void ObjKibako2_Destroy(Actor* actor, GameState* state) {
    ObjKibako2* self = (ObjKibako2*)actor;
    PlayState* play = (PlayState*)state;

    Collider_DestroyCylinder(play, &self->collider);
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, self->dyna.bgId);
    FUN_00350f34(&self->dyna.actor, &self->skelAnimModel, 0);
}

void ObjKibako2_Idle(ObjKibako2* self, PlayState* play) {
    Actor* actor = &self->dyna.actor;

    if ((self->collider.base.acFlags & AC_HIT) || (self->dyna.actor.home.rot.z != 0) ||
        FUN_00346d94(play, &self->dyna.actor) != NULL) {
        ObjKibako2_Break(self, play);
        Audio_PlaySoundAtPosition(play, &self->dyna.actor.world.pos, 20, 0x1000201);
        actor->flags |= 0x10;
        FUN_0036b940(play, &play->colCtx.dyna, self->dyna.bgId);
        actor->draw = NULL;
        self->actionFunc = ObjKibako2_Kill;
    } else if (self->dyna.actor.xzDistToPlayer < 600.0f) {
        CollisionCheck_SetAC(play, &play->colChkCtx, &self->collider.base);
    }
}

void ObjKibako2_Kill(ObjKibako2* self, PlayState* play) {
    s16 params = self->dyna.actor.params;

    if ((params & 0x8000) == 0) {
        Actor_Spawn(&play->actorCtx, play, ACTOR_EN_SW, self->dyna.actor.world.pos.x, self->dyna.actor.world.pos.y,
                    self->dyna.actor.world.pos.z, 0, self->dyna.actor.shape.rot.y, 0, params | 0x8000, 1);
    }

    ObjKibako2_SpawnCollectible(self, play);
    Actor_Kill(&self->dyna.actor);
}

void ObjKibako2_Update(Actor* actor, GameState* state) {
    ObjKibako2* self = (ObjKibako2*)actor;
    PlayState* play = (PlayState*)state;
    
    self->actionFunc(self, play);
}

void ObjKibako2_Draw(Actor* actor, GameState* state) {
    ObjKibako2* self = (ObjKibako2*)actor;
    PlayState* play = (PlayState*)state;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->dyna.actor.modelMtx);

    Player* player = GET_PLAYER(play);
    FUN_00357fd0(player, self->dyna.actor.unk_178, &self->dyna.actor.world.pos);

    self->skelAnimModel->SetUnkAC(1);
    self->skelAnimModel->FUN_003721e0(&modelMtx);
    self->skelAnimModel->FUN_00372170(0);
}
}
