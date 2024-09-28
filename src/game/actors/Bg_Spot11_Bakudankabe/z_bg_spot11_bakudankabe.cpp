extern "C" {
#include "z_bg_spot11_bakudankabe.hpp"

#define FLAGS 0x80400030

void BgSpot11Bakudankabe_Init(Actor* actor, GameState* state);
void BgSpot11Bakudankabe_Destroy(Actor* actor, GameState* state);
void BgSpot11Bakudankabe_Update(Actor* actor, GameState* state);
void BgSpot11Bakudankabe_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot11_Bakudankabe.data.s")

ActorInit Bg_Spot11_Bakudankabe_InitVars = {
    ACTOR_BG_SPOT11_BAKUDANKABE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT11_OBJ,
    sizeof(BgSpot11Bakudankabe),
    (ActorFunc)BgSpot11Bakudankabe_Init,
    (ActorFunc)BgSpot11Bakudankabe_Destroy,
    (ActorFunc)BgSpot11Bakudankabe_Update,
    (ActorFunc)BgSpot11Bakudankabe_Draw,
};

GLOBAL_ASM("asm/BgSpot11Bakudankabe_Init.s")

GLOBAL_ASM("asm/BgSpot11Bakudankabe_Destroy.s")

GLOBAL_ASM("asm/BgSpot11Bakudankabe_Update.s")

GLOBAL_ASM("asm/BgSpot11Bakudankabe_Draw.s")
}
