extern "C" {
#include "z_en_dh.hpp"

#define FLAGS 0x00000415

void EnDh_Init(Actor* actor, GameState* state);
void EnDh_Destroy(Actor* actor, GameState* state);
void EnDh_Update(Actor* actor, GameState* state);
void EnDh_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dh.data.s")

ActorInit En_Dh_InitVars = {
    ACTOR_EN_DH,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_DH,
    sizeof(EnDh),
    (ActorFunc)EnDh_Init,
    (ActorFunc)EnDh_Destroy,
    (ActorFunc)EnDh_Update,
    (ActorFunc)EnDh_Draw,
};

GLOBAL_ASM("asm/EnDh_Init.s")

GLOBAL_ASM("asm/EnDh_Destroy.s")

GLOBAL_ASM("asm/EnDh_Update.s")

GLOBAL_ASM("asm/EnDh_Draw.s")
}
