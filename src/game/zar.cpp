#include "global.hpp"

void* ZARInfo::FUN_003532c0(s32 index) {
    u32 numFiles;

    if (filetypeMap[4] == -1) {
        numFiles = 0;
    } else {
        numFiles = fileTypes[filetypeMap[4]].numFiles;
    }

    if (numFiles > index) {
        return unk_5C[index];
    } else {
        return NULL;
    }
}

void* ZARInfo::GetQDBByIndex(s32 index) {
    void* ret = NULL;
    u32 numFiles;

    if (filetypeMap[6] == -1) {
        numFiles = 0;
    } else {
        numFiles = fileTypes[filetypeMap[6]].numFiles;
    }

    if (numFiles > index) {
        ret = qdbPtrs[index];
    }
    return ret;
}

void* ZARInfo::GetCMABByIndex(s32 index) {
    void* ret = NULL;
    u32 numFiles;

    if (filetypeMap[5] == -1) {
        numFiles = 0;
    } else {
        numFiles = fileTypes[filetypeMap[5]].numFiles;
    }

    if (numFiles > index) {
        ret = cmabPtrs[index];
    }
    return ret;
}
