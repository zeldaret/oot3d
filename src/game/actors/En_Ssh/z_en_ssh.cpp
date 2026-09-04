extern "C" {
#include "z_en_ssh.hpp"

#define FLAGS 0x00000035

void EnSsh_Init(Actor* actor, GameState* state);
void EnSsh_Destroy(Actor* actor, GameState* state);
void EnSsh_Update(Actor* actor, GameState* state);
void EnSsh_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Ssh.data.s")

ActorInit En_Ssh_InitVars = {
    ACTOR_EN_SSH,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_SSH,
    sizeof(EnSsh),
    (ActorFunc)EnSsh_Init,
    (ActorFunc)EnSsh_Destroy,
    (ActorFunc)EnSsh_Update,
    (ActorFunc)EnSsh_Draw,
};

GLOBAL_ASM("asm/EnSsh_Init.s")

GLOBAL_ASM("asm/EnSsh_Destroy.s")

GLOBAL_ASM("asm/EnSsh_Update.s")

GLOBAL_ASM("asm/EnSsh_Draw.s")

GLOBAL_ASM("asm/EnSsh_Drop.s")

GLOBAL_ASM("asm/EnSsh_Idle.s")

GLOBAL_ASM("asm/EnSsh_IsCloseToLink.s")

GLOBAL_ASM("asm/EnSsh_Land.s")

GLOBAL_ASM("asm/EnSsh_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnSsh_PostLimbDraw.s")

GLOBAL_ASM("asm/EnSsh_Return.s")

GLOBAL_ASM("asm/EnSsh_SetAnimation.s")

GLOBAL_ASM("asm/EnSsh_SetColliderScale.s")

GLOBAL_ASM("asm/EnSsh_Start.s")

GLOBAL_ASM("asm/EnSsh_Talk.s")

GLOBAL_ASM("asm/EnSsh_Wait.s")

}
