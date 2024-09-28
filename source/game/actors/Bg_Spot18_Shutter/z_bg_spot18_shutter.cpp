extern "C" {
#include "z_bg_spot18_shutter.hpp"

#define FLAGS 0x80400030

void BgSpot18Shutter_Init(Actor* actor, GameState* state);
void BgSpot18Shutter_Destroy(Actor* actor, GameState* state);
void BgSpot18Shutter_Update(Actor* actor, GameState* state);
void BgSpot18Shutter_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot18_Shutter.data.s")

ActorInit Bg_Spot18_Shutter_InitVars = {
    ACTOR_BG_SPOT18_SHUTTER,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SPOT18_OBJ,
    sizeof(BgSpot18Shutter),
    (ActorFunc)BgSpot18Shutter_Init,
    (ActorFunc)BgSpot18Shutter_Destroy,
    (ActorFunc)BgSpot18Shutter_Update,
    (ActorFunc)BgSpot18Shutter_Draw,
};

GLOBAL_ASM("asm/BgSpot18Shutter_Init.s")

GLOBAL_ASM("asm/BgSpot18Shutter_Destroy.s")

GLOBAL_ASM("asm/BgSpot18Shutter_Update.s")

GLOBAL_ASM("asm/BgSpot18Shutter_Draw.s")
}
