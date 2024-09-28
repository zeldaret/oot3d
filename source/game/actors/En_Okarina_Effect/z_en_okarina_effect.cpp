extern "C" {
#include "z_en_okarina_effect.hpp"

#define FLAGS 0x02000010

void EnOkarinaEffect_Init(Actor* actor, GameState* state);
void EnOkarinaEffect_Destroy(Actor* actor, GameState* state);
void EnOkarinaEffect_Update(Actor* actor, GameState* state);

ActorInit En_Okarina_Effect_InitVars = {
    ACTOR_EN_OKARINA_EFFECT,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnOkarinaEffect),
    (ActorFunc)EnOkarinaEffect_Init,
    (ActorFunc)EnOkarinaEffect_Destroy,
    (ActorFunc)EnOkarinaEffect_Update,
    NULL,
};

GLOBAL_ASM("asm/EnOkarinaEffect_Init.s")

GLOBAL_ASM("asm/EnOkarinaEffect_Destroy.s")

GLOBAL_ASM("asm/EnOkarinaEffect_Update.s")
}
