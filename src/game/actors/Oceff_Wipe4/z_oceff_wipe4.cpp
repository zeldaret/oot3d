extern "C" {
#include "z_oceff_wipe4.hpp"

#define FLAGS 0x02000010

void OceffWipe4_Init(Actor* actor, GameState* state);
void OceffWipe4_Destroy(Actor* actor, GameState* state);
void OceffWipe4_Update(Actor* actor, GameState* state);
void OceffWipe4_Draw(Actor* actor, GameState* state);

ActorInit Oceff_Wipe4_InitVars = {
    ACTOR_OCEFF_WIPE4,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(OceffWipe4),
    (ActorFunc)OceffWipe4_Init,
    (ActorFunc)OceffWipe4_Destroy,
    (ActorFunc)OceffWipe4_Update,
    (ActorFunc)OceffWipe4_Draw,
};

GLOBAL_ASM("asm/OceffWipe4_Init.s")

GLOBAL_ASM("asm/OceffWipe4_Destroy.s")

GLOBAL_ASM("asm/OceffWipe4_Update.s")

GLOBAL_ASM("asm/OceffWipe4_Draw.s")
}
