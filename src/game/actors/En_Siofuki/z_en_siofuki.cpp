extern "C" {
#include "z_en_siofuki.hpp"

#define FLAGS 0x80400030

void EnSiofuki_Init(Actor* actor, GameState* state);
void EnSiofuki_Destroy(Actor* actor, GameState* state);
void EnSiofuki_Update(Actor* actor, GameState* state);
void EnSiofuki_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Siofuki.data.s")

ActorInit En_Siofuki_InitVars = {
    ACTOR_EN_SIOFUKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SIOFUKI,
    sizeof(EnSiofuki),
    (ActorFunc)EnSiofuki_Init,
    (ActorFunc)EnSiofuki_Destroy,
    (ActorFunc)EnSiofuki_Update,
    (ActorFunc)EnSiofuki_Draw,
};

GLOBAL_ASM("asm/EnSiofuki_Init.s")

GLOBAL_ASM("asm/EnSiofuki_Destroy.s")

GLOBAL_ASM("asm/EnSiofuki_Update.s")

GLOBAL_ASM("asm/EnSiofuki_Draw.s")
}
