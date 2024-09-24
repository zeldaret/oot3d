extern "C" {
#include "z_en_gm.hpp"

#define FLAGS 0x00000019

void EnGm_Init(Actor* actor, GameState* state);
void EnGm_Destroy(Actor* actor, GameState* state);
void EnGm_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Gm.data.s")

ActorInit En_Gm_InitVars = {
    ACTOR_EN_GM,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GM,
    sizeof(EnGm),
    (ActorFunc)EnGm_Init,
    (ActorFunc)EnGm_Destroy,
    (ActorFunc)EnGm_Update,
    NULL,
};

GLOBAL_ASM("asm/EnGm_Init.s")

GLOBAL_ASM("asm/EnGm_Destroy.s")

GLOBAL_ASM("asm/EnGm_Update.s")
}
