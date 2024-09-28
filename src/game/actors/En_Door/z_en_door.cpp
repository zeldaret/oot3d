extern "C" {
#include "z_en_door.hpp"

#define FLAGS 0x00400030

void EnDoor_Init(Actor* actor, GameState* state);
void EnDoor_Destroy(Actor* actor, GameState* state);
void EnDoor_Update(Actor* actor, GameState* state);
void EnDoor_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Door.data.s")

ActorInit En_Door_InitVars = {
    ACTOR_EN_DOOR,
    ACTORCAT_DOOR,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnDoor),
    (ActorFunc)EnDoor_Init,
    (ActorFunc)EnDoor_Destroy,
    (ActorFunc)EnDoor_Update,
    (ActorFunc)EnDoor_Draw,
};

GLOBAL_ASM("asm/EnDoor_Init.s")

GLOBAL_ASM("asm/EnDoor_Destroy.s")

GLOBAL_ASM("asm/EnDoor_Update.s")

GLOBAL_ASM("asm/EnDoor_Draw.s")
}
