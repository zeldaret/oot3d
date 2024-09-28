extern "C" {
#include "z_en_rd.hpp"

#define FLAGS 0x00000415

void EnRd_Init(Actor* actor, GameState* state);
void EnRd_Destroy(Actor* actor, GameState* state);
void EnRd_Update(Actor* actor, GameState* state);
void EnRd_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Rd.data.s")

ActorInit En_Rd_InitVars = {
    ACTOR_EN_RD,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_RD,
    sizeof(EnRd),
    (ActorFunc)EnRd_Init,
    (ActorFunc)EnRd_Destroy,
    (ActorFunc)EnRd_Update,
    (ActorFunc)EnRd_Draw,
};

GLOBAL_ASM("asm/EnRd_Init.s")

GLOBAL_ASM("asm/EnRd_Destroy.s")

GLOBAL_ASM("asm/EnRd_Update.s")

GLOBAL_ASM("asm/EnRd_Draw.s")
}
