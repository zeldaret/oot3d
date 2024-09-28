extern "C" {
#include "z_bg_hidan_hrock.hpp"

#define FLAGS 0x00400000

void BgHidanHrock_Init(Actor* actor, GameState* state);
void BgHidanHrock_Destroy(Actor* actor, GameState* state);
void BgHidanHrock_Update(Actor* actor, GameState* state);
void BgHidanHrock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Hrock.data.s")

ActorInit Bg_Hidan_Hrock_InitVars = {
    ACTOR_BG_HIDAN_HROCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanHrock),
    (ActorFunc)BgHidanHrock_Init,
    (ActorFunc)BgHidanHrock_Destroy,
    (ActorFunc)BgHidanHrock_Update,
    (ActorFunc)BgHidanHrock_Draw,
};

GLOBAL_ASM("asm/BgHidanHrock_Init.s")

GLOBAL_ASM("asm/BgHidanHrock_Destroy.s")

GLOBAL_ASM("asm/BgHidanHrock_Update.s")

GLOBAL_ASM("asm/BgHidanHrock_Draw.s")
}
