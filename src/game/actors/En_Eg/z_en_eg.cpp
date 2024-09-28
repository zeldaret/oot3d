extern "C" {
#include "z_en_eg.hpp"

#define FLAGS 0x00000010

void EnEg_Init(Actor* actor, GameState* state);
void EnEg_Destroy(Actor* actor, GameState* state);
void EnEg_Update(Actor* actor, GameState* state);
void EnEg_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Eg.data.s")

ActorInit En_Eg_InitVars = {
    ACTOR_EN_EG,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_ZL2,
    sizeof(EnEg),
    (ActorFunc)EnEg_Init,
    (ActorFunc)EnEg_Destroy,
    (ActorFunc)EnEg_Update,
    (ActorFunc)EnEg_Draw,
};

GLOBAL_ASM("asm/EnEg_Init.s")

GLOBAL_ASM("asm/EnEg_Destroy.s")

GLOBAL_ASM("asm/EnEg_Update.s")

GLOBAL_ASM("asm/EnEg_Draw.s")
}
