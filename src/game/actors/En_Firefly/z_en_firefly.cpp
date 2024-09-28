extern "C" {
#include "z_en_firefly.hpp"

#define FLAGS 0x00005005

void EnFirefly_Init(Actor* actor, GameState* state);
void EnFirefly_Destroy(Actor* actor, GameState* state);
void EnFirefly_Update(Actor* actor, GameState* state);
void EnFirefly_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Firefly.data.s")

ActorInit En_Firefly_InitVars = {
    ACTOR_EN_FIREFLY,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_FIREFLY,
    sizeof(EnFirefly),
    (ActorFunc)EnFirefly_Init,
    (ActorFunc)EnFirefly_Destroy,
    (ActorFunc)EnFirefly_Update,
    (ActorFunc)EnFirefly_Draw,
};

GLOBAL_ASM("asm/EnFirefly_Init.s")

GLOBAL_ASM("asm/EnFirefly_Destroy.s")

GLOBAL_ASM("asm/EnFirefly_Update.s")

GLOBAL_ASM("asm/EnFirefly_Draw.s")
}
