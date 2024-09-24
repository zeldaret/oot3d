extern "C" {
#include "z_obj_bean.hpp"

#define FLAGS 0x00400000

void ObjBean_Init(Actor* actor, GameState* state);
void ObjBean_Destroy(Actor* actor, GameState* state);
void ObjBean_Update(Actor* actor, GameState* state);
void ObjBean_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Bean.data.s")

ActorInit Obj_Bean_InitVars = {
    ACTOR_OBJ_BEAN,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_MAMENOKI,
    sizeof(ObjBean),
    (ActorFunc)ObjBean_Init,
    (ActorFunc)ObjBean_Destroy,
    (ActorFunc)ObjBean_Update,
    (ActorFunc)ObjBean_Draw,
};

GLOBAL_ASM("asm/ObjBean_Init.s")

GLOBAL_ASM("asm/ObjBean_Destroy.s")

GLOBAL_ASM("asm/ObjBean_Update.s")

GLOBAL_ASM("asm/ObjBean_Draw.s")
}
