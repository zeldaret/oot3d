extern "C" {
#include "z_en_po_relay.hpp"

#define FLAGS 0x00011019

void EnPoRelay_Init(Actor* actor, GameState* state);
void EnPoRelay_Destroy(Actor* actor, GameState* state);
void EnPoRelay_Update(Actor* actor, GameState* state);
void EnPoRelay_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Po_Relay.data.s")

ActorInit En_Po_Relay_InitVars = {
    ACTOR_EN_PO_RELAY,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TK,
    sizeof(EnPoRelay),
    (ActorFunc)EnPoRelay_Init,
    (ActorFunc)EnPoRelay_Destroy,
    (ActorFunc)EnPoRelay_Update,
    (ActorFunc)EnPoRelay_Draw,
};

GLOBAL_ASM("asm/EnPoRelay_Init.s")

GLOBAL_ASM("asm/EnPoRelay_Destroy.s")

GLOBAL_ASM("asm/EnPoRelay_Update.s")

GLOBAL_ASM("asm/EnPoRelay_Draw.s")
}
