extern "C" {
#include "global.hpp"

void Lib_MemSet(u8* dest, size_t size, u8 val) {
    for (size_t i = 0; i < size; i++) {
        *dest++ = val;
    }
}

void Math_Vec3f_Copy(Vec3f* dest, Vec3f* src) {
    *dest = *src;
}

void Math_Vec3s_ToVec3f(Vec3f* dest, Vec3s* src) {
    dest->x = static_cast<float>(src->x);
    dest->y = static_cast<float>(src->y);
    dest->z = static_cast<float>(src->z);
}

}
