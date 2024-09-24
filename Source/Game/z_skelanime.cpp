extern "C" {
#include "global.hpp"

void SkelAnime_Free(SkelAnime* skelAnime, PlayState* play) {
    return SkelAnime_Free2(skelAnime);
}
}
