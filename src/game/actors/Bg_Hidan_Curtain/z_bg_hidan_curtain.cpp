extern "C" {
#include "z_bg_hidan_curtain.hpp"

#define FLAGS 0x80400010

void BgHidanCurtain_Init(Actor* actor, GameState* state);
void BgHidanCurtain_Destroy(Actor* actor, GameState* state);
void BgHidanCurtain_Update(Actor* actor, GameState* state);
void BgHidanCurtain_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Curtain.data.s")

ActorInit Bg_Hidan_Curtain_InitVars = {
    ACTOR_BG_HIDAN_CURTAIN,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgHidanCurtain),
    (ActorFunc)BgHidanCurtain_Init,
    (ActorFunc)BgHidanCurtain_Destroy,
    (ActorFunc)BgHidanCurtain_Update,
    (ActorFunc)BgHidanCurtain_Draw,
};

GLOBAL_ASM("asm/BgHidanCurtain_Init.s")

GLOBAL_ASM("asm/BgHidanCurtain_Destroy.s")

GLOBAL_ASM("asm/BgHidanCurtain_Update.s")

GLOBAL_ASM("asm/BgHidanCurtain_Draw.s")
}
