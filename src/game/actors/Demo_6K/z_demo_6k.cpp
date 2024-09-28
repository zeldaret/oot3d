extern "C" {
#include "z_demo_6k.hpp"

#define FLAGS 0x00000010

void Demo6K_Init(Actor* actor, GameState* state);
void Demo6K_Destroy(Actor* actor, GameState* state);
void Demo6K_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_6K.data.s")

ActorInit Demo_6K_InitVars = {
    ACTOR_DEMO_6K,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(Demo6K),
    (ActorFunc)Demo6K_Init,
    (ActorFunc)Demo6K_Destroy,
    (ActorFunc)Demo6K_Update,
    NULL,
};

GLOBAL_ASM("asm/Demo6K_Init.s")

GLOBAL_ASM("asm/Demo6K_Destroy.s")

GLOBAL_ASM("asm/Demo6K_Update.s")
}
