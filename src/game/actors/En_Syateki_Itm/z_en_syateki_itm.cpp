extern "C" {
#include "z_en_syateki_itm.hpp"

#define FLAGS 0x80000010

void EnSyatekiItm_Init(Actor* actor, GameState* state);
void EnSyatekiItm_Destroy(Actor* actor, GameState* state);
void EnSyatekiItm_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Syateki_Itm.data.s")

ActorInit En_Syateki_Itm_InitVars = {
    ACTOR_EN_SYATEKI_ITM,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnSyatekiItm),
    (ActorFunc)EnSyatekiItm_Init,
    (ActorFunc)EnSyatekiItm_Destroy,
    (ActorFunc)EnSyatekiItm_Update,
    NULL,
};

GLOBAL_ASM("asm/EnSyatekiItm_Init.s")

GLOBAL_ASM("asm/EnSyatekiItm_Destroy.s")

GLOBAL_ASM("asm/EnSyatekiItm_Update.s")
}
