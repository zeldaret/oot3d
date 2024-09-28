extern "C" {
#include "z_bg_gnd_darkmeiro.hpp"

#define FLAGS 0x80400030

void BgGndDarkmeiro_Init(Actor* actor, GameState* state);
void BgGndDarkmeiro_Destroy(Actor* actor, GameState* state);
void BgGndDarkmeiro_Update(Actor* actor, GameState* state);

ActorInit Bg_Gnd_Darkmeiro_InitVars = {
    ACTOR_BG_GND_DARKMEIRO,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_DEMO_KEKKAI,
    sizeof(BgGndDarkmeiro),
    (ActorFunc)BgGndDarkmeiro_Init,
    (ActorFunc)BgGndDarkmeiro_Destroy,
    (ActorFunc)BgGndDarkmeiro_Update,
    NULL,
};

GLOBAL_ASM("asm/BgGndDarkmeiro_Init.s")

GLOBAL_ASM("asm/BgGndDarkmeiro_Destroy.s")

GLOBAL_ASM("asm/BgGndDarkmeiro_Update.s")
}
