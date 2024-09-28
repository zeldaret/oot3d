extern "C" {
#include "z_bg_mori_hineri.hpp"

#define FLAGS 0x00400030

void BgMoriHineri_Init(Actor* actor, GameState* state);
void BgMoriHineri_Destroy(Actor* actor, GameState* state);
void BgMoriHineri_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mori_Hineri.data.s")

ActorInit Bg_Mori_Hineri_InitVars = {
    ACTOR_BG_MORI_HINERI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(BgMoriHineri),
    (ActorFunc)BgMoriHineri_Init,
    (ActorFunc)BgMoriHineri_Destroy,
    (ActorFunc)BgMoriHineri_Update,
    NULL,
};

GLOBAL_ASM("asm/BgMoriHineri_Init.s")

GLOBAL_ASM("asm/BgMoriHineri_Destroy.s")

GLOBAL_ASM("asm/BgMoriHineri_Update.s")
}
