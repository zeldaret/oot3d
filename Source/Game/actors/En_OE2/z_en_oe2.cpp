extern "C" {
#include "z_en_oe2.hpp"

#define FLAGS 0x00000009

void EnOE2_Init(Actor* actor, GameState* state);
void EnOE2_Destroy(Actor* actor, GameState* state);
void EnOE2_Update(Actor* actor, GameState* state);
void EnOE2_Draw(Actor* actor, GameState* state);

void EnOE2_DoNothing(EnOE2* self, PlayState* play);

ActorInit En_OE2_InitVars = {
    ACTOR_EN_OE2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OE2,
    sizeof(EnOE2),
    (ActorFunc)EnOE2_Init,
    (ActorFunc)EnOE2_Destroy,
    (ActorFunc)EnOE2_Update,
    (ActorFunc)EnOE2_Draw,
};

static void EnOE2_SetupAction(EnOE2* self, EnOE2ActionFunc actionFunc) {
    self->actionFunc = actionFunc;
}

void EnOE2_Init(Actor* actor, GameState* state) {
    EnOE2* self = (EnOE2*)actor;

    EnOE2_SetupAction(self, EnOE2_DoNothing);
}

void EnOE2_Destroy(Actor* actor, GameState* state) {
}

void EnOE2_DoNothing(EnOE2* self, PlayState* play) {
}

void EnOE2_Update(Actor* actor, GameState* state) {
}

void EnOE2_Draw(Actor* actor, GameState* state) {
}
}
