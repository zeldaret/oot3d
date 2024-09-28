extern "C" {
#include "z_bg_jya_1flift.hpp"

#define FLAGS 0x80400010

void BgJya1flift_Init(Actor* actor, GameState* state);
void BgJya1flift_Destroy(Actor* actor, GameState* state);
void BgJya1flift_Update(Actor* actor, GameState* state);
void BgJya1flift_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Bg_Jya_1flift.data.s")

ActorInit Bg_Jya_1flift_InitVars = {
    ACTOR_BG_JYA_1FLIFT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_JYA_OBJ,
    sizeof(BgJya1flift),
    (ActorFunc)BgJya1flift_Init,
    (ActorFunc)BgJya1flift_Destroy,
    (ActorFunc)BgJya1flift_Update,
    (ActorFunc)BgJya1flift_Draw,
};

GLOBAL_ASM("asm/BgJya1flift_Init.s")

GLOBAL_ASM("asm/BgJya1flift_Destroy.s")

GLOBAL_ASM("asm/BgJya1flift_Update.s")

GLOBAL_ASM("asm/BgJya1flift_Draw.s")
}
