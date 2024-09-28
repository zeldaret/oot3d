extern "C" {
#include "z_en_a_obj.hpp"

#define FLAGS 0x00000010

void EnAObj_Init(Actor* actor, GameState* state);
void EnAObj_Destroy(Actor* actor, GameState* state);
void EnAObj_Update(Actor* actor, GameState* state);
void EnAObj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_A_Obj.data.s")

ActorInit En_A_Obj_InitVars = {
    ACTOR_EN_A_OBJ,
    ACTORCAT_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnAObj),
    (ActorFunc)EnAObj_Init,
    (ActorFunc)EnAObj_Destroy,
    (ActorFunc)EnAObj_Update,
    (ActorFunc)EnAObj_Draw,
};

GLOBAL_ASM("asm/EnAObj_Init.s")

GLOBAL_ASM("asm/EnAObj_Destroy.s")

GLOBAL_ASM("asm/EnAObj_Update.s")

GLOBAL_ASM("asm/EnAObj_Draw.s")
}
