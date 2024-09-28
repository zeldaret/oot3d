extern "C" {
#include "z_en_zl1.hpp"

#define FLAGS 0x00000019

void EnZl1_Init(Actor* actor, GameState* state);
void EnZl1_Destroy(Actor* actor, GameState* state);
void EnZl1_Update(Actor* actor, GameState* state);
void EnZl1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Zl1.data.s")

ActorInit En_Zl1_InitVars = {
    ACTOR_EN_ZL1,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZL1,
    sizeof(EnZl1),
    (ActorFunc)EnZl1_Init,
    (ActorFunc)EnZl1_Destroy,
    (ActorFunc)EnZl1_Update,
    (ActorFunc)EnZl1_Draw,
};

GLOBAL_ASM("asm/EnZl1_Init.s")

GLOBAL_ASM("asm/EnZl1_Destroy.s")

GLOBAL_ASM("asm/EnZl1_Update.s")

GLOBAL_ASM("asm/EnZl1_Draw.s")
}
