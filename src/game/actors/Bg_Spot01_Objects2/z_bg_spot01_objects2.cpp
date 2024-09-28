extern "C" {
#include "z_bg_spot01_objects2.hpp"

#define FLAGS 0x00400010

void BgSpot01Objects2_Init(Actor* actor, GameState* state);
void BgSpot01Objects2_Destroy(Actor* actor, GameState* state);
void BgSpot01Objects2_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot01_Objects2.data.s")

ActorInit Bg_Spot01_Objects2_InitVars = {
    ACTOR_BG_SPOT01_OBJECTS2,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgSpot01Objects2),
    (ActorFunc)BgSpot01Objects2_Init,
    (ActorFunc)BgSpot01Objects2_Destroy,
    (ActorFunc)BgSpot01Objects2_Update,
    NULL,
};

GLOBAL_ASM("asm/BgSpot01Objects2_Init.s")

GLOBAL_ASM("asm/BgSpot01Objects2_Destroy.s")

GLOBAL_ASM("asm/BgSpot01Objects2_Update.s")
}
