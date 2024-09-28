extern "C" {
#include "z_demo_ik.hpp"

#define FLAGS 0x00000010

void DemoIk_Init(Actor* actor, GameState* state);
void DemoIk_Destroy(Actor* actor, GameState* state);
void DemoIk_Update(Actor* actor, GameState* state);
void DemoIk_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Ik.data.s")

ActorInit Demo_Ik_InitVars = {
    ACTOR_DEMO_IK,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_IK,
    sizeof(DemoIk),
    (ActorFunc)DemoIk_Init,
    (ActorFunc)DemoIk_Destroy,
    (ActorFunc)DemoIk_Update,
    (ActorFunc)DemoIk_Draw,
};

GLOBAL_ASM("asm/DemoIk_Init.s")

GLOBAL_ASM("asm/DemoIk_Destroy.s")

GLOBAL_ASM("asm/DemoIk_Update.s")

GLOBAL_ASM("asm/DemoIk_Draw.s")
}
