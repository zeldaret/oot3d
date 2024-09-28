extern "C" {
#include "z_en_po_desert.hpp"

#define FLAGS 0x00001090

void EnPoDesert_Init(Actor* actor, GameState* state);
void EnPoDesert_Destroy(Actor* actor, GameState* state);
void EnPoDesert_Update(Actor* actor, GameState* state);
void EnPoDesert_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Po_Desert.data.s")

ActorInit En_Po_Desert_InitVars = {
    ACTOR_EN_PO_DESERT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_PO_FIELD,
    sizeof(EnPoDesert),
    (ActorFunc)EnPoDesert_Init,
    (ActorFunc)EnPoDesert_Destroy,
    (ActorFunc)EnPoDesert_Update,
    (ActorFunc)EnPoDesert_Draw,
};

GLOBAL_ASM("asm/EnPoDesert_Init.s")

GLOBAL_ASM("asm/EnPoDesert_Destroy.s")

GLOBAL_ASM("asm/EnPoDesert_Update.s")

GLOBAL_ASM("asm/EnPoDesert_Draw.s")
}
