extern "C" {
#include "z_demo_du.hpp"

#define FLAGS 0x00000010

void DemoDu_Init(Actor* actor, GameState* state);
void DemoDu_Destroy(Actor* actor, GameState* state);
void DemoDu_Update(Actor* actor, GameState* state);
void DemoDu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Du.data.s")

ActorInit Demo_Du_InitVars = {
    ACTOR_DEMO_DU,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DU,
    sizeof(DemoDu),
    (ActorFunc)DemoDu_Init,
    (ActorFunc)DemoDu_Destroy,
    (ActorFunc)DemoDu_Update,
    (ActorFunc)DemoDu_Draw,
};

GLOBAL_ASM("asm/DemoDu_Init.s")

GLOBAL_ASM("asm/DemoDu_Destroy.s")

GLOBAL_ASM("asm/DemoDu_Update.s")

GLOBAL_ASM("asm/DemoDu_Draw.s")
}
