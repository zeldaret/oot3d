extern "C" {
#include "z_bg_jya_bigmirror.hpp"

#define FLAGS 0x80400030

void BgJyaBigmirror_Init(Actor* actor, GameState* state);
void BgJyaBigmirror_Destroy(Actor* actor, GameState* state);
void BgJyaBigmirror_Update(Actor* actor, GameState* state);
void BgJyaBigmirror_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Bigmirror.data.s")

ActorInit Bg_Jya_Bigmirror_InitVars = {
    ACTOR_BG_JYA_BIGMIRROR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaBigmirror),
    (ActorFunc)BgJyaBigmirror_Init,
    (ActorFunc)BgJyaBigmirror_Destroy,
    (ActorFunc)BgJyaBigmirror_Update,
    (ActorFunc)BgJyaBigmirror_Draw,
};

GLOBAL_ASM("asm/BgJyaBigmirror_Init.s")

GLOBAL_ASM("asm/BgJyaBigmirror_Destroy.s")

GLOBAL_ASM("asm/BgJyaBigmirror_Update.s")

GLOBAL_ASM("asm/BgJyaBigmirror_Draw.s")
}
