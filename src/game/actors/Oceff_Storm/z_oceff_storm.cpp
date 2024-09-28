extern "C" {
#include "z_oceff_storm.hpp"

#define FLAGS 0x02000030

void OceffStorm_Init(Actor* actor, GameState* state);
void OceffStorm_Destroy(Actor* actor, GameState* state);
void OceffStorm_Update(Actor* actor, GameState* state);
void OceffStorm_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Oceff_Storm.data.s")

ActorInit Oceff_Storm_InitVars = {
    ACTOR_OCEFF_STORM,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(OceffStorm),
    (ActorFunc)OceffStorm_Init,
    (ActorFunc)OceffStorm_Destroy,
    (ActorFunc)OceffStorm_Update,
    (ActorFunc)OceffStorm_Draw,
};

GLOBAL_ASM("asm/OceffStorm_Init.s")

GLOBAL_ASM("asm/OceffStorm_Destroy.s")

GLOBAL_ASM("asm/OceffStorm_Update.s")

GLOBAL_ASM("asm/OceffStorm_Draw.s")
}
