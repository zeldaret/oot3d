extern "C" {
#include "z_en_dekunuts.hpp"

#define FLAGS 0x00000005

void EnDekunuts_Init(Actor* actor, GameState* state);
void EnDekunuts_Destroy(Actor* actor, GameState* state);
void EnDekunuts_Update(Actor* actor, GameState* state);
void EnDekunuts_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dekunuts.data.s")

ActorInit En_Dekunuts_InitVars = {
    ACTOR_EN_DEKUNUTS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_DEKUNUTS,
    sizeof(EnDekunuts),
    (ActorFunc)EnDekunuts_Init,
    (ActorFunc)EnDekunuts_Destroy,
    (ActorFunc)EnDekunuts_Update,
    (ActorFunc)EnDekunuts_Draw,
};

GLOBAL_ASM("asm/EnDekunuts_Init.s")

GLOBAL_ASM("asm/EnDekunuts_Destroy.s")

GLOBAL_ASM("asm/EnDekunuts_Update.s")

GLOBAL_ASM("asm/EnDekunuts_Draw.s")
}
