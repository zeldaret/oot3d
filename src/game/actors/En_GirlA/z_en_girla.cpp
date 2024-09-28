extern "C" {
#include "z_en_girla.hpp"

#define FLAGS 0x00000019

void EnGirlA_Init(Actor* actor, GameState* state);
void EnGirlA_Destroy(Actor* actor, GameState* state);
void EnGirlA_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_GirlA.data.s")

ActorInit En_GirlA_InitVars = {
    ACTOR_EN_GIRLA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnGirlA),
    (ActorFunc)EnGirlA_Init,
    (ActorFunc)EnGirlA_Destroy,
    (ActorFunc)EnGirlA_Update,
    NULL,
};

GLOBAL_ASM("asm/EnGirlA_Init.s")

GLOBAL_ASM("asm/EnGirlA_Destroy.s")

GLOBAL_ASM("asm/EnGirlA_Update.s")
}
