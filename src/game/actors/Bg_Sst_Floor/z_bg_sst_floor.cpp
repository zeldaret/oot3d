extern "C" {
#include "z_bg_sst_floor.hpp"

#define FLAGS 0x80400030

void BgSstFloor_Init(Actor* actor, GameState* state);
void BgSstFloor_Destroy(Actor* actor, GameState* state);
void BgSstFloor_Update(Actor* actor, GameState* state);
void BgSstFloor_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Sst_Floor.data.s")

ActorInit Bg_Sst_Floor_InitVars = {
    ACTOR_BG_SST_FLOOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SST,
    sizeof(BgSstFloor),
    (ActorFunc)BgSstFloor_Init,
    (ActorFunc)BgSstFloor_Destroy,
    (ActorFunc)BgSstFloor_Update,
    (ActorFunc)BgSstFloor_Draw,
};

GLOBAL_ASM("asm/BgSstFloor_Init.s")

GLOBAL_ASM("asm/BgSstFloor_Destroy.s")

GLOBAL_ASM("asm/BgSstFloor_Update.s")

GLOBAL_ASM("asm/BgSstFloor_Draw.s")
}
