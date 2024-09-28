extern "C" {
#include "z_en_am.hpp"

#define FLAGS 0x84000015

void EnAm_Init(Actor* actor, GameState* state);
void EnAm_Destroy(Actor* actor, GameState* state);
void EnAm_Update(Actor* actor, GameState* state);
void EnAm_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Am.data.s")

ActorInit En_Am_InitVars = {
    ACTOR_EN_AM,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_AM,
    sizeof(EnAm),
    (ActorFunc)EnAm_Init,
    (ActorFunc)EnAm_Destroy,
    (ActorFunc)EnAm_Update,
    (ActorFunc)EnAm_Draw,
};

GLOBAL_ASM("asm/EnAm_Init.s")

GLOBAL_ASM("asm/EnAm_Destroy.s")

GLOBAL_ASM("asm/EnAm_Update.s")

GLOBAL_ASM("asm/EnAm_Draw.s")
}
