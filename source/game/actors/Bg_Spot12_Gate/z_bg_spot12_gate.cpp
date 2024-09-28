extern "C" {
#include "z_bg_spot12_gate.hpp"

#define FLAGS 0x80400000

void BgSpot12Gate_Init(Actor* actor, GameState* state);
void BgSpot12Gate_Destroy(Actor* actor, GameState* state);
void BgSpot12Gate_Update(Actor* actor, GameState* state);
void BgSpot12Gate_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot12_Gate.data.s")

ActorInit Bg_Spot12_Gate_InitVars = {
    ACTOR_BG_SPOT12_GATE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT12_OBJ,
    sizeof(BgSpot12Gate),
    (ActorFunc)BgSpot12Gate_Init,
    (ActorFunc)BgSpot12Gate_Destroy,
    (ActorFunc)BgSpot12Gate_Update,
    (ActorFunc)BgSpot12Gate_Draw,
};

GLOBAL_ASM("asm/BgSpot12Gate_Init.s")

GLOBAL_ASM("asm/BgSpot12Gate_Destroy.s")

GLOBAL_ASM("asm/BgSpot12Gate_Update.s")

GLOBAL_ASM("asm/BgSpot12Gate_Draw.s")
}
