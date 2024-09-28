extern "C" {
#include "z_obj_makekinsuta.hpp"

#define FLAGS 0x00000010

void ObjMakekinsuta_Init(Actor* actor, GameState* state);
void ObjMakekinsuta_Destroy(Actor* actor, GameState* state);
void ObjMakekinsuta_Update(Actor* actor, GameState* state);

ActorInit Obj_Makekinsuta_InitVars = {
    ACTOR_OBJ_MAKEKINSUTA,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjMakekinsuta),
    (ActorFunc)ObjMakekinsuta_Init,
    (ActorFunc)Actor_Noop,
    (ActorFunc)ObjMakekinsuta_Update,
    NULL,
};

GLOBAL_ASM("asm/ObjMakekinsuta_Init.s")

GLOBAL_ASM("asm/ObjMakekinsuta_Update.s")
}
