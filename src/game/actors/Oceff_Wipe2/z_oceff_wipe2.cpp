extern "C" {
#include "z_oceff_wipe2.hpp"

#define FLAGS 0x02000010

void OceffWipe2_Init(Actor* actor, GameState* state);
void OceffWipe2_Destroy(Actor* actor, GameState* state);
void OceffWipe2_Update(Actor* actor, GameState* state);
void OceffWipe2_Draw(Actor* actor, GameState* state);

ActorInit Oceff_Wipe2_InitVars = {
    ACTOR_OCEFF_WIPE2,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(OceffWipe2),
    (ActorFunc)OceffWipe2_Init,
    (ActorFunc)OceffWipe2_Destroy,
    (ActorFunc)OceffWipe2_Update,
    (ActorFunc)OceffWipe2_Draw,
};

GLOBAL_ASM("asm/OceffWipe2_Init.s")

GLOBAL_ASM("asm/OceffWipe2_Destroy.s")

GLOBAL_ASM("asm/OceffWipe2_Update.s")

GLOBAL_ASM("asm/OceffWipe2_Draw.s")
}
