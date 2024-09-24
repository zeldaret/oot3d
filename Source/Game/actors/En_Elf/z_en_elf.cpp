extern "C" {
#include "z_en_elf.hpp"

#define FLAGS 0x02000030

void EnElf_Init(Actor* actor, GameState* state);
void EnElf_Destroy(Actor* actor, GameState* state);
void EnElf_Update(Actor* actor, GameState* state);
void EnElf_Draw(Actor* actor, GameState* state);

GLOBAL_ASM("data/z_En_Elf.data_00522E74.s")
GLOBAL_ASM("data/z_En_Elf.data_005230C4.s")

ActorInit En_Elf_InitVars = {
    ACTOR_EN_ELF,
    ACTORCAT_ITEMACTION,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnElf),
    (ActorFunc)EnElf_Init,
    (ActorFunc)EnElf_Destroy,
    (ActorFunc)EnElf_Update,
    (ActorFunc)EnElf_Draw,
};

GLOBAL_ASM("asm/EnElf_Init.s")

GLOBAL_ASM("asm/EnElf_Destroy.s")

GLOBAL_ASM("asm/EnElf_Update.s")

GLOBAL_ASM("asm/EnElf_Draw.s")
}
