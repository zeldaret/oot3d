extern "C" {
#include "non_matchings.hpp"
#include "z3D.hpp"
#include "z3Dactor.hpp"
#include "z3Dbgcheck.hpp"

GLOBAL_ASM("data/z_bgcheck.data.s")

void ReadCollisionHeaderFromZsi(void* arg1, CollisionHeader** col) {
    *col = (CollisionHeader*) arg1;
}

void* DynaPolyInfo_Alloc(DynaPolyActor* dyna, GameState* state, s32 index) {
    PlayState* play = (PlayState*)state;
    
    return play->GetObjectStatus(dyna->actor.objBankIndex)->zarInfo.FUN_003532c0(index);
}
}
