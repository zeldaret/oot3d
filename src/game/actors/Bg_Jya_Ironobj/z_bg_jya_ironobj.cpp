extern "C" {
#include "z_bg_jya_ironobj.hpp"

#define FLAGS 0x80400000

void BgJyaIronobj_Init(Actor* actor, GameState* state);
void BgJyaIronobj_Destroy(Actor* actor, GameState* state);
void BgJyaIronobj_Update(Actor* actor, GameState* state);
void BgJyaIronobj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Ironobj.data.s")

ActorInit Bg_Jya_Ironobj_InitVars = {
    ACTOR_BG_JYA_IRONOBJ,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_JYA_IRON,
    sizeof(BgJyaIronobj),
    (ActorFunc)BgJyaIronobj_Init,
    (ActorFunc)BgJyaIronobj_Destroy,
    (ActorFunc)BgJyaIronobj_Update,
    (ActorFunc)BgJyaIronobj_Draw,
};

GLOBAL_ASM("asm/BgJyaIronobj_Init.s")

GLOBAL_ASM("asm/BgJyaIronobj_Destroy.s")

GLOBAL_ASM("asm/BgJyaIronobj_Update.s")

GLOBAL_ASM("asm/BgJyaIronobj_Draw.s")
}
