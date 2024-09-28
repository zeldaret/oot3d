extern "C" {
#include "z_bg_haka_trap.hpp"

#define FLAGS 0x00400030

void BgHakaTrap_Init(Actor* actor, GameState* state);
void BgHakaTrap_Destroy(Actor* actor, GameState* state);
void BgHakaTrap_Update(Actor* actor, GameState* state);
void BgHakaTrap_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Haka_Trap.data.s")

ActorInit Bg_Haka_Trap_InitVars = {
    ACTOR_BG_HAKA_TRAP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HAKA_OBJECTS,
    sizeof(BgHakaTrap),
    (ActorFunc)BgHakaTrap_Init,
    (ActorFunc)BgHakaTrap_Destroy,
    (ActorFunc)BgHakaTrap_Update,
    (ActorFunc)BgHakaTrap_Draw,
};

GLOBAL_ASM("asm/BgHakaTrap_Init.s")

GLOBAL_ASM("asm/BgHakaTrap_Destroy.s")

GLOBAL_ASM("asm/BgHakaTrap_Update.s")

GLOBAL_ASM("asm/BgHakaTrap_Draw.s")
}
