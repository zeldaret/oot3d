extern "C" {
#include "z_bg_hidan_fwbig.hpp"

#define FLAGS 0x80400010

void BgHidanFwbig_Init(Actor* actor, GameState* state);
void BgHidanFwbig_Destroy(Actor* actor, GameState* state);
void BgHidanFwbig_Update(Actor* actor, GameState* state);
void BgHidanFwbig_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Fwbig.data.s")

ActorInit Bg_Hidan_Fwbig_InitVars = {
    ACTOR_BG_HIDAN_FWBIG,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanFwbig),
    (ActorFunc)BgHidanFwbig_Init,
    (ActorFunc)BgHidanFwbig_Destroy,
    (ActorFunc)BgHidanFwbig_Update,
    (ActorFunc)BgHidanFwbig_Draw,
};

GLOBAL_ASM("asm/BgHidanFwbig_Init.s")

GLOBAL_ASM("asm/BgHidanFwbig_Destroy.s")

GLOBAL_ASM("asm/BgHidanFwbig_Update.s")

GLOBAL_ASM("asm/BgHidanFwbig_Draw.s")

GLOBAL_ASM("asm/BgHidanFwbig_Lower.s")

GLOBAL_ASM("asm/BgHidanFwbig_Move.s")

GLOBAL_ASM("asm/BgHidanFwbig_Rise.s")

GLOBAL_ASM("asm/BgHidanFwbig_WaitForCs.s")

GLOBAL_ASM("asm/BgHidanFwbig_WaitForPlayer.s")

GLOBAL_ASM("asm/BgHidanFwbig_WaitForSwitch.s")

}
