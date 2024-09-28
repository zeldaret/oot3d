extern "C" {
#include "z_en_heishi1.hpp"

#define FLAGS 0x00000010

void EnHeishi1_Init(Actor* actor, GameState* state);
void EnHeishi1_Destroy(Actor* actor, GameState* state);
void EnHeishi1_Update(Actor* actor, GameState* state);
void EnHeishi1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Heishi1.data.s")

ActorInit En_Heishi1_InitVars = {
    ACTOR_PLAYER,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_SD,
    sizeof(EnHeishi1),
    (ActorFunc)EnHeishi1_Init,
    (ActorFunc)EnHeishi1_Destroy,
    (ActorFunc)EnHeishi1_Update,
    (ActorFunc)EnHeishi1_Draw,
};

GLOBAL_ASM("asm/EnHeishi1_Init.s")

GLOBAL_ASM("asm/EnHeishi1_Destroy.s")

GLOBAL_ASM("asm/EnHeishi1_Update.s")

GLOBAL_ASM("asm/EnHeishi1_Draw.s")
}
