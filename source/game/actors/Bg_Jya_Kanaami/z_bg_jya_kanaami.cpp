extern "C" {
#include "z_bg_jya_kanaami.hpp"

#define FLAGS 0x80400000

void BgJyaKanaami_Init(Actor* actor, GameState* state);
void BgJyaKanaami_Destroy(Actor* actor, GameState* state);
void BgJyaKanaami_Update(Actor* actor, GameState* state);
void BgJyaKanaami_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_Kanaami.data.s")

ActorInit Bg_Jya_Kanaami_InitVars = {
    ACTOR_BG_JYA_KANAAMI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJyaKanaami),
    (ActorFunc)BgJyaKanaami_Init,
    (ActorFunc)BgJyaKanaami_Destroy,
    (ActorFunc)BgJyaKanaami_Update,
    (ActorFunc)BgJyaKanaami_Draw,
};

GLOBAL_ASM("asm/BgJyaKanaami_Init.s")

GLOBAL_ASM("asm/BgJyaKanaami_Destroy.s")

GLOBAL_ASM("asm/BgJyaKanaami_Update.s")

GLOBAL_ASM("asm/BgJyaKanaami_Draw.s")
}
