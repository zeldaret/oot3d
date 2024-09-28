extern "C" {
#include "z_en_nwc.hpp"

#define FLAGS 0x00000030

void EnNwc_Init(Actor* actor, GameState* state);
void EnNwc_Destroy(Actor* actor, GameState* state);
void EnNwc_Update(Actor* actor, GameState* state);
void EnNwc_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Nwc.data.s")

ActorInit En_Nwc_InitVars = {
    ACTOR_EN_NWC,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_NWC,
    sizeof(EnNwc),
    (ActorFunc)EnNwc_Init,
    (ActorFunc)EnNwc_Destroy,
    (ActorFunc)EnNwc_Update,
    (ActorFunc)EnNwc_Draw,
};

GLOBAL_ASM("asm/EnNwc_Init.s")

GLOBAL_ASM("asm/EnNwc_Destroy.s")

GLOBAL_ASM("asm/EnNwc_Update.s")

GLOBAL_ASM("asm/EnNwc_Draw.s")
}
