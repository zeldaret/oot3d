#ifndef _Z3DVEC_H_
#define _Z3DVEC_H_

typedef float f32;
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef long long s64;

typedef struct {
    f32 x, y;
} Vec2f;

typedef struct {
    f32 x, y, z;
} Vec3f;

typedef struct {
    s16 x, y, z;
} Vec3s;

typedef struct {
    s32 x, y, z;
} Vec3i;

typedef struct {
    f32 data[3][4];
} MTX34;

typedef struct {
    f32 data[4][4];
} MTX44;

class Vector3f {
public:
    Vector3f(f32 x, f32 y, f32 z) : x(x), y(y), z(z) {}

    f32 x;
    f32 y;
    f32 z;
};

#endif
