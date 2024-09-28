extern "C" {
#include "z_en_ossan.hpp"

#define FLAGS 0x00000019

void EnOssan_Init(Actor* actor, GameState* state);
void EnOssan_Destroy(Actor* actor, GameState* state);
void EnOssan_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ossan.data.s")

ActorInit En_Ossan_InitVars = {
    ACTOR_EN_OSSAN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnOssan),
    (ActorFunc)EnOssan_Init,
    (ActorFunc)EnOssan_Destroy,
    (ActorFunc)EnOssan_Update,
    NULL,
};

GLOBAL_ASM("asm/EnOssan_Init.s")

GLOBAL_ASM("asm/EnOssan_Destroy.s")

GLOBAL_ASM("asm/EnOssan_Update.s")
}
