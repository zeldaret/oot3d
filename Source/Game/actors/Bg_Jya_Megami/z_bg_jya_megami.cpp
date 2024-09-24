extern "C" {
#include "z_bg_jya_megami.hpp"

#define FLAGS 0x80400000

void BgJyaMegami_Init(Actor* actor, GameState* state);
void BgJyaMegami_Destroy(Actor* actor, GameState* state);
void BgJyaMegami_Update(Actor* actor, GameState* state);
void BgJyaMegami_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Megami.data.s")

ActorInit Bg_Jya_Megami_InitVars = {
    ACTOR_BG_JYA_MEGAMI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaMegami),
    (ActorFunc)BgJyaMegami_Init,
    (ActorFunc)BgJyaMegami_Destroy,
    (ActorFunc)BgJyaMegami_Update,
    (ActorFunc)BgJyaMegami_Draw,
};

GLOBAL_ASM("asm/BgJyaMegami_Init.s")

GLOBAL_ASM("asm/BgJyaMegami_Destroy.s")

GLOBAL_ASM("asm/BgJyaMegami_Update.s")

GLOBAL_ASM("asm/BgJyaMegami_Draw.s")
}
