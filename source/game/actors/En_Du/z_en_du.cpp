extern "C" {
#include "z_en_du.hpp"

#define FLAGS 0x02000009

void EnDu_Init(Actor* actor, GameState* state);
void EnDu_Destroy(Actor* actor, GameState* state);
void EnDu_Update(Actor* actor, GameState* state);
void EnDu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Du.data.s")

ActorInit En_Du_InitVars = {
    ACTOR_EN_DU,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DU,
    sizeof(EnDu),
    (ActorFunc)EnDu_Init,
    (ActorFunc)EnDu_Destroy,
    (ActorFunc)EnDu_Update,
    (ActorFunc)EnDu_Draw,
};

GLOBAL_ASM("asm/EnDu_Init.s")

GLOBAL_ASM("asm/EnDu_Destroy.s")

GLOBAL_ASM("asm/EnDu_Update.s")

GLOBAL_ASM("asm/EnDu_Draw.s")
}
