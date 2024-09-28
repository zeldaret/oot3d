extern "C" {
#include "z_en_vb_ball.hpp"

#define FLAGS 0x80000030

void EnVbBall_Init(Actor* actor, GameState* state);
void EnVbBall_Destroy(Actor* actor, GameState* state);
void EnVbBall_Update(Actor* actor, GameState* state);
void EnVbBall_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Vb_Ball.data.s")

ActorInit En_Vb_Ball_InitVars = {
    ACTOR_PLAYER,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_FD,
    sizeof(EnVbBall),
    (ActorFunc)EnVbBall_Init,
    (ActorFunc)EnVbBall_Destroy,
    (ActorFunc)EnVbBall_Update,
    (ActorFunc)EnVbBall_Draw,
};

GLOBAL_ASM("asm/EnVbBall_Init.s")

GLOBAL_ASM("asm/EnVbBall_Destroy.s")

GLOBAL_ASM("asm/EnVbBall_Update.s")

GLOBAL_ASM("asm/EnVbBall_Draw.s")
}
