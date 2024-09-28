extern "C" {
#include "z_en_zf.hpp"

#define FLAGS 0x00000015

void EnZf_Init(Actor* actor, GameState* state);
void EnZf_Destroy(Actor* actor, GameState* state);
void EnZf_Update(Actor* actor, GameState* state);
void EnZf_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Zf.data.s")

ActorInit En_Zf_InitVars = {
    ACTOR_EN_ZF,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_ZF,
    sizeof(EnZf),
    (ActorFunc)EnZf_Init,
    (ActorFunc)EnZf_Destroy,
    (ActorFunc)EnZf_Update,
    (ActorFunc)EnZf_Draw,
};

GLOBAL_ASM("asm/EnZf_Init.s")

GLOBAL_ASM("asm/EnZf_Destroy.s")

GLOBAL_ASM("asm/EnZf_Update.s")

GLOBAL_ASM("asm/EnZf_Draw.s")
}
