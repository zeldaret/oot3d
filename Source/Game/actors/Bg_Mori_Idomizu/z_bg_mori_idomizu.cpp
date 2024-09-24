extern "C" {
#include "z_bg_mori_idomizu.hpp"

#define FLAGS 0x80400030

void BgMoriIdomizu_Init(Actor* actor, GameState* state);
void BgMoriIdomizu_Destroy(Actor* actor, GameState* state);
void BgMoriIdomizu_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mori_Idomizu.data.s")

ActorInit Bg_Mori_Idomizu_InitVars = {
    ACTOR_BG_MORI_IDOMIZU,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MORI_OBJECTS,
    sizeof(BgMoriIdomizu),
    (ActorFunc)BgMoriIdomizu_Init,
    (ActorFunc)BgMoriIdomizu_Destroy,
    (ActorFunc)BgMoriIdomizu_Update,
    NULL,
};

GLOBAL_ASM("asm/BgMoriIdomizu_Init.s")

GLOBAL_ASM("asm/BgMoriIdomizu_Destroy.s")

GLOBAL_ASM("asm/BgMoriIdomizu_Update.s")
}
