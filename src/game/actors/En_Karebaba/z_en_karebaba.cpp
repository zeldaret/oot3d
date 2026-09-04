extern "C" {
#include "z_en_karebaba.hpp"

#define FLAGS 0x00000005

void EnKarebaba_Init(Actor* actor, GameState* state);
void EnKarebaba_Destroy(Actor* actor, GameState* state);
void EnKarebaba_Update(Actor* actor, GameState* state);
void EnKarebaba_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Karebaba.data.s")

ActorInit En_Karebaba_InitVars = {
    ACTOR_EN_KAREBABA,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_DEKUBABA,
    sizeof(EnKarebaba),
    (ActorFunc)EnKarebaba_Init,
    (ActorFunc)EnKarebaba_Destroy,
    (ActorFunc)EnKarebaba_Update,
    (ActorFunc)EnKarebaba_Draw,
};

GLOBAL_ASM("asm/EnKarebaba_Init.s")

GLOBAL_ASM("asm/EnKarebaba_Destroy.s")

GLOBAL_ASM("asm/EnKarebaba_Update.s")

GLOBAL_ASM("asm/EnKarebaba_Draw.s")

GLOBAL_ASM("asm/EnKarebaba_Awaken.s")

GLOBAL_ASM("asm/EnKarebaba_Dead.s")

GLOBAL_ASM("asm/EnKarebaba_DeadItemDrop.s")

GLOBAL_ASM("asm/EnKarebaba_Dying.s")

GLOBAL_ASM("asm/EnKarebaba_Grow.s")

GLOBAL_ASM("asm/EnKarebaba_Idle.s")

GLOBAL_ASM("asm/EnKarebaba_Regrow.s")

GLOBAL_ASM("asm/EnKarebaba_Retract.s")

GLOBAL_ASM("asm/EnKarebaba_SetupIdle.s")

GLOBAL_ASM("asm/EnKarebaba_Spin.s")

GLOBAL_ASM("asm/EnKarebaba_Upright.s")

}
