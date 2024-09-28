extern "C" {
#include "z_en_bx.hpp"

#define FLAGS 0x00000010

void EnBx_Init(Actor* actor, GameState* state);
void EnBx_Destroy(Actor* actor, GameState* state);
void EnBx_Update(Actor* actor, GameState* state);
void EnBx_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bx.data.s")

ActorInit En_Bx_InitVars = {
    ACTOR_EN_BX,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BXA,
    sizeof(EnBx),
    (ActorFunc)EnBx_Init,
    (ActorFunc)EnBx_Destroy,
    (ActorFunc)EnBx_Update,
    (ActorFunc)EnBx_Draw,
};

GLOBAL_ASM("asm/EnBx_Init.s")

GLOBAL_ASM("asm/EnBx_Destroy.s")

GLOBAL_ASM("asm/EnBx_Update.s")

GLOBAL_ASM("asm/EnBx_Draw.s")
}
