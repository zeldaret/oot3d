extern "C" {
#include "z_en_kusa.hpp"

#define FLAGS 0x80800010

void EnKusa_Init(Actor* actor, GameState* state);
void EnKusa_Destroy(Actor* actor, GameState* state);
void EnKusa_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Kusa.data.s")

ActorInit En_Kusa_InitVars = {
    ACTOR_EN_KUSA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnKusa),
    (ActorFunc)EnKusa_Init,
    (ActorFunc)EnKusa_Destroy,
    (ActorFunc)EnKusa_Update,
    NULL,
};

GLOBAL_ASM("asm/EnKusa_Init.s")

GLOBAL_ASM("asm/EnKusa_Destroy.s")

GLOBAL_ASM("asm/EnKusa_Update.s")
}
