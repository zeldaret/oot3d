extern "C" {
#include "z_bg_spot08_iceblock.hpp"

#define FLAGS 0x80400000

void BgSpot08Iceblock_Init(Actor* actor, GameState* state);
void BgSpot08Iceblock_Destroy(Actor* actor, GameState* state);
void BgSpot08Iceblock_Update(Actor* actor, GameState* state);
void BgSpot08Iceblock_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot08_Iceblock.data.s")

ActorInit Bg_Spot08_Iceblock_InitVars = {
    ACTOR_BG_SPOT08_ICEBLOCK,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT08_OBJ,
    sizeof(BgSpot08Iceblock),
    (ActorFunc)BgSpot08Iceblock_Init,
    (ActorFunc)BgSpot08Iceblock_Destroy,
    (ActorFunc)BgSpot08Iceblock_Update,
    (ActorFunc)BgSpot08Iceblock_Draw,
};

GLOBAL_ASM("asm/BgSpot08Iceblock_Init.s")

GLOBAL_ASM("asm/BgSpot08Iceblock_Destroy.s")

GLOBAL_ASM("asm/BgSpot08Iceblock_Update.s")

GLOBAL_ASM("asm/BgSpot08Iceblock_Draw.s")
}
