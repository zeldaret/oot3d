extern "C" {
#include "z_bg_hidan_kousi.hpp"

#define FLAGS 0x80400010

void BgHidanKousi_Init(Actor* actor, GameState* state);
void BgHidanKousi_Destroy(Actor* actor, GameState* state);
void BgHidanKousi_Update(Actor* actor, GameState* state);
void BgHidanKousi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Hidan_Kousi.data.s")

ActorInit Bg_Hidan_Kousi_InitVars = {
    ACTOR_BG_HIDAN_KOUSI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_HIDAN_OBJECTS,
    sizeof(BgHidanKousi),
    (ActorFunc)BgHidanKousi_Init,
    (ActorFunc)BgHidanKousi_Destroy,
    (ActorFunc)BgHidanKousi_Update,
    (ActorFunc)BgHidanKousi_Draw,
};

GLOBAL_ASM("asm/BgHidanKousi_Init.s")

GLOBAL_ASM("asm/BgHidanKousi_Destroy.s")

GLOBAL_ASM("asm/BgHidanKousi_Update.s")

GLOBAL_ASM("asm/BgHidanKousi_Draw.s")
}
