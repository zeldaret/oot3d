extern "C" {
#include "z_en_geldb.hpp"

#define FLAGS 0x00000015

void EnGeldB_Init(Actor* actor, GameState* state);
void EnGeldB_Destroy(Actor* actor, GameState* state);
void EnGeldB_Update(Actor* actor, GameState* state);
void EnGeldB_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_GeldB.data.s")

ActorInit En_GeldB_InitVars = {
    ACTOR_EN_GELDB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GELDB,
    sizeof(EnGeldB),
    (ActorFunc)EnGeldB_Init,
    (ActorFunc)EnGeldB_Destroy,
    (ActorFunc)EnGeldB_Update,
    (ActorFunc)EnGeldB_Draw,
};

GLOBAL_ASM("asm/EnGeldB_Init.s")

GLOBAL_ASM("asm/EnGeldB_Destroy.s")

GLOBAL_ASM("asm/EnGeldB_Update.s")

GLOBAL_ASM("asm/EnGeldB_Draw.s")
}
