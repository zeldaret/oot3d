extern "C" {
#include "z_en_horse_zelda.hpp"

#define FLAGS 0x00000010

void EnHorseZelda_Init(Actor* actor, GameState* state);
void EnHorseZelda_Destroy(Actor* actor, GameState* state);
void EnHorseZelda_Update(Actor* actor, GameState* state);
void EnHorseZelda_Draw(Actor* actor, GameState* state);

ActorInit En_Horse_Zelda_InitVars = {
    ACTOR_EN_HORSE_ZELDA,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HORSE_ZELDA,
    sizeof(EnHorseZelda),
    (ActorFunc)EnHorseZelda_Init,
    (ActorFunc)EnHorseZelda_Destroy,
    (ActorFunc)EnHorseZelda_Update,
    (ActorFunc)EnHorseZelda_Draw,
};

GLOBAL_ASM("asm/EnHorseZelda_Init.s")

GLOBAL_ASM("asm/EnHorseZelda_Destroy.s")

GLOBAL_ASM("asm/EnHorseZelda_Update.s")

GLOBAL_ASM("asm/EnHorseZelda_Draw.s")
}
