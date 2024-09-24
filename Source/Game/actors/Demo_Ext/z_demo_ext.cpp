extern "C" {
#include "z_demo_ext.hpp"

#define FLAGS 0x80000010

void DemoExt_Init(Actor* actor, GameState* state);
void DemoExt_Destroy(Actor* actor, GameState* state);
void DemoExt_Update(Actor* actor, GameState* state);
void DemoExt_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Ext.data.s")

ActorInit Demo_Ext_InitVars = {
    ACTOR_DEMO_EXT,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_FHG,
    sizeof(DemoExt),
    (ActorFunc)DemoExt_Init,
    (ActorFunc)DemoExt_Destroy,
    (ActorFunc)DemoExt_Update,
    (ActorFunc)DemoExt_Draw,
};

GLOBAL_ASM("asm/DemoExt_Init.s")

GLOBAL_ASM("asm/DemoExt_Destroy.s")

GLOBAL_ASM("asm/DemoExt_Update.s")

GLOBAL_ASM("asm/DemoExt_Draw.s")
}
