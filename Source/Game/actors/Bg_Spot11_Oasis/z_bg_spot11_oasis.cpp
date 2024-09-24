extern "C" {
#include "z_bg_spot11_oasis.hpp"

#define FLAGS 0x80400010

void BgSpot11Oasis_Init(Actor* actor, GameState* state);
void BgSpot11Oasis_Destroy(Actor* actor, GameState* state);
void BgSpot11Oasis_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot11_Oasis.data.s")

ActorInit Bg_Spot11_Oasis_InitVars = {
    ACTOR_BG_SPOT11_OASIS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT11_OBJ,
    sizeof(BgSpot11Oasis),
    (ActorFunc)BgSpot11Oasis_Init,
    (ActorFunc)BgSpot11Oasis_Destroy,
    (ActorFunc)BgSpot11Oasis_Update,
    NULL,
};

GLOBAL_ASM("asm/BgSpot11Oasis_Init.s")

GLOBAL_ASM("asm/BgSpot11Oasis_Destroy.s")

GLOBAL_ASM("asm/BgSpot11Oasis_Update.s")
}
