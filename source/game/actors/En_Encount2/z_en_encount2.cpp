extern "C" {
#include "z_en_encount2.hpp"

#define FLAGS 0x00000030

void EnEncount2_Init(Actor* actor, GameState* state);
void EnEncount2_Destroy(Actor* actor, GameState* state);
void EnEncount2_Update(Actor* actor, GameState* state);
void EnEncount2_Draw(Actor* actor, GameState* state);

ActorInit En_Encount2_InitVars = {
    ACTOR_EN_ENCOUNT2,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_EFC_STAR_FIELD,
    sizeof(EnEncount2),
    (ActorFunc)EnEncount2_Init,
    (ActorFunc)EnEncount2_Destroy,
    (ActorFunc)EnEncount2_Update,
    (ActorFunc)EnEncount2_Draw,
};

GLOBAL_ASM("asm/EnEncount2_Init.s")

GLOBAL_ASM("asm/EnEncount2_Destroy.s")

GLOBAL_ASM("asm/EnEncount2_Update.s")

GLOBAL_ASM("asm/EnEncount2_Draw.s")
}
