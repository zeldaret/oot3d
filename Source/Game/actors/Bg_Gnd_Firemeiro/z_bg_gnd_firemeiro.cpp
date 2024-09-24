extern "C" {
#include "z_bg_gnd_firemeiro.hpp"

#define FLAGS 0x80400030

void BgGndFiremeiro_Init(Actor* actor, GameState* state);
void BgGndFiremeiro_Destroy(Actor* actor, GameState* state);
void BgGndFiremeiro_Update(Actor* actor, GameState* state);
void BgGndFiremeiro_Draw(Actor* actor, GameState* state);

ActorInit Bg_Gnd_Firemeiro_InitVars = {
    ACTOR_BG_GND_FIREMEIRO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(BgGndFiremeiro),
    (ActorFunc)BgGndFiremeiro_Init,
    (ActorFunc)BgGndFiremeiro_Destroy,
    (ActorFunc)BgGndFiremeiro_Update,
    (ActorFunc)BgGndFiremeiro_Draw,
};

GLOBAL_ASM("asm/BgGndFiremeiro_Init.s")

GLOBAL_ASM("asm/BgGndFiremeiro_Destroy.s")

GLOBAL_ASM("asm/BgGndFiremeiro_Update.s")

GLOBAL_ASM("asm/BgGndFiremeiro_Draw.s")
}
