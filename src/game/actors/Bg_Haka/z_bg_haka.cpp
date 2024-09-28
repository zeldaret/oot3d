extern "C" {
#include "z_bg_haka.hpp"

#define FLAGS 0x00000000

void BgHaka_Init(Actor* actor, GameState* state);
void BgHaka_Destroy(Actor* actor, GameState* state);
void BgHaka_Update(Actor* actor, GameState* state);
void BgHaka_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Haka.data.s")

ActorInit Bg_Haka_InitVars = {
    ACTOR_BG_HAKA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HAKA,
    sizeof(BgHaka),
    (ActorFunc)BgHaka_Init,
    (ActorFunc)BgHaka_Destroy,
    (ActorFunc)BgHaka_Update,
    (ActorFunc)BgHaka_Draw,
};

GLOBAL_ASM("asm/BgHaka_Init.s")

GLOBAL_ASM("asm/BgHaka_Destroy.s")

GLOBAL_ASM("asm/BgHaka_Update.s")

GLOBAL_ASM("asm/BgHaka_Draw.s")
}
