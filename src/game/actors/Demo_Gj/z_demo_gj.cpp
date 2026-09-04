extern "C" {
#include "z_demo_gj.hpp"

#define FLAGS 0x00400030

void DemoGj_Init(Actor* actor, GameState* state);
void DemoGj_Destroy(Actor* actor, GameState* state);
void DemoGj_Update(Actor* actor, GameState* state);
void DemoGj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Demo_Gj.data.s")

ActorInit Demo_Gj_InitVars = {
    ACTOR_DEMO_GJ,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GJ,
    sizeof(DemoGj),
    (ActorFunc)DemoGj_Init,
    (ActorFunc)DemoGj_Destroy,
    (ActorFunc)DemoGj_Update,
    (ActorFunc)DemoGj_Draw,
};

GLOBAL_ASM("asm/DemoGj_Init.s")

GLOBAL_ASM("asm/DemoGj_Destroy.s")

GLOBAL_ASM("asm/DemoGj_Update.s")

GLOBAL_ASM("asm/DemoGj_Draw.s")

GLOBAL_ASM("asm/DemoGj_InitSetIndexes.s")

GLOBAL_ASM("asm/DemoGj_SetupMovement.s")

GLOBAL_ASM("asm/DemoGj_SetupRotation.s")

GLOBAL_ASM("asm/caseD_8_0037cc94.s")

GLOBAL_ASM("asm/caseD_9_0037cd38.s")

GLOBAL_ASM("asm/caseD_a_0037cddc.s")

GLOBAL_ASM("asm/caseD_b_0037ce80.s")

GLOBAL_ASM("asm/caseD_c_0037cf24.s")

GLOBAL_ASM("asm/caseD_d_0037cfc8.s")

GLOBAL_ASM("asm/caseD_e_0037d06c.s")

}
