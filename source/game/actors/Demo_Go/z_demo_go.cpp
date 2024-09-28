extern "C" {
#include "z_demo_go.hpp"

#define FLAGS 0x00000010

void DemoGo_Init(Actor* actor, GameState* state);
void DemoGo_Destroy(Actor* actor, GameState* state);
void DemoGo_Update(Actor* actor, GameState* state);
void DemoGo_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Go.data.s")

ActorInit Demo_Go_InitVars = {
    ACTOR_DEMO_GO,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OF1D_MAP,
    sizeof(DemoGo),
    (ActorFunc)DemoGo_Init,
    (ActorFunc)DemoGo_Destroy,
    (ActorFunc)DemoGo_Update,
    (ActorFunc)DemoGo_Draw,
};

GLOBAL_ASM("asm/DemoGo_Init.s")

GLOBAL_ASM("asm/DemoGo_Destroy.s")

GLOBAL_ASM("asm/DemoGo_Update.s")

GLOBAL_ASM("asm/DemoGo_Draw.s")
}
