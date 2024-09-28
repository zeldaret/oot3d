extern "C" {
#include "z_en_hy.hpp"

#define FLAGS 0x00000019

void EnHy_Init(Actor* actor, GameState* state);
void EnHy_Destroy(Actor* actor, GameState* state);
void EnHy_Update(Actor* actor, GameState* state);
void EnHy_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Hy.data.s")

ActorInit En_Hy_InitVars = {
    ACTOR_EN_HY,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnHy),
    (ActorFunc)EnHy_Init,
    (ActorFunc)EnHy_Destroy,
    (ActorFunc)EnHy_Update,
    (ActorFunc)EnHy_Draw,
};

GLOBAL_ASM("asm/EnHy_Init.s")

GLOBAL_ASM("asm/EnHy_Destroy.s")

GLOBAL_ASM("asm/EnHy_Update.s")

GLOBAL_ASM("asm/EnHy_Draw.s")
}
