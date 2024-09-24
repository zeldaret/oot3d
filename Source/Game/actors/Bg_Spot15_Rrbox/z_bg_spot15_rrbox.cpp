extern "C" {
#include "z_bg_spot15_rrbox.hpp"

#define FLAGS 0x00000000

void BgSpot15Rrbox_Init(Actor* actor, GameState* state);
void BgSpot15Rrbox_Destroy(Actor* actor, GameState* state);
void BgSpot15Rrbox_Update(Actor* actor, GameState* state);
void BgSpot15Rrbox_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot15_Rrbox.data.s")

ActorInit Bg_Spot15_Rrbox_InitVars = {
    ACTOR_BG_SPOT15_RRBOX,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT15_OBJ,
    sizeof(BgSpot15Rrbox),
    (ActorFunc)BgSpot15Rrbox_Init,
    (ActorFunc)BgSpot15Rrbox_Destroy,
    (ActorFunc)BgSpot15Rrbox_Update,
    (ActorFunc)BgSpot15Rrbox_Draw,
};

GLOBAL_ASM("asm/BgSpot15Rrbox_Init.s")

GLOBAL_ASM("asm/BgSpot15Rrbox_Destroy.s")

GLOBAL_ASM("asm/BgSpot15Rrbox_Update.s")

GLOBAL_ASM("asm/BgSpot15Rrbox_Draw.s")
}
