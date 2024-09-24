extern "C" {
#include "z_en_rr.hpp"

#define FLAGS 0x00000435

void EnRr_Init(Actor* actor, GameState* state);
void EnRr_Destroy(Actor* actor, GameState* state);
void EnRr_Update(Actor* actor, GameState* state);
void EnRr_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Rr.data.s")

ActorInit En_Rr_InitVars = {
    ACTOR_EN_RR,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_RR,
    sizeof(EnRr),
    (ActorFunc)EnRr_Init,
    (ActorFunc)EnRr_Destroy,
    (ActorFunc)EnRr_Update,
    (ActorFunc)EnRr_Draw,
};

GLOBAL_ASM("asm/EnRr_Init.s")

GLOBAL_ASM("asm/EnRr_Destroy.s")

GLOBAL_ASM("asm/EnRr_Update.s")

GLOBAL_ASM("asm/EnRr_Draw.s")
}
