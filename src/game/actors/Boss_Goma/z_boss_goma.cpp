extern "C" {
#include "z_boss_goma.hpp"

#define FLAGS 0x00000035

void BossGoma_Init(Actor* actor, GameState* state);
void BossGoma_Destroy(Actor* actor, GameState* state);
void BossGoma_Update(Actor* actor, GameState* state);
void BossGoma_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_Boss_Goma.data.s")

ActorInit Boss_Goma_InitVars = {
    ACTOR_BOSS_GOMA,
    ACTORCAT_BOSS,
    FLAGS,
    OBJECT_GOMA,
    sizeof(BossGoma),
    (ActorFunc)BossGoma_Init,
    (ActorFunc)BossGoma_Destroy,
    (ActorFunc)BossGoma_Update,
    (ActorFunc)BossGoma_Draw,
};

GLOBAL_ASM("asm/BossGoma_Init.s")

GLOBAL_ASM("asm/BossGoma_Destroy.s")

GLOBAL_ASM("asm/BossGoma_Update.s")

GLOBAL_ASM("asm/BossGoma_Draw.s")

GLOBAL_ASM("asm/BossGoma_CeilingIdle.s")

GLOBAL_ASM("asm/BossGoma_CeilingMoveToCenter.s")

GLOBAL_ASM("asm/BossGoma_CeilingPrepareSpawnGohmas.s")

GLOBAL_ASM("asm/BossGoma_CeilingSpawnGohmas.s")

GLOBAL_ASM("asm/BossGoma_Defeated.s")

GLOBAL_ASM("asm/BossGoma_Encounter.s")

GLOBAL_ASM("asm/BossGoma_FallStruckDown.s")

GLOBAL_ASM("asm/BossGoma_FloorAttack.s")

GLOBAL_ASM("asm/BossGoma_FloorAttackPosture.s")

GLOBAL_ASM("asm/BossGoma_FloorDamaged.s")

GLOBAL_ASM("asm/BossGoma_FloorIdle.s")

GLOBAL_ASM("asm/BossGoma_FloorLandStruckDown.s")

GLOBAL_ASM("asm/BossGoma_FloorMain.s")

GLOBAL_ASM("asm/BossGoma_FloorPrepareAttack.s")

GLOBAL_ASM("asm/BossGoma_FloorStunned.s")

GLOBAL_ASM("asm/BossGoma_OverrideLimbDraw.s")

GLOBAL_ASM("asm/BossGoma_PlayEffectsAndSfx.s")

GLOBAL_ASM("asm/BossGoma_PostLimbDraw.s")

GLOBAL_ASM("asm/BossGoma_SetupCeilingIdle.s")

GLOBAL_ASM("asm/BossGoma_SetupEncounterState4.s")

GLOBAL_ASM("asm/BossGoma_SetupFloorMain.s")

GLOBAL_ASM("asm/BossGoma_UpdateCeilingMovement.s")

GLOBAL_ASM("asm/BossGoma_UpdateHit.s")

GLOBAL_ASM("asm/BossGoma_WallClimb.s")

GLOBAL_ASM("asm/FUN_003524ec.s")

}
