extern "C" {
#include "z_en_kakasi.hpp"

#define FLAGS 0x02000009

void EnKakasi_Init(Actor* actor, GameState* state);
void EnKakasi_Destroy(Actor* actor, GameState* state);
void EnKakasi_Update(Actor* actor, GameState* state);
void EnKakasi_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Kakasi.data.s")

ActorInit En_Kakasi_InitVars = {
    ACTOR_EN_KAKASI,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_KA,
    sizeof(EnKakasi),
    (ActorFunc)EnKakasi_Init,
    (ActorFunc)EnKakasi_Destroy,
    (ActorFunc)EnKakasi_Update,
    (ActorFunc)EnKakasi_Draw,
};

GLOBAL_ASM("asm/EnKakasi_Init.s")

GLOBAL_ASM("asm/EnKakasi_Destroy.s")

GLOBAL_ASM("asm/EnKakasi_Update.s")

GLOBAL_ASM("asm/EnKakasi_Draw.s")
}
