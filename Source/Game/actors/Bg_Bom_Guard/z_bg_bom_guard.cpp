extern "C" {
#include "z_bg_bom_guard.hpp"

#define FLAGS 0x80400010

void BgBomGuard_Init(Actor* actor, GameState* state);
void BgBomGuard_Destroy(Actor* actor, GameState* state);
void BgBomGuard_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Bom_Guard.data.s")

ActorInit Bg_Bom_Guard_InitVars = {
    ACTOR_BG_BOM_GUARD,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_BOWL,
    sizeof(BgBomGuard),
    (ActorFunc)BgBomGuard_Init,
    (ActorFunc)BgBomGuard_Destroy,
    (ActorFunc)BgBomGuard_Update,
    NULL,
};

GLOBAL_ASM("asm/BgBomGuard_Init.s")

GLOBAL_ASM("asm/BgBomGuard_Destroy.s")

GLOBAL_ASM("asm/BgBomGuard_Update.s")
}
