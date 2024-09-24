#include "global.hpp"

void PlayState::FUN_0037573c(void* csSegment) {
    csCtx.segment = csSegment;
    csCtx.unk_14 = 0;
}

u8 PlayState::GetCutsceneState() {
    CutsceneContext* tmpCsCtx = &this->csCtx;

    return tmpCsCtx->state;
}

void PlayState::SetCutsceneState(u8 csState) {
    CutsceneContext* tmpCsCtx = &this->csCtx;

    tmpCsCtx->state = csState;
}
