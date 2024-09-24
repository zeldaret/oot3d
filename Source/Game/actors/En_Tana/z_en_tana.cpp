extern "C" {
#include "z_en_tana.hpp"

#define FLAGS 0x80400009

void EnTana_Init(Actor* actor, GameState* state);
void EnTana_Destroy(Actor* actor, GameState* state);
void EnTana_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Tana.data.s")

ActorInit En_Tana_InitVars = {
    ACTOR_EN_TANA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SHOP_DUNGEN,
    sizeof(EnTana),
    (ActorFunc)EnTana_Init,
    (ActorFunc)EnTana_Destroy,
    (ActorFunc)EnTana_Update,
    NULL,
};

GLOBAL_ASM("asm/EnTana_Init.s")

GLOBAL_ASM("asm/EnTana_Destroy.s")

GLOBAL_ASM("asm/EnTana_Update.s")
}
