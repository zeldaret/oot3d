extern "C" {
#include "z_bg_mizu_shutter.hpp"

#define FLAGS 0x80000010

void BgMizuShutter_Init(Actor* actor, GameState* state);
void BgMizuShutter_Destroy(Actor* actor, GameState* state);
void BgMizuShutter_Update(Actor* actor, GameState* state);
void BgMizuShutter_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mizu_Shutter.data.s")

ActorInit Bg_Mizu_Shutter_InitVars = {
    ACTOR_BG_MIZU_SHUTTER,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_MIZU_OBJECTS,
    sizeof(BgMizuShutter),
    (ActorFunc)BgMizuShutter_Init,
    (ActorFunc)BgMizuShutter_Destroy,
    (ActorFunc)BgMizuShutter_Update,
    (ActorFunc)BgMizuShutter_Draw,
};

GLOBAL_ASM("asm/BgMizuShutter_Init.s")

GLOBAL_ASM("asm/BgMizuShutter_Destroy.s")

GLOBAL_ASM("asm/BgMizuShutter_Update.s")

GLOBAL_ASM("asm/BgMizuShutter_Draw.s")
}
