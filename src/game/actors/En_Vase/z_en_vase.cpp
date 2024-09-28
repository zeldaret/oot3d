/*
 * File: z_en_vase.cpp
 * Description: An unused, orange pot based on ALTTP. Lacks collision.
 */

extern "C" {
#include "z_en_vase.hpp"

#define FLAGS 0x80000010

void EnVase_Init(Actor* actor, GameState* state);
void EnVase_Destroy(Actor* actor, GameState* state);
void EnVase_Draw(Actor* actor, GameState* state);

ActorInit En_Vase_InitVars = {
    ACTOR_EN_VASE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_VASE,
    sizeof(EnVase),
    (ActorFunc)EnVase_Init,
    (ActorFunc)EnVase_Destroy,
    (ActorFunc)Actor_Noop,
    (ActorFunc)EnVase_Draw,
};

void EnVase_Init(Actor* actor, GameState* state) {
    EnVase* self = (EnVase*)actor;
    PlayState* play = (PlayState*)state;

    FUN_00372f38(&self->actor, play, &self->skelAnimModel, 0, 0);
    Actor_SetScale(&self->actor, 0.01f);
    self->actor.focus.pos = self->actor.world.pos;
    ActorShape_Init(&self->actor.shape, 0.0f, ActorShadow_DrawCircle, 6.0f);
}

void EnVase_Destroy(Actor* actor, GameState* state) {
    EnVase* self = (EnVase*)actor;

    FUN_00350f34(&self->actor, &self->skelAnimModel, 0);
}

void EnVase_Draw(Actor* actor, GameState* state) {
    EnVase* self = (EnVase*)actor;
    MTX34 modelMtx;

    MTX34CopyAsm(&modelMtx, &self->actor.modelMtx);
    if (self->skelAnimModel != NULL) {
        self->skelAnimModel->SetUnkAC(1);
        self->skelAnimModel->FUN_003721e0(&modelMtx);
        self->skelAnimModel->FUN_00372170(0);
    }
}
}
