extern "C" {
#include "z_bg_hidan_syoku.hpp"

#define FLAGS 0x80400010

void BgHidanSyoku_Init(Actor* actor, GameState* state);
void BgHidanSyoku_Destroy(Actor* actor, GameState* state);
void BgHidanSyoku_Update(Actor* actor, GameState* state);
void BgHidanSyoku_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Syoku.data.s")

ActorInit Bg_Hidan_Syoku_InitVars = {
    ACTOR_BG_HIDAN_SYOKU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanSyoku),
    (ActorFunc)BgHidanSyoku_Init,
    (ActorFunc)BgHidanSyoku_Destroy,
    (ActorFunc)BgHidanSyoku_Update,
    (ActorFunc)BgHidanSyoku_Draw,
};

GLOBAL_ASM("asm/BgHidanSyoku_Init.s")

GLOBAL_ASM("asm/BgHidanSyoku_Destroy.s")

GLOBAL_ASM("asm/BgHidanSyoku_Update.s")

GLOBAL_ASM("asm/BgHidanSyoku_Draw.s")
}
