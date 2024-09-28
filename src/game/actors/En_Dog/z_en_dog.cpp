extern "C" {
#include "z_en_dog.hpp"

#define FLAGS 0x00000000

void EnDog_Init(Actor* actor, GameState* state);
void EnDog_Destroy(Actor* actor, GameState* state);
void EnDog_Update(Actor* actor, GameState* state);
void EnDog_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Dog.data.s")

ActorInit En_Dog_InitVars = {
    ACTOR_EN_DOG,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DOG,
    sizeof(EnDog),
    (ActorFunc)EnDog_Init,
    (ActorFunc)EnDog_Destroy,
    (ActorFunc)EnDog_Update,
    (ActorFunc)EnDog_Draw,
};

GLOBAL_ASM("asm/EnDog_Init.s")

GLOBAL_ASM("asm/EnDog_Destroy.s")

GLOBAL_ASM("asm/EnDog_Update.s")

GLOBAL_ASM("asm/EnDog_Draw.s")
}
