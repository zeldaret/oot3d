extern "C" {
#include "z_bg_dodoago.hpp"

#define FLAGS 0x00400030

void BgDodoago_Init(Actor* actor, GameState* state);
void BgDodoago_Destroy(Actor* actor, GameState* state);
void BgDodoago_Update(Actor* actor, GameState* state);
void BgDodoago_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Dodoago.data.s")

ActorInit Bg_Dodoago_InitVars = {
    ACTOR_BG_DODOAGO,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_DDAN_OBJECTS,
    sizeof(BgDodoago),
    (ActorFunc)BgDodoago_Init,
    (ActorFunc)BgDodoago_Destroy,
    (ActorFunc)BgDodoago_Update,
    (ActorFunc)BgDodoago_Draw,
};

GLOBAL_ASM("asm/BgDodoago_Init.s")

GLOBAL_ASM("asm/BgDodoago_Destroy.s")

GLOBAL_ASM("asm/BgDodoago_Update.s")

GLOBAL_ASM("asm/BgDodoago_Draw.s")
}
