extern "C" {
#include "z_en_ex_ruppy.hpp"

#define FLAGS 0x80000010

void EnExRuppy_Init(Actor* actor, GameState* state);
void EnExRuppy_Destroy(Actor* actor, GameState* state);
void EnExRuppy_Update(Actor* actor, GameState* state);
void EnExRuppy_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ex_Ruppy.data.s")

ActorInit En_Ex_Ruppy_InitVars = {
    ACTOR_EN_EX_RUPPY,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnExRuppy),
    (ActorFunc)EnExRuppy_Init,
    (ActorFunc)EnExRuppy_Destroy,
    (ActorFunc)EnExRuppy_Update,
    (ActorFunc)EnExRuppy_Draw,
};

GLOBAL_ASM("asm/EnExRuppy_Init.s")

GLOBAL_ASM("asm/EnExRuppy_Destroy.s")

GLOBAL_ASM("asm/EnExRuppy_Update.s")

GLOBAL_ASM("asm/EnExRuppy_Draw.s")
}
