extern "C" {
#include "z_bg_spot06_objects.hpp"

#define FLAGS 0x00400200

void BgSpot06Objects_Init(Actor* actor, GameState* state);
void BgSpot06Objects_Destroy(Actor* actor, GameState* state);
void BgSpot06Objects_Update(Actor* actor, GameState* state);
void BgSpot06Objects_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Spot06_Objects.data.s")

ActorInit Bg_Spot06_Objects_InitVars = {
    ACTOR_BG_SPOT06_OBJECTS,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SPOT06_OBJECTS,
    sizeof(BgSpot06Objects),
    (ActorFunc)BgSpot06Objects_Init,
    (ActorFunc)BgSpot06Objects_Destroy,
    (ActorFunc)BgSpot06Objects_Update,
    (ActorFunc)BgSpot06Objects_Draw,
};

GLOBAL_ASM("asm/BgSpot06Objects_Init.s")

GLOBAL_ASM("asm/BgSpot06Objects_Destroy.s")

GLOBAL_ASM("asm/BgSpot06Objects_Update.s")

GLOBAL_ASM("asm/BgSpot06Objects_Draw.s")
}
