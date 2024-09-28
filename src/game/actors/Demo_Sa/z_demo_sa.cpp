extern "C" {
#include "z_demo_sa.hpp"

#define FLAGS 0x00000010

void DemoSa_Init(Actor* actor, GameState* state);
void DemoSa_Destroy(Actor* actor, GameState* state);
void DemoSa_Update(Actor* actor, GameState* state);
void DemoSa_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Sa.data.s")

ActorInit Demo_Sa_InitVars = {
    ACTOR_DEMO_SA,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_SA,
    sizeof(DemoSa),
    (ActorFunc)DemoSa_Init,
    (ActorFunc)DemoSa_Destroy,
    (ActorFunc)DemoSa_Update,
    (ActorFunc)DemoSa_Draw,
};

GLOBAL_ASM("asm/DemoSa_Init.s")

GLOBAL_ASM("asm/DemoSa_Destroy.s")

GLOBAL_ASM("asm/DemoSa_Update.s")

GLOBAL_ASM("asm/DemoSa_Draw.s")
}
