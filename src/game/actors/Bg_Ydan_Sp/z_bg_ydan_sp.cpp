extern "C" {
#include "z_bg_ydan_sp.hpp"

#define FLAGS 0x80000000

void BgYdanSp_Init(Actor* actor, GameState* state);
void BgYdanSp_Destroy(Actor* actor, GameState* state);
void BgYdanSp_Update(Actor* actor, GameState* state);
void BgYdanSp_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Ydan_Sp.data.s")

ActorInit Bg_Ydan_Sp_InitVars = {
    ACTOR_BG_YDAN_SP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_YDAN_OBJECTS,
    sizeof(BgYdanSp),
    (ActorFunc)BgYdanSp_Init,
    (ActorFunc)BgYdanSp_Destroy,
    (ActorFunc)BgYdanSp_Update,
    (ActorFunc)BgYdanSp_Draw,
};

GLOBAL_ASM("asm/BgYdanSp_Init.s")

GLOBAL_ASM("asm/BgYdanSp_Destroy.s")

GLOBAL_ASM("asm/BgYdanSp_Update.s")

GLOBAL_ASM("asm/BgYdanSp_Draw.s")
}
