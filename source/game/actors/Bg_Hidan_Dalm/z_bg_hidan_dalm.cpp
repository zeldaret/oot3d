extern "C" {
#include "z_bg_hidan_dalm.hpp"

#define FLAGS 0x00400000

void BgHidanDalm_Init(Actor* actor, GameState* state);
void BgHidanDalm_Destroy(Actor* actor, GameState* state);
void BgHidanDalm_Update(Actor* actor, GameState* state);
void BgHidanDalm_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Dalm.data.s")

ActorInit Bg_Hidan_Dalm_InitVars = {
    ACTOR_BG_HIDAN_DALM,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanDalm),
    (ActorFunc)BgHidanDalm_Init,
    (ActorFunc)BgHidanDalm_Destroy,
    (ActorFunc)BgHidanDalm_Update,
    (ActorFunc)BgHidanDalm_Draw,
};

GLOBAL_ASM("asm/BgHidanDalm_Init.s")

GLOBAL_ASM("asm/BgHidanDalm_Destroy.s")

GLOBAL_ASM("asm/BgHidanDalm_Update.s")

GLOBAL_ASM("asm/BgHidanDalm_Draw.s")
}
