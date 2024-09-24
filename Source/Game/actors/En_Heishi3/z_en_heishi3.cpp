extern "C" {
#include "z_en_heishi3.hpp"

#define FLAGS 0x00000000

void EnHeishi3_Init(Actor* actor, GameState* state);
void EnHeishi3_Destroy(Actor* actor, GameState* state);
void EnHeishi3_Update(Actor* actor, GameState* state);
void EnHeishi3_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Heishi3.data.s")

ActorInit En_Heishi3_InitVars = {
    ACTOR_EN_HEISHI3,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_SD,
    sizeof(EnHeishi3),
    (ActorFunc)EnHeishi3_Init,
    (ActorFunc)EnHeishi3_Destroy,
    (ActorFunc)EnHeishi3_Update,
    (ActorFunc)EnHeishi3_Draw,
};

GLOBAL_ASM("asm/EnHeishi3_Init.s")

GLOBAL_ASM("asm/EnHeishi3_Destroy.s")

GLOBAL_ASM("asm/EnHeishi3_Update.s")

GLOBAL_ASM("asm/EnHeishi3_Draw.s")
}
