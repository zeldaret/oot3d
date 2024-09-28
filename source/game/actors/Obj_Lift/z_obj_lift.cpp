extern "C" {
#include "z_obj_lift.hpp"

#define FLAGS 0x00400010

void ObjLift_Init(Actor* actor, GameState* state);
void ObjLift_Destroy(Actor* actor, GameState* state);
void ObjLift_Update(Actor* actor, GameState* state);
void ObjLift_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Lift.data.s")

ActorInit Obj_Lift_InitVars = {
    ACTOR_OBJ_LIFT,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_D_LIFT,
    sizeof(ObjLift),
    (ActorFunc)ObjLift_Init,
    (ActorFunc)ObjLift_Destroy,
    (ActorFunc)ObjLift_Update,
    (ActorFunc)ObjLift_Draw,
};

GLOBAL_ASM("asm/ObjLift_Init.s")

GLOBAL_ASM("asm/ObjLift_Destroy.s")

GLOBAL_ASM("asm/ObjLift_Update.s")

GLOBAL_ASM("asm/ObjLift_Draw.s")
}
