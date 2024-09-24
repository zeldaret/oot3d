extern "C" {
#include "z_bg_hidan_sekizou.hpp"

#define FLAGS 0x80400000

void BgHidanSekizou_Init(Actor* actor, GameState* state);
void BgHidanSekizou_Destroy(Actor* actor, GameState* state);
void BgHidanSekizou_Update(Actor* actor, GameState* state);
void BgHidanSekizou_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Sekizou.data.s")

ActorInit Bg_Hidan_Sekizou_InitVars = {
    ACTOR_BG_HIDAN_SEKIZOU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanSekizou),
    (ActorFunc)BgHidanSekizou_Init,
    (ActorFunc)BgHidanSekizou_Destroy,
    (ActorFunc)BgHidanSekizou_Update,
    (ActorFunc)BgHidanSekizou_Draw,
};

GLOBAL_ASM("asm/BgHidanSekizou_Init.s")

GLOBAL_ASM("asm/BgHidanSekizou_Destroy.s")

GLOBAL_ASM("asm/BgHidanSekizou_Update.s")

GLOBAL_ASM("asm/BgHidanSekizou_Draw.s")
}
