extern "C" {
#include "z_bg_mizu_bwall.hpp"

#define FLAGS 0x80400010

void BgMizuBwall_Init(Actor* actor, GameState* state);
void BgMizuBwall_Destroy(Actor* actor, GameState* state);
void BgMizuBwall_Update(Actor* actor, GameState* state);
void BgMizuBwall_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mizu_Bwall.data.s")

ActorInit Bg_Mizu_Bwall_InitVars = {
    ACTOR_BG_MIZU_BWALL,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MIZU_OBJECTS,
    sizeof(BgMizuBwall),
    (ActorFunc)BgMizuBwall_Init,
    (ActorFunc)BgMizuBwall_Destroy,
    (ActorFunc)BgMizuBwall_Update,
    (ActorFunc)BgMizuBwall_Draw,
};

GLOBAL_ASM("asm/BgMizuBwall_Init.s")

GLOBAL_ASM("asm/BgMizuBwall_Destroy.s")

GLOBAL_ASM("asm/BgMizuBwall_Update.s")

GLOBAL_ASM("asm/BgMizuBwall_Draw.s")
}
