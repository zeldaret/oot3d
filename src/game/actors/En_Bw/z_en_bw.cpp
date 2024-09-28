extern "C" {
#include "z_en_bw.hpp"

#define FLAGS 0x00000015

void EnBw_Init(Actor* actor, GameState* state);
void EnBw_Destroy(Actor* actor, GameState* state);
void EnBw_Update(Actor* actor, GameState* state);
void EnBw_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bw.data.s")

ActorInit En_Bw_InitVars = {
    ACTOR_EN_BW,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BW,
    sizeof(EnBw),
    (ActorFunc)EnBw_Init,
    (ActorFunc)EnBw_Destroy,
    (ActorFunc)EnBw_Update,
    (ActorFunc)EnBw_Draw,
};

GLOBAL_ASM("asm/EnBw_Init.s")

GLOBAL_ASM("asm/EnBw_Destroy.s")

GLOBAL_ASM("asm/EnBw_Update.s")

GLOBAL_ASM("asm/EnBw_Draw.s")
}
