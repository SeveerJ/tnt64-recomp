#pragma once
// OpenGL ES 2 headers: vitaGL on the PS Vita, SDL's GLES2 headers (Mesa) elsewhere.
#if defined(__vita__)
#include <vitaGL.h>
#else
#define GL_GLEXT_PROTOTYPES 1
#define SDL_USE_BUILTIN_OPENGL_DEFINITIONS 1
#include "SDL_opengles2.h"
#endif
