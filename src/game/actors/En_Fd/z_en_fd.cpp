extern "C" {
#include "z_en_fd.hpp"

#define FLAGS 0x00000215

void EnFd_Init(Actor* actor, GameState* state);
void EnFd_Destroy(Actor* actor, GameState* state);
void EnFd_Update(Actor* actor, GameState* state);
void EnFd_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Fd.data.s")

ActorInit En_Fd_InitVars = {
    ACTOR_EN_FD,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_FW,
    sizeof(EnFd),
    (ActorFunc)EnFd_Init,
    (ActorFunc)EnFd_Destroy,
    (ActorFunc)EnFd_Update,
    (ActorFunc)EnFd_Draw,
};

GLOBAL_ASM("asm/EnFd_Init.s")

GLOBAL_ASM("asm/EnFd_Destroy.s")

GLOBAL_ASM("asm/EnFd_Update.s")

GLOBAL_ASM("asm/EnFd_Draw.s")
}
