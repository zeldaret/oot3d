extern "C" {
#include "z_bg_ydan_hasi.hpp"

#define FLAGS 0x80400030

void BgYdanHasi_Init(Actor* actor, GameState* state);
void BgYdanHasi_Destroy(Actor* actor, GameState* state);
void BgYdanHasi_Update(Actor* actor, GameState* state);
void BgYdanHasi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Ydan_Hasi.data.s")

ActorInit Bg_Ydan_Hasi_InitVars = {
    ACTOR_BG_YDAN_HASI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_YDAN_OBJECTS,
    sizeof(BgYdanHasi),
    (ActorFunc)BgYdanHasi_Init,
    (ActorFunc)BgYdanHasi_Destroy,
    (ActorFunc)BgYdanHasi_Update,
    (ActorFunc)BgYdanHasi_Draw,
};

GLOBAL_ASM("asm/BgYdanHasi_Init.s")

GLOBAL_ASM("asm/BgYdanHasi_Destroy.s")

GLOBAL_ASM("asm/BgYdanHasi_Update.s")

GLOBAL_ASM("asm/BgYdanHasi_Draw.s")
}
