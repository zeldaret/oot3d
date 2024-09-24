extern "C" {
#include "z_bg_mizu_uzu.hpp"

#define FLAGS 0x00000000

void BgMizuUzu_Init(Actor* actor, GameState* state);
void BgMizuUzu_Destroy(Actor* actor, GameState* state);
void BgMizuUzu_Update(Actor* actor, GameState* state);
void BgMizuUzu_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mizu_Uzu.data.s")

ActorInit Bg_Mizu_Uzu_InitVars = {
    ACTOR_BG_MIZU_UZU,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_MIZU_OBJECTS,
    sizeof(BgMizuUzu),
    (ActorFunc)BgMizuUzu_Init,
    (ActorFunc)BgMizuUzu_Destroy,
    (ActorFunc)BgMizuUzu_Update,
    (ActorFunc)BgMizuUzu_Draw,
};

GLOBAL_ASM("asm/BgMizuUzu_Init.s")

GLOBAL_ASM("asm/BgMizuUzu_Destroy.s")

GLOBAL_ASM("asm/BgMizuUzu_Update.s")

GLOBAL_ASM("asm/BgMizuUzu_Draw.s")
}
