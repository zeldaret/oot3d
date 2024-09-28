extern "C" {
#include "z_en_heishi2.hpp"

#define FLAGS 0x00000009

void EnHeishi2_Init(Actor* actor, GameState* state);
void EnHeishi2_Destroy(Actor* actor, GameState* state);
void EnHeishi2_Update(Actor* actor, GameState* state);
void EnHeishi2_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Heishi2.data.s")

ActorInit En_Heishi2_InitVars = {
    ACTOR_EN_HEISHI2,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_SD,
    sizeof(EnHeishi2),
    (ActorFunc)EnHeishi2_Init,
    (ActorFunc)EnHeishi2_Destroy,
    (ActorFunc)EnHeishi2_Update,
    (ActorFunc)EnHeishi2_Draw,
};

GLOBAL_ASM("asm/EnHeishi2_Init.s")

GLOBAL_ASM("asm/EnHeishi2_Destroy.s")

GLOBAL_ASM("asm/EnHeishi2_Update.s")

GLOBAL_ASM("asm/EnHeishi2_Draw.s")
}
