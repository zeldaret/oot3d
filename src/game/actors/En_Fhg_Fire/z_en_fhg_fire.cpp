extern "C" {
#include "z_en_fhg_fire.hpp"

#define FLAGS 0x00000030

void EnFhgFire_Init(Actor* actor, GameState* state);
void EnFhgFire_Destroy(Actor* actor, GameState* state);
void EnFhgFire_Update(Actor* actor, GameState* state);
void EnFhgFire_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Fhg_Fire.data.s")

ActorInit En_Fhg_Fire_InitVars = {
    ACTOR_PLAYER,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_FHG,
    sizeof(EnFhgFire),
    (ActorFunc)EnFhgFire_Init,
    (ActorFunc)EnFhgFire_Destroy,
    (ActorFunc)EnFhgFire_Update,
    (ActorFunc)EnFhgFire_Draw,
};

GLOBAL_ASM("asm/EnFhgFire_Init.s")

GLOBAL_ASM("asm/EnFhgFire_Destroy.s")

GLOBAL_ASM("asm/EnFhgFire_Update.s")

GLOBAL_ASM("asm/EnFhgFire_Draw.s")
}
