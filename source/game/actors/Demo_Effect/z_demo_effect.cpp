extern "C" {
#include "z_demo_effect.hpp"

#define FLAGS 0x00000030

void DemoEffect_Init(Actor* actor, GameState* state);
void DemoEffect_Destroy(Actor* actor, GameState* state);
void DemoEffect_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Effect.data.s")

ActorInit Demo_Effect_InitVars = {
    ACTOR_DEMO_EFFECT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(DemoEffect),
    (ActorFunc)DemoEffect_Init,
    (ActorFunc)DemoEffect_Destroy,
    (ActorFunc)DemoEffect_Update,
    NULL,
};

GLOBAL_ASM("asm/DemoEffect_Init.s")

GLOBAL_ASM("asm/DemoEffect_Destroy.s")

GLOBAL_ASM("asm/DemoEffect_Update.s")
}
