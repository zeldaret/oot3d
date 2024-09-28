extern "C" {
#include "z_en_sda.hpp"

#define FLAGS 0x00000030

void EnSda_Init(Actor* actor, GameState* state);
void EnSda_Destroy(Actor* actor, GameState* state);
void EnSda_Update(Actor* actor, GameState* state);
void EnSda_Draw(Actor* actor, GameState* state);

ActorInit En_Sda_InitVars = {
    ACTOR_EN_SDA,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnSda),
    (ActorFunc)EnSda_Init,
    (ActorFunc)EnSda_Destroy,
    (ActorFunc)EnSda_Update,
    (ActorFunc)EnSda_Draw,
};

GLOBAL_ASM("asm/EnSda_Init.s")

GLOBAL_ASM("asm/EnSda_Destroy.s")

GLOBAL_ASM("asm/EnSda_Update.s")

GLOBAL_ASM("asm/EnSda_Draw.s")
}
