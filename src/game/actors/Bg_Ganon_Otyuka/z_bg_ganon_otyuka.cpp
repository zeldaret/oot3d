extern "C" {
#include "z_bg_ganon_otyuka.hpp"

#define FLAGS 0x80400030

void BgGanonOtyuka_Init(Actor* actor, GameState* state);
void BgGanonOtyuka_Destroy(Actor* actor, GameState* state);
void BgGanonOtyuka_Update(Actor* actor, GameState* state);
void BgGanonOtyuka_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Ganon_Otyuka.data.s")

ActorInit Bg_Ganon_Otyuka_InitVars = {
    ACTOR_BG_GANON_OTYUKA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GANON,
    sizeof(BgGanonOtyuka),
    (ActorFunc)BgGanonOtyuka_Init,
    (ActorFunc)BgGanonOtyuka_Destroy,
    (ActorFunc)BgGanonOtyuka_Update,
    (ActorFunc)BgGanonOtyuka_Draw,
};

GLOBAL_ASM("asm/BgGanonOtyuka_Init.s")

GLOBAL_ASM("asm/BgGanonOtyuka_Destroy.s")

GLOBAL_ASM("asm/BgGanonOtyuka_Update.s")

GLOBAL_ASM("asm/BgGanonOtyuka_Draw.s")
}
