extern "C" {
#include "z_bg_umajump.hpp"

#define FLAGS 0x80400030

void BgUmajump_Init(Actor* actor, GameState* state);
void BgUmajump_Destroy(Actor* actor, GameState* state);
void BgUmajump_Update(Actor* actor, GameState* state);
void BgUmajump_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Umajump.data.s")

ActorInit Bg_Umajump_InitVars = {
    ACTOR_BG_UMAJUMP,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_UMAJUMP,
    sizeof(BgUmajump),
    (ActorFunc)BgUmajump_Init,
    (ActorFunc)BgUmajump_Destroy,
    (ActorFunc)BgUmajump_Update,
    (ActorFunc)BgUmajump_Draw,
};

GLOBAL_ASM("asm/BgUmajump_Init.s")

GLOBAL_ASM("asm/BgUmajump_Destroy.s")

GLOBAL_ASM("asm/BgUmajump_Update.s")

GLOBAL_ASM("asm/BgUmajump_Draw.s")
}
