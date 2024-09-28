extern "C" {
#include "z_en_nutsball.hpp"

#define FLAGS 0x00000010

void EnNutsball_Init(Actor* actor, GameState* state);
void EnNutsball_Destroy(Actor* actor, GameState* state);
void EnNutsball_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Nutsball.data.s")

ActorInit En_Nutsball_InitVars = {
    ACTOR_EN_NUTSBALL,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnNutsball),
    (ActorFunc)EnNutsball_Init,
    (ActorFunc)EnNutsball_Destroy,
    (ActorFunc)EnNutsball_Update,
    NULL,
};

GLOBAL_ASM("asm/EnNutsball_Init.s")

GLOBAL_ASM("asm/EnNutsball_Destroy.s")

GLOBAL_ASM("asm/EnNutsball_Update.s")
}
