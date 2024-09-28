extern "C" {
#include "z_bg_spot15_saku.hpp"

#define FLAGS 0x80400000

void BgSpot15Saku_Init(Actor* actor, GameState* state);
void BgSpot15Saku_Destroy(Actor* actor, GameState* state);
void BgSpot15Saku_Update(Actor* actor, GameState* state);
void BgSpot15Saku_Draw(Actor* actor, GameState* state);

ActorInit Bg_Spot15_Saku_InitVars = {
    ACTOR_BG_SPOT15_SAKU,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_SPOT15_OBJ,
    sizeof(BgSpot15Saku),
    (ActorFunc)BgSpot15Saku_Init,
    (ActorFunc)BgSpot15Saku_Destroy,
    (ActorFunc)BgSpot15Saku_Update,
    (ActorFunc)BgSpot15Saku_Draw,
};

GLOBAL_ASM("asm/BgSpot15Saku_Init.s")

GLOBAL_ASM("asm/BgSpot15Saku_Destroy.s")

GLOBAL_ASM("asm/BgSpot15Saku_Update.s")

GLOBAL_ASM("asm/BgSpot15Saku_Draw.s")
}
