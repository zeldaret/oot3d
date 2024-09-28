extern "C" {
#include "z_bg_hidan_firewall.hpp"

#define FLAGS 0x80400000

void BgHidanFirewall_Init(Actor* actor, GameState* state);
void BgHidanFirewall_Destroy(Actor* actor, GameState* state);
void BgHidanFirewall_Update(Actor* actor, GameState* state);
void BgHidanFirewall_Draw(Actor* actor, GameState* state);

void BgHidanFirewall_Wait(BgHidanFirewall* self, PlayState* play);
void BgHidanFirewall_Countdown(BgHidanFirewall* self, PlayState* play);
void BgHidanFirewall_Erupt(BgHidanFirewall* self, PlayState* play);

ActorInit Bg_Hidan_Firewall_InitVars = {
    ACTOR_BG_HIDAN_FIREWALL,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanFirewall),
    (ActorFunc)BgHidanFirewall_Init,
    (ActorFunc)BgHidanFirewall_Destroy,
    (ActorFunc)BgHidanFirewall_Update,
    NULL,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_ON | OC1_TYPE_PLAYER,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x20000000, 0x01, 0x04 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        TOUCH_ON | TOUCH_SFX_NONE,
        BUMP_NONE,
        OCELEM_ON,
    },
    { 30, 83, 0, { 0 } },
};

static CollisionCheckInfoInit sColChkInfoInit = { 1, 80, 100, MASS_IMMOVABLE };

void BgHidanFirewall_Init(Actor* actor, GameState* state) {
    BgHidanFirewall* self = (BgHidanFirewall*)actor;
    PlayState* play = (PlayState*)state;

    actor->scale.z = 0.12f;
    actor->scale.x = 0.12f;
    actor->scale.y = 0.01f;

    self->unk_1A8 = 0;

    Collider_InitCylinder(play, &self->collider);
    Collider_SetCylinder(play, &self->collider, &self->actor, &sCylinderInit);

    self->collider.dim.pos.y = self->actor.world.pos.y;

    ZARInfo* zarInfo = FUN_00372f38(&self->actor, play, &self->skelAnimModel, 5, 0);
    self->skelAnimModel->unk_0C->FUN_00372d94(zarInfo->GetCMABByIndex(2));
    self->skelAnimModel->unk_0C->SetAnimType(1);
    self->skelAnimModel->unk_0C->SetAnimSpeed(2.0f);

    CollisionCheck_SetInfo(&self->actor.colChkInfo, NULL, &sColChkInfoInit);

    self->actionFunc = BgHidanFirewall_Wait;
}

void BgHidanFirewall_Destroy(Actor* actor, GameState* state) {
    BgHidanFirewall* self = (BgHidanFirewall*)actor;
    PlayState* play = (PlayState*)state;

    Collider_DestroyCylinder(play, &self->collider);
    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

inline s32 BgHidanFirewall_CheckProximity(BgHidanFirewall* self, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f distance;

    FUN_0036c5d8(&self->actor, &distance, &player->actor.world.pos);

    if (__fabsf(distance.x) < 100.0f && __fabsf(distance.z) < 120.0f) {
        return 1;
    }
    return 0;
}

void BgHidanFirewall_Wait(BgHidanFirewall* self, PlayState* play) {
    if (BgHidanFirewall_CheckProximity(self, play) != 0) {
        self->actor.draw = BgHidanFirewall_Draw;
        self->actor.params = 8;
        self->actionFunc = BgHidanFirewall_Countdown;
    }
}

void BgHidanFirewall_Countdown(BgHidanFirewall* self, PlayState* play) {
    if (self->actor.params != 0) {
        self->actor.params--;
    }
    if (self->actor.params == 0) {
        self->actionFunc = BgHidanFirewall_Erupt;
    }
}

void BgHidanFirewall_Erupt(BgHidanFirewall* self, PlayState* play) {
    if (BgHidanFirewall_CheckProximity(self, play) != 0) {
        Math_StepToF(&self->actor.scale.y, 0.1f, 0.01f / 0.4f);
    } else {
        if (Math_StepToF(&self->actor.scale.y, 0.01f, 0.01f) != 0) {
            self->actor.draw = NULL;
            self->actionFunc = BgHidanFirewall_Wait;
        } else {
            self->actor.params = 0;
        }
    }
}

#if NON_MATCHING
/*
void BgHidanFirewall_Collide(BgHidanFirewall* self, PlayState* play) {
    s16 phi_a3;

    if (Actor_IsFacingPlayer(&self->actor, 0x4000)) {
        phi_a3 = self->actor.shape.rot.y;
    } else {
        phi_a3 = self->actor.shape.rot.y + 0x8000;
    }

    FUN_00374bb8(play, &self->actor, 5.0f, phi_a3, 1.0f);
}

void BgHidanFirewall_ColliderFollowPlayer(BgHidanFirewall* self, PlayState* play) {
    Player* player;
    Vec3f sp30;
    f32 phi_f0;

    player = GET_PLAYER(play);

    FUN_0036c5d8(&self->actor, &sp30, &player->actor.world.pos);
    if (sp30.x < -70.0f) {
        phi_f0 = -70.0f;
    } else {
        if (sp30.x > 70.0f) {
            phi_f0 = 70.0f;
        } else {
            phi_f0 = sp30.x;
        }
    }
    sp30.x = phi_f0;

    if (self->actor.params == 0) {
        if (0.0f < sp30.z) {
            sp30.z = -25.0f;
            self->actor.params = -1;
        } else {
            sp30.z = 25.0f;
            self->actor.params = 1;
        }
    } else {
        sp30.z = self->actor.params * 25.0f;
    }
    f32 sin = Math_SinS(self->actor.shape.rot.y);
    f32 cos = Math_CosS(self->actor.shape.rot.y);

    self->collider.dim.pos.x = self->actor.world.pos.x + sp30.x * cos + sp30.z * sin;
    self->collider.dim.pos.z = self->actor.world.pos.z - sp30.x * sin + sp30.z * cos;
}

void BgHidanFirewall_Update(Actor* actor, GameState* state) {
    BgHidanFirewall* self = (BgHidanFirewall*)actor;
    PlayState* play = (PlayState*)state;

    self->unk_1A8 = (self->unk_1A8 + 1) % 8;

    if (self->collider.base.atFlags & AT_HIT) {
        self->collider.base.atFlags &= ~AT_HIT;
        BgHidanFirewall_Collide(self, play);
    }

    self->actionFunc(self, play);
    if (self->actionFunc == BgHidanFirewall_Erupt) {
        BgHidanFirewall_ColliderFollowPlayer(self, play);
        CollisionCheck_SetAT(play, &play->colChkCtx, &self->collider.base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &self->collider.base);
        FUN_00373264(&self->actor, 0x100018B);
    }
}
*/
#else
GLOBAL_ASM("asm/BgHidanFirewall_Update.s")
#endif

void BgHidanFirewall_Draw(Actor* actor, GameState* state) {
    BgHidanFirewall* self = (BgHidanFirewall*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);

    f32 animSpeed = 2.0f;
    if (PauseContext_GetState() != 0) {
        animSpeed = 0.0f;
    }

    if (self->skelAnimModel != NULL) {
        self->skelAnimModel->SetUnkAC(1);
        self->skelAnimModel->FUN_003721e0(&modelMtx);
        self->skelAnimModel->unk_0C->SetAnimSpeed(animSpeed);
        self->skelAnimModel->FUN_00372170(0);
    }
}
}
