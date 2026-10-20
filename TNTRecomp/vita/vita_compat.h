// Force-included into every PS Vita translation unit: small gaps in newlib.
#pragma once
#if defined(__vita__)
#include <malloc.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
static inline int tnt_vita_posix_memalign(void** out, size_t align, size_t size) {
    *out = memalign(align, size);
    return *out ? 0 : 12; /* ENOMEM */
}
#ifdef __cplusplus
}
#endif
#define posix_memalign tnt_vita_posix_memalign
#endif
