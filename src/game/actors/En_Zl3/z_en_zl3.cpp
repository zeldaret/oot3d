extern "C" {
#include "z_en_zl3.hpp"

#define FLAGS 0x00000010

void EnZl3_Init(Actor* actor, GameState* state);
void EnZl3_Destroy(Actor* actor, GameState* state);
void EnZl3_Update(Actor* actor, GameState* state);
void EnZl3_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Zl3.data.s")

ActorInit En_Zl3_InitVars = {
    ACTOR_EN_ZL3,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZL2,
    sizeof(EnZl3),
    (ActorFunc)EnZl3_Init,
    (ActorFunc)EnZl3_Destroy,
    (ActorFunc)EnZl3_Update,
    (ActorFunc)EnZl3_Draw,
};

GLOBAL_ASM("asm/EnZl3_Init.s")

GLOBAL_ASM("asm/EnZl3_Destroy.s")

GLOBAL_ASM("asm/EnZl3_Update.s")

GLOBAL_ASM("asm/EnZl3_Draw.s")
}
