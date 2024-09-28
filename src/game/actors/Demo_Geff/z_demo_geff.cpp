extern "C" {
#include "z_demo_geff.hpp"

#define FLAGS 0x00000030

void DemoGeff_Init(Actor* actor, GameState* state);
void DemoGeff_Destroy(Actor* actor, GameState* state);
void DemoGeff_Update(Actor* actor, GameState* state);
void DemoGeff_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Geff.data.s")

ActorInit Demo_Geff_InitVars = {
    ACTOR_DEMO_GEFF,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GEFF,
    sizeof(DemoGeff),
    (ActorFunc)DemoGeff_Init,
    (ActorFunc)DemoGeff_Destroy,
    (ActorFunc)DemoGeff_Update,
    (ActorFunc)DemoGeff_Draw,
};

GLOBAL_ASM("asm/DemoGeff_Init.s")

GLOBAL_ASM("asm/DemoGeff_Destroy.s")

GLOBAL_ASM("asm/DemoGeff_Update.s")

GLOBAL_ASM("asm/DemoGeff_Draw.s")
}
