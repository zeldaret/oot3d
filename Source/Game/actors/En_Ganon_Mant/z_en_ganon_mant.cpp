extern "C" {
#include "z_en_ganon_mant.hpp"

#define FLAGS 0x00000030

void EnGanonMant_Init(Actor* actor, GameState* state);
void EnGanonMant_Destroy(Actor* actor, GameState* state);
void EnGanonMant_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ganon_Mant.data.s")

ActorInit En_Ganon_Mant_InitVars = {
    ACTOR_EN_GANON_MANT,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnGanonMant),
    (ActorFunc)EnGanonMant_Init,
    (ActorFunc)EnGanonMant_Destroy,
    (ActorFunc)EnGanonMant_Update,
    NULL,
};

GLOBAL_ASM("asm/EnGanonMant_Init.s")

GLOBAL_ASM("asm/EnGanonMant_Destroy.s")

GLOBAL_ASM("asm/EnGanonMant_Update.s")
}
