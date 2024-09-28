extern "C" {
#include "z_bg_mizu_movebg.hpp"

#define FLAGS 0x80400010

void BgMizuMovebg_Init(Actor* actor, GameState* state);
void BgMizuMovebg_Destroy(Actor* actor, GameState* state);
void BgMizuMovebg_Update(Actor* actor, GameState* state);
void BgMizuMovebg_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mizu_Movebg.data.s")

ActorInit Bg_Mizu_Movebg_InitVars = {
    ACTOR_BG_MIZU_MOVEBG,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MIZU_OBJECTS,
    sizeof(BgMizuMovebg),
    (ActorFunc)BgMizuMovebg_Init,
    (ActorFunc)BgMizuMovebg_Destroy,
    (ActorFunc)BgMizuMovebg_Update,
    (ActorFunc)BgMizuMovebg_Draw,
};

GLOBAL_ASM("asm/BgMizuMovebg_Init.s")

GLOBAL_ASM("asm/BgMizuMovebg_Destroy.s")

GLOBAL_ASM("asm/BgMizuMovebg_Update.s")

GLOBAL_ASM("asm/BgMizuMovebg_Draw.s")
}
