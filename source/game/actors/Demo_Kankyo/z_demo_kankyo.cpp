extern "C" {
#include "z_demo_kankyo.hpp"

#define FLAGS 0x00000030

void DemoKankyo_Init(Actor* actor, GameState* state);
void DemoKankyo_Destroy(Actor* actor, GameState* state);
void DemoKankyo_Update(Actor* actor, GameState* state);
void DemoKankyo_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Kankyo.data.s")

ActorInit Demo_Kankyo_InitVars = {
    ACTOR_DEMO_KANKYO,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(DemoKankyo),
    (ActorFunc)DemoKankyo_Init,
    (ActorFunc)DemoKankyo_Destroy,
    (ActorFunc)DemoKankyo_Update,
    (ActorFunc)DemoKankyo_Draw,
};

GLOBAL_ASM("asm/DemoKankyo_Init.s")

GLOBAL_ASM("asm/DemoKankyo_Destroy.s")

GLOBAL_ASM("asm/DemoKankyo_Update.s")

GLOBAL_ASM("asm/DemoKankyo_Draw.s")
}
