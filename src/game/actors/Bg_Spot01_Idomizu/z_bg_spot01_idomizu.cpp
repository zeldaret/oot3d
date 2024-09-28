extern "C" {
#include "z_bg_spot01_idomizu.hpp"

#define FLAGS 0x80400030

void BgSpot01Idomizu_Init(Actor* actor, GameState* state);
void BgSpot01Idomizu_Destroy(Actor* actor, GameState* state);
void BgSpot01Idomizu_Update(Actor* actor, GameState* state);
void BgSpot01Idomizu_Draw(Actor* actor, GameState* state);

void FUN_003e8ab8(BgSpot01Idomizu* self, PlayState* play);

ActorInit Bg_Spot01_Idomizu_InitVars = {
    ACTOR_BG_SPOT01_IDOMIZU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT01_OBJECTS,
    sizeof(BgSpot01Idomizu),
    (ActorFunc)BgSpot01Idomizu_Init,
    (ActorFunc)BgSpot01Idomizu_Destroy,
    (ActorFunc)BgSpot01Idomizu_Update,
    (ActorFunc)BgSpot01Idomizu_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgSpot01Idomizu_Init(Actor* actor, GameState* state) {
    BgSpot01Idomizu* self = (BgSpot01Idomizu*)actor;
    PlayState* play = (PlayState*)state;

    Actor_ProcessInitChain(actor, sInitChain);
    ZARInfo* zarInfo = FUN_00372f38(actor, play, &self->skelAnimModel, 2, 0);
    self->skelAnimModel->unk_0C->FUN_00372d94(zarInfo->GetCMABByIndex(0));
    self->skelAnimModel->unk_0C->SetAnimType(1);
    if (gSaveContext.eventChkInf[6] & 0x80 || LINK_AGE_IN_YEARS == YEARS_ADULT) {
        self->waterHeight = -550.0f;
    } else {
        self->waterHeight = 52.0f;
    }

    actor->world.pos.y = self->waterHeight;
    self->actionFunc = FUN_003e8ab8;
}

void BgSpot01Idomizu_Destroy(Actor* actor, GameState* state) {
    BgSpot01Idomizu* self = (BgSpot01Idomizu*)actor;

    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

void FUN_003e8ab8(BgSpot01Idomizu* self, PlayState* play) {
    if (gSaveContext.eventChkInf[6] & 0x80) {
        self->waterHeight = -550.0f;
    }

    play->colCtx.stat.colHeader->waterBoxes[0].ySurface = self->actor.world.pos.y;
    if (self->actor.world.pos.y > self->waterHeight) {
        Audio_PlaySoundGeneral(0x10001B5, NULL, 4, &FLOAT_0054ac20, &FLOAT_0054ac20, &DAT_0054ac24.unk_0);
    }

    Math_ApproachF(&self->actor.world.pos.y, self->waterHeight, 1.0f, 2.0f);
}

void BgSpot01Idomizu_Update(Actor* actor, GameState* state) {
    BgSpot01Idomizu* self = (BgSpot01Idomizu*)actor;
    PlayState* play = (PlayState*)state;

    self->actionFunc(self, play);
}

void BgSpot01Idomizu_Draw(Actor* actor, GameState* state) {
    BgSpot01Idomizu* self = (BgSpot01Idomizu*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);

    f32 animSpeed = 1.0f;
    if (PauseContext_GetState() != 0) {
        animSpeed = 0.0f;
    }

    if (self->skelAnimModel != NULL) {
        self->skelAnimModel->unk_0C->SetAnimSpeed(animSpeed);
        self->skelAnimModel->SetUnkAC(1);
        self->skelAnimModel->FUN_003721e0(&modelMtx);
        self->skelAnimModel->FUN_00372170(0);
    }
}
}
