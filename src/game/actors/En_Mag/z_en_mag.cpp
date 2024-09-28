extern "C" {
#include "z_en_mag.hpp"

#define FLAGS 0x00000030

void EnMag_Init(Actor* actor, GameState* state);
void EnMag_Destroy(Actor* actor, GameState* state);
void EnMag_Update(Actor* actor, GameState* state);
void EnMag_Draw(Actor* actor, GameState* state);

ActorInit En_Mag_InitVars = {
    ACTOR_EN_MAG,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_MAG,
    sizeof(EnMag),
    (ActorFunc)EnMag_Init,
    (ActorFunc)EnMag_Destroy,
    (ActorFunc)EnMag_Update,
    (ActorFunc)EnMag_Draw,
};

GLOBAL_ASM("asm/EnMag_Init.s")

GLOBAL_ASM("asm/EnMag_Destroy.s")

GLOBAL_ASM("asm/EnMag_Update.s")

GLOBAL_ASM("asm/EnMag_Draw.s")
}
