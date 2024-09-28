extern "C" {
#include "z_bg_haka_gate.hpp"

#define FLAGS 0x80400000

void BgHakaGate_Init(Actor* actor, GameState* state);
void BgHakaGate_Destroy(Actor* actor, GameState* state);
void BgHakaGate_Update(Actor* actor, GameState* state);
void BgHakaGate_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Haka_Gate.data.s")

ActorInit Bg_Haka_Gate_InitVars = {
    ACTOR_BG_HAKA_GATE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HAKA_OBJECTS,
    sizeof(BgHakaGate),
    (ActorFunc)BgHakaGate_Init,
    (ActorFunc)BgHakaGate_Destroy,
    (ActorFunc)BgHakaGate_Update,
    (ActorFunc)BgHakaGate_Draw,
};

GLOBAL_ASM("asm/BgHakaGate_Init.s")

GLOBAL_ASM("asm/BgHakaGate_Destroy.s")

GLOBAL_ASM("asm/BgHakaGate_Update.s")

GLOBAL_ASM("asm/BgHakaGate_Draw.s")
}
