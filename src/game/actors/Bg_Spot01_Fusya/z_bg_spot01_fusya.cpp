extern "C" {
#include "z_bg_spot01_fusya.hpp"

#define FLAGS 0x80400010

void BgSpot01Fusya_Init(Actor* actor, GameState* state);
void BgSpot01Fusya_Destroy(Actor* actor, GameState* state);
void BgSpot01Fusya_Update(Actor* actor, GameState* state);
void BgSpot01Fusya_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot01_Fusya.data.s")

ActorInit Bg_Spot01_Fusya_InitVars = {
    ACTOR_BG_SPOT01_FUSYA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT01_OBJECTS,
    sizeof(BgSpot01Fusya),
    (ActorFunc)BgSpot01Fusya_Init,
    (ActorFunc)BgSpot01Fusya_Destroy,
    (ActorFunc)BgSpot01Fusya_Update,
    (ActorFunc)BgSpot01Fusya_Draw,
};

GLOBAL_ASM("asm/BgSpot01Fusya_Init.s")

GLOBAL_ASM("asm/BgSpot01Fusya_Destroy.s")

GLOBAL_ASM("asm/BgSpot01Fusya_Update.s")

GLOBAL_ASM("asm/BgSpot01Fusya_Draw.s")
}
