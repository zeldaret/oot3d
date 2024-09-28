#ifndef _Z_EN_WEATHER_TAG_H_
#define _Z_EN_WEATHER_TAG_H_

#include "global.hpp"

struct EnWeatherTag;

typedef struct EnWeatherTag {
    /* 0x0000 */ Actor actor;
    /* 0x01A4 */ char unk_1A4[0x10];
} EnWeatherTag; // size = 0x1B4

extern ActorInit En_Weather_Tag_InitVars;

#endif
