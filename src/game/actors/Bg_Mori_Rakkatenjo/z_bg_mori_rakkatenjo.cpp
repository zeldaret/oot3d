extern "C" {
#include "z_bg_mori_rakkatenjo.hpp"

#define FLAGS 0x80400030

void BgMoriRakkatenjo_Init(Actor* actor, GameState* state);
void BgMoriRakkatenjo_Destroy(Actor* actor, GameState* state);
void BgMoriRakkatenjo_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Mori_Rakkatenjo.data.s")

ActorInit Bg_Mori_Rakkatenjo_InitVars = {
    ACTOR_BG_MORI_RAKKATENJO,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MORI_OBJECTS,
    sizeof(BgMoriRakkatenjo),
    (ActorFunc)BgMoriRakkatenjo_Init,
    (ActorFunc)BgMoriRakkatenjo_Destroy,
    (ActorFunc)BgMoriRakkatenjo_Update,
    NULL,
};

GLOBAL_ASM("asm/BgMoriRakkatenjo_Init.s")

GLOBAL_ASM("asm/BgMoriRakkatenjo_Destroy.s")

GLOBAL_ASM("asm/BgMoriRakkatenjo_Update.s")
}
