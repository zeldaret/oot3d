extern "C" {
#include "z_door_warp1.hpp"

#define FLAGS 0x00000030

void DoorWarp1_Init(Actor* actor, GameState* state);
void DoorWarp1_Destroy(Actor* actor, GameState* state);
void DoorWarp1_Update(Actor* actor, GameState* state);
void DoorWarp1_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Door_Warp1.data.s")

ActorInit Door_Warp1_InitVars = {
    ACTOR_DOOR_WARP1,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_WARP1,
    sizeof(DoorWarp1),
    (ActorFunc)DoorWarp1_Init,
    (ActorFunc)DoorWarp1_Destroy,
    (ActorFunc)DoorWarp1_Update,
    (ActorFunc)DoorWarp1_Draw,
};

GLOBAL_ASM("asm/DoorWarp1_Init.s")

GLOBAL_ASM("asm/DoorWarp1_Destroy.s")

GLOBAL_ASM("asm/DoorWarp1_Update.s")

GLOBAL_ASM("asm/DoorWarp1_Draw.s")
}
