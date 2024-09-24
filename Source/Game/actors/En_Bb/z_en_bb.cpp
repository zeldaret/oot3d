extern "C" {
#include "z_en_bb.hpp"

#define FLAGS 0x01000015

void EnBb_Init(Actor* actor, GameState* state);
void EnBb_Destroy(Actor* actor, GameState* state);
void EnBb_Update(Actor* actor, GameState* state);
void EnBb_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bb.data_00520A5C.s")
GLOBAL_ASM("data/z_En_Bb.data_00520B80.s")

ActorInit En_Bb_InitVars = {
    ACTOR_EN_BB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BB,
    sizeof(EnBb),
    (ActorFunc)EnBb_Init,
    (ActorFunc)EnBb_Destroy,
    (ActorFunc)EnBb_Update,
    (ActorFunc)EnBb_Draw,
};

GLOBAL_ASM("asm/EnBb_Init.s")

GLOBAL_ASM("asm/EnBb_Destroy.s")

GLOBAL_ASM("asm/EnBb_Update.s")

GLOBAL_ASM("asm/EnBb_Draw.s")
}
