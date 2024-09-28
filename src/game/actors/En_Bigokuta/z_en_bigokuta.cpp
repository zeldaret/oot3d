extern "C" {
#include "z_en_bigokuta.hpp"

#define FLAGS 0x00000035

void EnBigokuta_Init(Actor* actor, GameState* state);
void EnBigokuta_Destroy(Actor* actor, GameState* state);
void EnBigokuta_Update(Actor* actor, GameState* state);
void EnBigokuta_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Bigokuta.data_00520D58.s")
GLOBAL_ASM("data/z_En_Bigokuta.data_00520E40.s")

ActorInit En_Bigokuta_InitVars = {
    ACTOR_EN_BIGOKUTA,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_BIGOKUTA,
    sizeof(EnBigokuta),
    (ActorFunc)EnBigokuta_Init,
    (ActorFunc)EnBigokuta_Destroy,
    (ActorFunc)EnBigokuta_Update,
    (ActorFunc)EnBigokuta_Draw,
};

GLOBAL_ASM("asm/EnBigokuta_Init.s")

GLOBAL_ASM("asm/EnBigokuta_Destroy.s")

GLOBAL_ASM("asm/EnBigokuta_Update.s")

GLOBAL_ASM("asm/EnBigokuta_Draw.s")
}
