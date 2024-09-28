extern "C" {
#include "z_en_dodongo.hpp"

#define FLAGS 0x00000015

void EnDodongo_Init(Actor* actor, GameState* state);
void EnDodongo_Destroy(Actor* actor, GameState* state);
void EnDodongo_Update(Actor* actor, GameState* state);
void EnDodongo_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dodongo.data.s")

ActorInit En_Dodongo_InitVars = {
    ACTOR_EN_DODONGO,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_DODONGO,
    sizeof(EnDodongo),
    (ActorFunc)EnDodongo_Init,
    (ActorFunc)EnDodongo_Destroy,
    (ActorFunc)EnDodongo_Update,
    (ActorFunc)EnDodongo_Draw,
};

GLOBAL_ASM("asm/EnDodongo_Init.s")

GLOBAL_ASM("asm/EnDodongo_Destroy.s")

GLOBAL_ASM("asm/EnDodongo_Update.s")

GLOBAL_ASM("asm/EnDodongo_Draw.s")
}
