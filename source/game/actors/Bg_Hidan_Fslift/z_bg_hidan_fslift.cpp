extern "C" {
#include "z_bg_hidan_fslift.hpp"

#define FLAGS 0x80400010

void BgHidanFslift_Init(Actor* actor, GameState* state);
void BgHidanFslift_Destroy(Actor* actor, GameState* state);
void BgHidanFslift_Update(Actor* actor, GameState* state);
void BgHidanFslift_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Fslift.data.s")

ActorInit Bg_Hidan_Fslift_InitVars = {
    ACTOR_BG_HIDAN_FSLIFT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanFslift),
    (ActorFunc)BgHidanFslift_Init,
    (ActorFunc)BgHidanFslift_Destroy,
    (ActorFunc)BgHidanFslift_Update,
    (ActorFunc)BgHidanFslift_Draw,
};

GLOBAL_ASM("asm/BgHidanFslift_Init.s")

GLOBAL_ASM("asm/BgHidanFslift_Destroy.s")

GLOBAL_ASM("asm/BgHidanFslift_Update.s")

GLOBAL_ASM("asm/BgHidanFslift_Draw.s")
}
