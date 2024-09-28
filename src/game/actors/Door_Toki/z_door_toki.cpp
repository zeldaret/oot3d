extern "C" {
#include "z_door_toki.hpp"

#define FLAGS 0x80000000

void DoorToki_Init(Actor* actor, GameState* state);
void DoorToki_Destroy(Actor* actor, GameState* state);
void DoorToki_Update(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Door_Toki.data.s")

ActorInit Door_Toki_InitVars = {
    ACTOR_DOOR_TOKI,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_TOKI_OBJECTS,
    sizeof(DoorToki),
    (ActorFunc)DoorToki_Init,
    (ActorFunc)DoorToki_Destroy,
    (ActorFunc)DoorToki_Update,
    NULL,
};

GLOBAL_ASM("asm/DoorToki_Init.s")

GLOBAL_ASM("asm/DoorToki_Destroy.s")

GLOBAL_ASM("asm/DoorToki_Update.s")
}
