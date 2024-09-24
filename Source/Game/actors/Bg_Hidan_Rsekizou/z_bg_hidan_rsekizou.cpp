extern "C" {
#include "z_bg_hidan_rsekizou.hpp"

#define FLAGS 0x80400000

void BgHidanRsekizou_Init(Actor* actor, GameState* state);
void BgHidanRsekizou_Destroy(Actor* actor, GameState* state);
void BgHidanRsekizou_Update(Actor* actor, GameState* state);
void BgHidanRsekizou_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Rsekizou.data.s")

ActorInit Bg_Hidan_Rsekizou_InitVars = {
    ACTOR_BG_HIDAN_RSEKIZOU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanRsekizou),
    (ActorFunc)BgHidanRsekizou_Init,
    (ActorFunc)BgHidanRsekizou_Destroy,
    (ActorFunc)BgHidanRsekizou_Update,
    (ActorFunc)BgHidanRsekizou_Draw,
};

GLOBAL_ASM("asm/BgHidanRsekizou_Init.s")

GLOBAL_ASM("asm/BgHidanRsekizou_Destroy.s")

GLOBAL_ASM("asm/BgHidanRsekizou_Update.s")

GLOBAL_ASM("asm/BgHidanRsekizou_Draw.s")
}
