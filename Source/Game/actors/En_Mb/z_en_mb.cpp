extern "C" {
#include "z_en_mb.hpp"

#define FLAGS 0x00000015

void EnMb_Init(Actor* actor, GameState* state);
void EnMb_Destroy(Actor* actor, GameState* state);
void EnMb_Update(Actor* actor, GameState* state);
void EnMb_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Mb.data.s")

ActorInit En_Mb_InitVars = {
    ACTOR_EN_MB,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_MB,
    sizeof(EnMb),
    (ActorFunc)EnMb_Init,
    (ActorFunc)EnMb_Destroy,
    (ActorFunc)EnMb_Update,
    (ActorFunc)EnMb_Draw,
};

GLOBAL_ASM("asm/EnMb_Init.s")

GLOBAL_ASM("asm/EnMb_Destroy.s")

GLOBAL_ASM("asm/EnMb_Update.s")

GLOBAL_ASM("asm/EnMb_Draw.s")
}
