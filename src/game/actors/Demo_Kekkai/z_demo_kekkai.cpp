extern "C" {
#include "z_demo_kekkai.hpp"

#define FLAGS 0x00000030

void DemoKekkai_Init(Actor* actor, GameState* state);
void DemoKekkai_Destroy(Actor* actor, GameState* state);
void DemoKekkai_Update(Actor* actor, GameState* state);
void DemoKekkai_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Kekkai.data.s")

ActorInit Demo_Kekkai_InitVars = {
    ACTOR_DEMO_KEKKAI,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(DemoKekkai),
    (ActorFunc)DemoKekkai_Init,
    (ActorFunc)DemoKekkai_Destroy,
    (ActorFunc)DemoKekkai_Update,
    (ActorFunc)DemoKekkai_Draw,
};

GLOBAL_ASM("asm/DemoKekkai_Init.s")

GLOBAL_ASM("asm/DemoKekkai_Destroy.s")

GLOBAL_ASM("asm/DemoKekkai_Update.s")

GLOBAL_ASM("asm/DemoKekkai_Draw.s")
}
