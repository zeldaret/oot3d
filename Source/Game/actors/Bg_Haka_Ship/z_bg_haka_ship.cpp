extern "C" {
#include "z_bg_haka_ship.hpp"

#define FLAGS 0x80400030

void BgHakaShip_Init(Actor* actor, GameState* state);
void BgHakaShip_Destroy(Actor* actor, GameState* state);
void BgHakaShip_Update(Actor* actor, GameState* state);
void BgHakaShip_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Haka_Ship.data.s")

ActorInit Bg_Haka_Ship_InitVars = {
    ACTOR_BG_HAKA_SHIP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HAKA_OBJECTS,
    sizeof(BgHakaShip),
    (ActorFunc)BgHakaShip_Init,
    (ActorFunc)BgHakaShip_Destroy,
    (ActorFunc)BgHakaShip_Update,
    (ActorFunc)BgHakaShip_Draw,
};

GLOBAL_ASM("asm/BgHakaShip_Init.s")

GLOBAL_ASM("asm/BgHakaShip_Destroy.s")

GLOBAL_ASM("asm/BgHakaShip_Update.s")

GLOBAL_ASM("asm/BgHakaShip_Draw.s")
}
