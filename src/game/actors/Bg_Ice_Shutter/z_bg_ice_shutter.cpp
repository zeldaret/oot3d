extern "C" {
#include "z_bg_ice_shutter.hpp"

#define FLAGS 0x80400010

void BgIceShutter_Init(Actor* actor, GameState* state);
void BgIceShutter_Destroy(Actor* actor, GameState* state);
void BgIceShutter_Update(Actor* actor, GameState* state);
void BgIceShutter_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Ice_Shutter.data.s")

ActorInit Bg_Ice_Shutter_InitVars = {
    ACTOR_BG_ICE_SHUTTER,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_ICE_OBJECTS,
    sizeof(BgIceShutter),
    (ActorFunc)BgIceShutter_Init,
    (ActorFunc)BgIceShutter_Destroy,
    (ActorFunc)BgIceShutter_Update,
    (ActorFunc)BgIceShutter_Draw,
};

GLOBAL_ASM("asm/BgIceShutter_Init.s")

GLOBAL_ASM("asm/BgIceShutter_Destroy.s")

GLOBAL_ASM("asm/BgIceShutter_Update.s")

GLOBAL_ASM("asm/BgIceShutter_Draw.s")
}
