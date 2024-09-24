extern "C" {
#include "z_bg_gnd_soulmeiro.hpp"

#define FLAGS 0x80400000

void BgGndSoulmeiro_Init(Actor* actor, GameState* state);
void BgGndSoulmeiro_Destroy(Actor* actor, GameState* state);
void BgGndSoulmeiro_Update(Actor* actor, GameState* state);
void BgGndSoulmeiro_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Gnd_Soulmeiro.data.s")

ActorInit Bg_Gnd_Soulmeiro_InitVars = {
    ACTOR_BG_GND_SOULMEIRO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(BgGndSoulmeiro),
    (ActorFunc)BgGndSoulmeiro_Init,
    (ActorFunc)BgGndSoulmeiro_Destroy,
    (ActorFunc)BgGndSoulmeiro_Update,
    (ActorFunc)BgGndSoulmeiro_Draw,
};

GLOBAL_ASM("asm/BgGndSoulmeiro_Init.s")

GLOBAL_ASM("asm/BgGndSoulmeiro_Destroy.s")

GLOBAL_ASM("asm/BgGndSoulmeiro_Update.s")

GLOBAL_ASM("asm/BgGndSoulmeiro_Draw.s")
}
