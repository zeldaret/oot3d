extern "C" {
#include "z_bg_bdan_objects.hpp"

#define FLAGS 0x00400010

void BgBdanObjects_Init(Actor* actor, GameState* state);
void BgBdanObjects_Destroy(Actor* actor, GameState* state);
void BgBdanObjects_Update(Actor* actor, GameState* state);
void BgBdanObjects_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Bdan_Objects.data.s")

ActorInit Bg_Bdan_Objects_InitVars = {
    ACTOR_BG_BDAN_OBJECTS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_BDAN_OBJECTS,
    sizeof(BgBdanObjects),
    (ActorFunc)BgBdanObjects_Init,
    (ActorFunc)BgBdanObjects_Destroy,
    (ActorFunc)BgBdanObjects_Update,
    (ActorFunc)BgBdanObjects_Draw,
};

GLOBAL_ASM("asm/BgBdanObjects_Init.s")

GLOBAL_ASM("asm/BgBdanObjects_Destroy.s")

GLOBAL_ASM("asm/BgBdanObjects_Update.s")

GLOBAL_ASM("asm/BgBdanObjects_Draw.s")
}
