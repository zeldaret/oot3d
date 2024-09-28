extern "C" {
#include "z_obj_oshihiki.hpp"

#define FLAGS 0x00400010

void ObjOshihiki_Init(Actor* actor, GameState* state);
void ObjOshihiki_Destroy(Actor* actor, GameState* state);
void ObjOshihiki_Update(Actor* actor, GameState* state);
void ObjOshihiki_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Obj_Oshihiki.data.s")

ActorInit Obj_Oshihiki_InitVars = {
    ACTOR_OBJ_OSHIHIKI,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(ObjOshihiki),
    (ActorFunc)ObjOshihiki_Init,
    (ActorFunc)ObjOshihiki_Destroy,
    (ActorFunc)ObjOshihiki_Update,
    (ActorFunc)ObjOshihiki_Draw,
};

GLOBAL_ASM("asm/ObjOshihiki_Init.s")

GLOBAL_ASM("asm/ObjOshihiki_Destroy.s")

GLOBAL_ASM("asm/ObjOshihiki_Update.s")

GLOBAL_ASM("asm/ObjOshihiki_Draw.s")
}
