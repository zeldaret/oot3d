extern "C" {
#include "z_en_horse.hpp"

#define FLAGS 0x80000010

void EnHorse_Init(Actor* actor, GameState* state);
void EnHorse_Destroy(Actor* actor, GameState* state);
void EnHorse_Update(Actor* actor, GameState* state);
void EnHorse_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Horse.data_005265BC.s")
GLOBAL_ASM("data/z_En_Horse.data_00526F0C.s")

ActorInit En_Horse_InitVars = {
    ACTOR_EN_HORSE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_HORSE,
    sizeof(EnHorse),
    (ActorFunc)EnHorse_Init,
    (ActorFunc)EnHorse_Destroy,
    (ActorFunc)EnHorse_Update,
    (ActorFunc)EnHorse_Draw,
};

GLOBAL_ASM("asm/EnHorse_Init.s")

GLOBAL_ASM("asm/EnHorse_Destroy.s")

GLOBAL_ASM("asm/EnHorse_Update.s")

GLOBAL_ASM("asm/EnHorse_Draw.s")

GLOBAL_ASM("asm/EnHorse_BgCheckBridgeJumpPoint.s")

GLOBAL_ASM("asm/EnHorse_BridgeJump.s")

GLOBAL_ASM("asm/EnHorse_BridgeJumpInit.s")

GLOBAL_ASM("asm/EnHorse_CutsceneUpdate.s")

GLOBAL_ASM("asm/EnHorse_FleePlayer.s")

GLOBAL_ASM("asm/EnHorse_FollowPlayer.s")

GLOBAL_ASM("asm/EnHorse_Frozen.s")

GLOBAL_ASM("asm/EnHorse_HighJump.s")

GLOBAL_ASM("asm/EnHorse_HighJumpInit.s")

GLOBAL_ASM("asm/EnHorse_Idle.s")

GLOBAL_ASM("asm/EnHorse_IdleAnimSounds.s")

GLOBAL_ASM("asm/EnHorse_Inactive.s")

GLOBAL_ASM("asm/EnHorse_InitHorsebackArchery.s")

GLOBAL_ASM("asm/EnHorse_LowJump.s")

GLOBAL_ASM("asm/EnHorse_LowJumpInit.s")

GLOBAL_ASM("asm/EnHorse_MountedGallop.s")

GLOBAL_ASM("asm/EnHorse_MountedIdle.s")

GLOBAL_ASM("asm/EnHorse_MountedIdleWhinneying.s")

GLOBAL_ASM("asm/EnHorse_MountedRearing.s")

GLOBAL_ASM("asm/EnHorse_MountedTrot.s")

GLOBAL_ASM("asm/EnHorse_MountedTurn.s")

GLOBAL_ASM("asm/EnHorse_MountedWalk.s")

GLOBAL_ASM("asm/EnHorse_ObstructMovement.s")

GLOBAL_ASM("asm/EnHorse_OverrideLimbDraw.s")

GLOBAL_ASM("asm/EnHorse_PlayIdleAnimation.s")

GLOBAL_ASM("asm/EnHorse_PlayWalkingSound.s")

GLOBAL_ASM("asm/EnHorse_PlayerCanMove.s")

GLOBAL_ASM("asm/EnHorse_PostLimbDraw.s")

GLOBAL_ASM("asm/EnHorse_ResolveCollision.s")

GLOBAL_ASM("asm/EnHorse_Reverse.s")

GLOBAL_ASM("asm/EnHorse_RotateToPoint.s")

GLOBAL_ASM("asm/EnHorse_SetFollowAnimation.s")

GLOBAL_ASM("asm/EnHorse_Spawn.s")

GLOBAL_ASM("asm/EnHorse_StartBraking.s")

GLOBAL_ASM("asm/EnHorse_StartMountedIdle.s")

GLOBAL_ASM("asm/EnHorse_StartMovingAnimation.s")

GLOBAL_ASM("asm/EnHorse_StartReversingInterruptable.s")

GLOBAL_ASM("asm/EnHorse_StartWalking.s")

GLOBAL_ASM("asm/EnHorse_StickDirection.s")

GLOBAL_ASM("asm/EnHorse_Stopping.s")

GLOBAL_ASM("asm/EnHorse_UpdateBgCheckInfo.s")

GLOBAL_ASM("asm/EnHorse_UpdateHorsebackArchery.s")

GLOBAL_ASM("asm/EnHorse_UpdateIngoHorseAnim.s")

GLOBAL_ASM("asm/EnHorse_UpdateIngoRace.s")

GLOBAL_ASM("asm/EnHorse_UpdateSpeed.s")

}
