extern "C" {
#include "z_obj_roomtimer.hpp"

#define FLAGS 0x00000010

void ObjRoomtimer_Init(Actor* actor, GameState* state);
void ObjRoomtimer_Destroy(Actor* actor, GameState* state);
void ObjRoomtimer_Update(Actor* actor, GameState* state);

ActorInit Obj_Roomtimer_InitVars = {
    ACTOR_OBJ_ROOMTIMER,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjRoomtimer),
    (ActorFunc)ObjRoomtimer_Init,
    (ActorFunc)ObjRoomtimer_Destroy,
    (ActorFunc)ObjRoomtimer_Update,
    NULL,
};

GLOBAL_ASM("asm/ObjRoomtimer_Init.s")

GLOBAL_ASM("asm/ObjRoomtimer_Destroy.s")

GLOBAL_ASM("asm/ObjRoomtimer_Update.s")
}
