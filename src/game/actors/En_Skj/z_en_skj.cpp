extern "C" {
#include "z_en_skj.hpp"

#define FLAGS 0x02000015

void EnSkj_Init(Actor* actor, GameState* state);
void EnSkj_Destroy(Actor* actor, GameState* state);
void EnSkj_Update(Actor* actor, GameState* state);
void EnSkj_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Skj.data.s")

ActorInit En_Skj_InitVars = {
    ACTOR_EN_SKJ,
    ACTORCAT_ENEMY,
    FLAGS,
    OBJECT_SKJ,
    sizeof(EnSkj),
    (ActorFunc)EnSkj_Init,
    (ActorFunc)EnSkj_Destroy,
    (ActorFunc)EnSkj_Update,
    (ActorFunc)EnSkj_Draw,
};

GLOBAL_ASM("asm/EnSkj_Init.s")

GLOBAL_ASM("asm/EnSkj_Destroy.s")

GLOBAL_ASM("asm/EnSkj_Update.s")

GLOBAL_ASM("asm/EnSkj_Draw.s")

GLOBAL_ASM("asm/EnSkj_CleanupOcarinaGame.s")

GLOBAL_ASM("asm/EnSkj_FailedMiniGame.s")

GLOBAL_ASM("asm/EnSkj_OcarinaMinigameShortStumpUpdate.s")

GLOBAL_ASM("asm/EnSkj_SariasSongShortStumpUpdate.s")

GLOBAL_ASM("asm/EnSkj_SetupWaitForOcarina.s")

GLOBAL_ASM("asm/EnSkj_StartOcarinaMinigame.s")

GLOBAL_ASM("asm/EnSkj_WaitForNextRound.s")

GLOBAL_ASM("asm/EnSkj_WaitForOcarina.s")

GLOBAL_ASM("asm/EnSkj_WaitForOfferResponse.s")

GLOBAL_ASM("asm/EnSkj_WaitForPlayback.s")

GLOBAL_ASM("asm/EnSkj_WaitToGiveReward.s")

GLOBAL_ASM("asm/EnSkj_WonOcarinaMiniGame.s")

}
