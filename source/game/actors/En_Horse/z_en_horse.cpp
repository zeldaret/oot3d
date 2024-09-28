extern "C" {
#include "z_en_horse.hpp"

#define FLAGS 0x80000010

void EnHorse_Init(Actor* actor, GameState* state);
void EnHorse_Destroy(Actor* actor, GameState* state);
void EnHorse_Update(Actor* actor, GameState* state);
void EnHorse_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Horse.data_005265BC.s")
GLOBAL_ASM("data/z_En_Horse.data_00526F0C.s")

ActorInit En_Horse_InitVars = {
    ACTOR_EN_HORSE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HORSE,
    sizeof(EnHorse),
    (ActorFunc)EnHorse_Init,
    (ActorFunc)EnHorse_Destroy,
    (ActorFunc)EnHorse_Update,
    (ActorFunc)EnHorse_Draw,
};

GLOBAL_ASM("asm/EnHorse_Init.s")

GLOBAL_ASM("asm/EnHorse_Destroy.s")

GLOBAL_ASM("asm/EnHorse_Update.s")

GLOBAL_ASM("asm/EnHorse_Draw.s")
}
