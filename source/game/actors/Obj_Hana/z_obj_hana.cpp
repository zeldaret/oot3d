extern "C" {
#include "z_obj_hana.hpp"

#define FLAGS 0x80000000

void ObjHana_Init(Actor* actor, GameState* state);
void ObjHana_Destroy(Actor* actor, GameState* state);
void ObjHana_Update(Actor* actor, GameState* state);
void ObjHana_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Hana.data.s")

ActorInit Obj_Hana_InitVars = {
    ACTOR_OBJ_HANA,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_FIELD_KEEP,
    sizeof(ObjHana),
    (ActorFunc)ObjHana_Init,
    (ActorFunc)ObjHana_Destroy,
    (ActorFunc)ObjHana_Update,
    (ActorFunc)ObjHana_Draw,
};

GLOBAL_ASM("asm/ObjHana_Init.s")

GLOBAL_ASM("asm/ObjHana_Destroy.s")

GLOBAL_ASM("asm/ObjHana_Update.s")

GLOBAL_ASM("asm/ObjHana_Draw.s")
}
