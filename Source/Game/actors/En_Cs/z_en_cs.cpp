extern "C" {
#include "z_en_cs.hpp"

#define FLAGS 0x00000009

void EnCs_Init(Actor* actor, GameState* state);
void EnCs_Destroy(Actor* actor, GameState* state);
void EnCs_Update(Actor* actor, GameState* state);
void EnCs_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Cs.data_00521B74.s")
GLOBAL_ASM("data/z_En_Cs.data_00521B98.s")

ActorInit En_Cs_InitVars = {
    ACTOR_EN_CS,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_CS,
    sizeof(EnCs),
    (ActorFunc)EnCs_Init,
    (ActorFunc)EnCs_Destroy,
    (ActorFunc)EnCs_Update,
    (ActorFunc)EnCs_Draw,
};

GLOBAL_ASM("asm/EnCs_Init.s")

GLOBAL_ASM("asm/EnCs_Destroy.s")

GLOBAL_ASM("asm/EnCs_Update.s")

GLOBAL_ASM("asm/EnCs_Draw.s")
}
