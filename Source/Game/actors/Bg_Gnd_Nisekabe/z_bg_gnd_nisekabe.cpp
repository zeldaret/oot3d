extern "C" {
#include "z_bg_gnd_nisekabe.hpp"

#define FLAGS 0x80400010

void BgGndNisekabe_Init(Actor* actor, GameState* state);
void BgGndNisekabe_Destroy(Actor* actor, GameState* state);
void BgGndNisekabe_Update(Actor* actor, GameState* state);
void BgGndNisekabe_Draw(Actor* actor, GameState* state);

ActorInit Bg_Gnd_Nisekabe_InitVars = {
    ACTOR_BG_GND_NISEKABE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(BgGndNisekabe),
    (ActorFunc)BgGndNisekabe_Init,
    (ActorFunc)BgGndNisekabe_Destroy,
    (ActorFunc)BgGndNisekabe_Update,
    (ActorFunc)BgGndNisekabe_Draw,
};

void BgGndNisekabe_Init(Actor* actor, GameState* state) {
    BgGndNisekabe* self = (BgGndNisekabe*)actor;
    PlayState* play = (PlayState*)state;

    Actor_SetScale(&self->actor, 0.1);
    self->actor.uncullZoneForward = 3000.0;
    switch (self->actor.params & 0xFF) {
        case 0:
            FUN_00372f38(&self->actor, play, &self->skelAnimModel, 13, 0);
            break;
        case 1:
            FUN_00372f38(&self->actor, play, &self->skelAnimModel, 11, 0);
            break;
        case 2:
            FUN_00372f38(&self->actor, play, &self->skelAnimModel, 12, 0);
            break;
    }
}

void BgGndNisekabe_Destroy(Actor* actor, GameState* state) {
    BgGndNisekabe* self = (BgGndNisekabe*)actor;

    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

void BgGndNisekabe_Update(Actor* actor, GameState* state) {
    BgGndNisekabe* self = (BgGndNisekabe*)actor;
    PlayState* play = (PlayState*)state;

    if (play->actorCtx.unk_03 != 0) {
        self->actor.flags |= 0x80;
    } else {
        self->actor.flags &= ~0x80;
    }
}

void BgGndNisekabe_Draw(Actor* actor, GameState* state) {
    BgGndNisekabe* self = (BgGndNisekabe*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);
    if ((self->actor.flags & 0x80) == 0x80) {
        if (self->skelAnimModel != NULL) {
            self->skelAnimModel->SetUnkAC(1);
            self->skelAnimModel->FUN_003721e0(&modelMtx);
            self->skelAnimModel->FUN_00372170(0);
        }
    } else if (self->skelAnimModel != NULL) {
        self->skelAnimModel->SetUnkAC(1);
        self->skelAnimModel->FUN_003721e0(&modelMtx);
        self->skelAnimModel->FUN_00372170(0);
    }
}
}
