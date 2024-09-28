extern "C" {
#include "z_en_si.hpp"

#define FLAGS 0x00000201

void EnSi_Init(Actor* actor, GameState* state);
void EnSi_Destroy(Actor* actor, GameState* state);
void EnSi_Update(Actor* actor, GameState* state);
void EnSi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Si.data.s")

ActorInit En_Si_InitVars = {
    ACTOR_EN_SI,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_ST,
    sizeof(EnSi),
    (ActorFunc)EnSi_Init,
    (ActorFunc)EnSi_Destroy,
    (ActorFunc)EnSi_Update,
    (ActorFunc)EnSi_Draw,
};

GLOBAL_ASM("asm/EnSi_Init.s")

GLOBAL_ASM("asm/EnSi_Destroy.s")

GLOBAL_ASM("asm/EnSi_Update.s")

GLOBAL_ASM("asm/EnSi_Draw.s")
}
