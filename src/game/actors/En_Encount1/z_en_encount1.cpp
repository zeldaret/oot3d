extern "C" {
#include "z_en_encount1.hpp"

#define FLAGS 0x88000010

void EnEncount1_Init(Actor* actor, GameState* state);
void EnEncount1_Destroy(Actor* actor, GameState* state);
void EnEncount1_Update(Actor* actor, GameState* state);

ActorInit En_Encount1_InitVars = {
    ACTOR_EN_ENCOUNT1,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnEncount1),
    (ActorFunc)EnEncount1_Init,
    (ActorFunc)EnEncount1_Destroy,
    (ActorFunc)EnEncount1_Update,
    NULL,
};

GLOBAL_ASM("asm/EnEncount1_Init.s")

GLOBAL_ASM("asm/EnEncount1_Destroy.s")

GLOBAL_ASM("asm/EnEncount1_Update.s")
}
