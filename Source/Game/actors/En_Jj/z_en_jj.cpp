extern "C" {
#include "z_en_jj.hpp"

#define FLAGS 0x00000030

void EnJj_Init(Actor* actor, GameState* state);
void EnJj_Destroy(Actor* actor, GameState* state);
void EnJj_Update(Actor* actor, GameState* state);
void EnJj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Jj.data.s")

ActorInit En_Jj_InitVars = {
    ACTOR_EN_JJ,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_JJ,
    sizeof(EnJj),
    (ActorFunc)EnJj_Init,
    (ActorFunc)EnJj_Destroy,
    (ActorFunc)EnJj_Update,
    (ActorFunc)EnJj_Draw,
};

GLOBAL_ASM("asm/EnJj_Init.s")

GLOBAL_ASM("asm/EnJj_Destroy.s")

GLOBAL_ASM("asm/EnJj_Update.s")

GLOBAL_ASM("asm/EnJj_Draw.s")
}
