extern "C" {
#include "z_en_sw.hpp"

#define FLAGS 0x00000035

void EnSw_Init(Actor* actor, GameState* state);
void EnSw_Destroy(Actor* actor, GameState* state);
void EnSw_Update(Actor* actor, GameState* state);
void EnSw_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Sw.data_0052F258.s")
GLOBAL_ASM("data/z_En_Sw.data_0052F300.s")

ActorInit En_Sw_InitVars = {
    ACTOR_EN_SW,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ST,
    sizeof(EnSw),
    (ActorFunc)EnSw_Init,
    (ActorFunc)EnSw_Destroy,
    (ActorFunc)EnSw_Update,
    (ActorFunc)EnSw_Draw,
};

GLOBAL_ASM("asm/EnSw_Init.s")

GLOBAL_ASM("asm/EnSw_Destroy.s")

GLOBAL_ASM("asm/EnSw_Update.s")

GLOBAL_ASM("asm/EnSw_Draw.s")
}
