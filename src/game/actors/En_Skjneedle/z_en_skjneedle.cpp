extern "C" {
#include "z_en_skjneedle.hpp"

#define FLAGS 0x00000205

void EnSkjneedle_Init(Actor* actor, GameState* state);
void EnSkjneedle_Destroy(Actor* actor, GameState* state);
void EnSkjneedle_Update(Actor* actor, GameState* state);
void EnSkjneedle_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Skjneedle.data.s")

ActorInit En_Skjneedle_InitVars = {
    ACTOR_EN_SKJNEEDLE,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_SKJ,
    sizeof(EnSkjneedle),
    (ActorFunc)EnSkjneedle_Init,
    (ActorFunc)EnSkjneedle_Destroy,
    (ActorFunc)EnSkjneedle_Update,
    (ActorFunc)EnSkjneedle_Draw,
};

GLOBAL_ASM("asm/EnSkjneedle_Init.s")

GLOBAL_ASM("asm/EnSkjneedle_Destroy.s")

GLOBAL_ASM("asm/EnSkjneedle_Update.s")

GLOBAL_ASM("asm/EnSkjneedle_Draw.s")
}
