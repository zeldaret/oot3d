extern "C" {
#include "z_en_wf.hpp"

#define FLAGS 0x00000015

void EnWf_Init(Actor* actor, GameState* state);
void EnWf_Destroy(Actor* actor, GameState* state);
void EnWf_Update(Actor* actor, GameState* state);
void EnWf_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Wf.data.s")

ActorInit En_Wf_InitVars = {
    ACTOR_EN_WF,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_WF,
    sizeof(EnWf),
    (ActorFunc)EnWf_Init,
    (ActorFunc)EnWf_Destroy,
    (ActorFunc)EnWf_Update,
    (ActorFunc)EnWf_Draw,
};

GLOBAL_ASM("asm/EnWf_Init.s")

GLOBAL_ASM("asm/EnWf_Destroy.s")

GLOBAL_ASM("asm/EnWf_Update.s")

GLOBAL_ASM("asm/EnWf_Draw.s")
}
