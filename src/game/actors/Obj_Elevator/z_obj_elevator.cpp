extern "C" {
#include "z_obj_elevator.hpp"

#define FLAGS 0x80400000

void ObjElevator_Init(Actor* actor, GameState* state);
void ObjElevator_Destroy(Actor* actor, GameState* state);
void ObjElevator_Update(Actor* actor, GameState* state);
void ObjElevator_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Elevator.data.s")

ActorInit Obj_Elevator_InitVars = {
    ACTOR_OBJ_ELEVATOR,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_D_ELEVATOR,
    sizeof(ObjElevator),
    (ActorFunc)ObjElevator_Init,
    (ActorFunc)ObjElevator_Destroy,
    (ActorFunc)ObjElevator_Update,
    (ActorFunc)ObjElevator_Draw,
};

GLOBAL_ASM("asm/ObjElevator_Init.s")

GLOBAL_ASM("asm/ObjElevator_Destroy.s")

GLOBAL_ASM("asm/ObjElevator_Update.s")

GLOBAL_ASM("asm/ObjElevator_Draw.s")
}
