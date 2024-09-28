extern "C" {
#include "z_en_po_sisters.hpp"

#define FLAGS 0x00005215

void EnPoSisters_Init(Actor* actor, GameState* state);
void EnPoSisters_Destroy(Actor* actor, GameState* state);
void EnPoSisters_Update(Actor* actor, GameState* state);
void EnPoSisters_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Po_Sisters.data.s")

ActorInit En_Po_Sisters_InitVars = {
    ACTOR_EN_PO_SISTERS,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_PO_SISTERS,
    sizeof(EnPoSisters),
    (ActorFunc)EnPoSisters_Init,
    (ActorFunc)EnPoSisters_Destroy,
    (ActorFunc)EnPoSisters_Update,
    (ActorFunc)EnPoSisters_Draw,
};

GLOBAL_ASM("asm/EnPoSisters_Init.s")

GLOBAL_ASM("asm/EnPoSisters_Destroy.s")

GLOBAL_ASM("asm/EnPoSisters_Update.s")

GLOBAL_ASM("asm/EnPoSisters_Draw.s")
}
