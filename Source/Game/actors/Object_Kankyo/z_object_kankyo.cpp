extern "C" {
#include "z_object_kankyo.hpp"

#define FLAGS 0x02000030

void ObjectKankyo_Init(Actor* actor, GameState* state);
void ObjectKankyo_Destroy(Actor* actor, GameState* state);
void ObjectKankyo_Update(Actor* actor, GameState* state);
void ObjectKankyo_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Object_Kankyo.data.s")

ActorInit Object_Kankyo_InitVars = {
    ACTOR_OBJECT_KANKYO,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(ObjectKankyo),
    (ActorFunc)ObjectKankyo_Init,
    (ActorFunc)ObjectKankyo_Destroy,
    (ActorFunc)ObjectKankyo_Update,
    (ActorFunc)ObjectKankyo_Draw,
};

GLOBAL_ASM("asm/ObjectKankyo_Init.s")

GLOBAL_ASM("asm/ObjectKankyo_Destroy.s")

GLOBAL_ASM("asm/ObjectKankyo_Update.s")

GLOBAL_ASM("asm/ObjectKankyo_Draw.s")
}
