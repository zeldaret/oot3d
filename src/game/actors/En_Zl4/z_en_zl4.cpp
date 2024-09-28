extern "C" {
#include "z_en_zl4.hpp"

#define FLAGS 0x00000019

void EnZl4_Init(Actor* actor, GameState* state);
void EnZl4_Destroy(Actor* actor, GameState* state);
void EnZl4_Update(Actor* actor, GameState* state);
void EnZl4_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Zl4.data.s")

ActorInit En_Zl4_InitVars = {
    ACTOR_EN_ZL4,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZL4,
    sizeof(EnZl4),
    (ActorFunc)EnZl4_Init,
    (ActorFunc)EnZl4_Destroy,
    (ActorFunc)EnZl4_Update,
    (ActorFunc)EnZl4_Draw,
};

GLOBAL_ASM("asm/EnZl4_Init.s")

GLOBAL_ASM("asm/EnZl4_Destroy.s")

GLOBAL_ASM("asm/EnZl4_Update.s")

GLOBAL_ASM("asm/EnZl4_Draw.s")
}
