extern "C" {
#include "z_demo_shd.hpp"

#define FLAGS 0x00000030

void DemoShd_Init(Actor* actor, GameState* state);
void DemoShd_Destroy(Actor* actor, GameState* state);
void DemoShd_Update(Actor* actor, GameState* state);
void DemoShd_Draw(Actor* actor, GameState* state);

ActorInit Demo_Shd_InitVars = {
    ACTOR_DEMO_SHD,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(DemoShd),
    (ActorFunc)DemoShd_Init,
    (ActorFunc)DemoShd_Destroy,
    (ActorFunc)DemoShd_Update,
    (ActorFunc)DemoShd_Draw,
};

GLOBAL_ASM("asm/DemoShd_Init.s")

GLOBAL_ASM("asm/DemoShd_Destroy.s")

GLOBAL_ASM("asm/DemoShd_Update.s")

GLOBAL_ASM("asm/DemoShd_Draw.s")
}
