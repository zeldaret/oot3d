extern "C" {
#include "z_en_st.hpp"

#define FLAGS 0x00000035

void EnSt_Init(Actor* actor, GameState* state);
void EnSt_Destroy(Actor* actor, GameState* state);
void EnSt_Update(Actor* actor, GameState* state);
void EnSt_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_St.data.s")

ActorInit En_St_InitVars = {
    ACTOR_EN_ST,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_ST,
    sizeof(EnSt),
    (ActorFunc)EnSt_Init,
    (ActorFunc)EnSt_Destroy,
    (ActorFunc)EnSt_Update,
    (ActorFunc)EnSt_Draw,
};

GLOBAL_ASM("asm/EnSt_Init.s")

GLOBAL_ASM("asm/EnSt_Destroy.s")

GLOBAL_ASM("asm/EnSt_Update.s")

GLOBAL_ASM("asm/EnSt_Draw.s")
}
