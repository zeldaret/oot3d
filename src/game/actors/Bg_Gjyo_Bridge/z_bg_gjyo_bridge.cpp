extern "C" {
#include "z_bg_gjyo_bridge.hpp"

#define FLAGS 0x80000020

void BgGjyoBridge_Init(Actor* actor, GameState* state);
void BgGjyoBridge_Destroy(Actor* actor, GameState* state);
void BgGjyoBridge_Update(Actor* actor, GameState* state);
void BgGjyoBridge_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Gjyo_Bridge.data.s")

ActorInit Bg_Gjyo_Bridge_InitVars = {
    ACTOR_BG_GJYO_BRIDGE,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GJYO_OBJECTS,
    sizeof(BgGjyoBridge),
    (ActorFunc)BgGjyoBridge_Init,
    (ActorFunc)BgGjyoBridge_Destroy,
    (ActorFunc)BgGjyoBridge_Update,
    (ActorFunc)BgGjyoBridge_Draw,
};

GLOBAL_ASM("asm/BgGjyoBridge_Init.s")

GLOBAL_ASM("asm/BgGjyoBridge_Destroy.s")

GLOBAL_ASM("asm/BgGjyoBridge_Update.s")

GLOBAL_ASM("asm/BgGjyoBridge_Draw.s")
}
