extern "C" {
#include "z_bg_po_syokudai.hpp"

#define FLAGS 0x80000000

void BgPoSyokudai_Init(Actor* actor, GameState* state);
void BgPoSyokudai_Destroy(Actor* actor, GameState* state);
void BgPoSyokudai_Update(Actor* actor, GameState* state);
void BgPoSyokudai_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Po_Syokudai.data.s")

ActorInit Bg_Po_Syokudai_InitVars = {
    ACTOR_BG_PO_SYOKUDAI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_SYOKUDAI,
    sizeof(BgPoSyokudai),
    (ActorFunc)BgPoSyokudai_Init,
    (ActorFunc)BgPoSyokudai_Destroy,
    (ActorFunc)BgPoSyokudai_Update,
    (ActorFunc)BgPoSyokudai_Draw,
};

GLOBAL_ASM("asm/BgPoSyokudai_Init.s")

GLOBAL_ASM("asm/BgPoSyokudai_Destroy.s")

GLOBAL_ASM("asm/BgPoSyokudai_Update.s")

GLOBAL_ASM("asm/BgPoSyokudai_Draw.s")
}
