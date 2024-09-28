extern "C" {
#include "z_en_reeba.hpp"

#define FLAGS 0x08000015

void EnReeba_Init(Actor* actor, GameState* state);
void EnReeba_Destroy(Actor* actor, GameState* state);
void EnReeba_Update(Actor* actor, GameState* state);
void EnReeba_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Reeba.data.s")

ActorInit En_Reeba_InitVars = {
    ACTOR_EN_REEBA,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_REEBA,
    sizeof(EnReeba),
    (ActorFunc)EnReeba_Init,
    (ActorFunc)EnReeba_Destroy,
    (ActorFunc)EnReeba_Update,
    (ActorFunc)EnReeba_Draw,
};

GLOBAL_ASM("asm/EnReeba_Init.s")

GLOBAL_ASM("asm/EnReeba_Destroy.s")

GLOBAL_ASM("asm/EnReeba_Update.s")

GLOBAL_ASM("asm/EnReeba_Draw.s")
}
