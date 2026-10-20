cmake_minimum_required(VERSION 3.20)
project(TNTRecompiled LANGUAGES C CXX)
if (WIN32)
    enable_language(RC)
endif()

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# ---- Options -----------------------------------------------------------------
option(TNT_HEADLESS "Build the headless backend (no window/GPU/audio) for boot testing" OFF)
set(TNT_RECOMP_DIR  "${CMAKE_SOURCE_DIR}/../recomp" CACHE PATH "Folder with tnt.recomp.toml, RecompiledFuncs/, rsp/ and port/")
set(TNT_RUNTIME_DIR "${CMAKE_SOURCE_DIR}/../runtime/N64ModernRuntime" CACHE PATH "N64ModernRuntime checkout")
set(TNT_RT64_DIR    "${CMAKE_SOURCE_DIR}/lib/rt64" CACHE PATH "RT64 checkout (full backend only)")

if (NOT EXISTS "${TNT_RECOMP_DIR}/RecompiledFuncs/funcs.h")
    message(FATAL_ERROR "No recompiled code in ${TNT_RECOMP_DIR}/RecompiledFuncs. Run N64Recomp on tnt.recomp.toml first (see README).")
endif()
if (NOT EXISTS "${TNT_RECOMP_DIR}/rsp/aspMain.cpp")
    message(FATAL_ERROR "No recompiled audio microcode in ${TNT_RECOMP_DIR}/rsp. Run RSPRecomp on aspMain.toml first (see README).")
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_SIMULATE_ID STREQUAL "MSVC")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-everything")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-everything")
endif()
if (WIN32)
    add_compile_definitions(NOMINMAX _DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR)
endif()
if (CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|amd64|AMD64")
    # The runtime's RSP vector unit code needs SSE4.1.
    if (MSVC AND NOT CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
        set(TNT_SIMD_FLAGS /arch:AVX)
    else()
        set(TNT_SIMD_FLAGS -msse4.1)
    endif()
endif()

# ---- Runtime -----------------------------------------------------------------
add_subdirectory(${TNT_RUNTIME_DIR} ${CMAKE_BINARY_DIR}/N64ModernRuntime)

# ---- Recompiled game code ----------------------------------------------------
file(GLOB TNT_FUNC_SOURCES "${TNT_RECOMP_DIR}/RecompiledFuncs/*.c" "${TNT_RECOMP_DIR}/RecompiledFuncs/*.cpp")
add_library(TNTRecompiledFuncs STATIC
    ${TNT_FUNC_SOURCES}
    "${TNT_RECOMP_DIR}/port/tnt_pak_stubs.c"
    "${TNT_RECOMP_DIR}/port/tnt_cont_fix.c"
)
target_include_directories(TNTRecompiledFuncs PRIVATE
    "${TNT_RECOMP_DIR}/port"
    "${TNT_RECOMP_DIR}/RecompiledFuncs"
    "${TNT_RUNTIME_DIR}/N64Recomp/include"
    "${TNT_RUNTIME_DIR}/librecomp/include"
    "${TNT_RUNTIME_DIR}/ultramodern/include"
)
if (MSVC AND NOT CMAKE_C_COMPILER_ID STREQUAL "Clang")
    message(FATAL_ERROR "The recompiled C code needs clang. In Visual Studio install 'C++ Clang tools for Windows' and use the clang-cl toolset (see README).")
endif()
if (CMAKE_C_COMPILER_FRONTEND_VARIANT STREQUAL "MSVC")
    target_compile_options(TNTRecompiledFuncs PRIVATE "$<$<COMPILE_LANGUAGE:C>:/FItnt_extra_decls.h>")
else()
    target_compile_options(TNTRecompiledFuncs PRIVATE "$<$<COMPILE_LANGUAGE:C>:SHELL:-include tnt_extra_decls.h>")
endif()
target_compile_options(TNTRecompiledFuncs PRIVATE -fno-strict-aliasing -Wno-unused-variable -Wno-implicit-function-declaration)

# ---- Executable ----------------------------------------------------------------
add_executable(TNTRecompiled
    src/main.cpp
    src/register_overlays.cpp
    src/crash_handler_win.cpp
    src/leaderboard.cpp
    src/settings.cpp
    src/hle_audio.cpp
    src/hle_audio/alist.c
    src/hle_audio/alist_audio.c
    src/hle_audio/audio.c
    src/hle_audio/memory.c
    "${TNT_RECOMP_DIR}/rsp/aspMain.cpp"
    "${TNT_RECOMP_DIR}/rsp/tnt_rsp.cpp"
)
target_include_directories(TNTRecompiled PRIVATE
    src
    "${TNT_RECOMP_DIR}"
    "${TNT_RUNTIME_DIR}/librecomp/include/librecomp"
    "${TNT_RUNTIME_DIR}/N64Recomp/include"
)
target_compile_options(TNTRecompiled PRIVATE ${TNT_SIMD_FLAGS} -fno-strict-aliasing)
target_link_libraries(TNTRecompiled PRIVATE TNTRecompiledFuncs librecomp ultramodern)

find_package(Threads REQUIRED)
target_link_libraries(TNTRecompiled PRIVATE Threads::Threads ${CMAKE_DL_LIBS})
if (UNIX AND NOT APPLE)
    target_link_libraries(TNTRecompiled PRIVATE atomic)
endif()
if (WIN32)
    # App icon (assets/icon.ico) as a Windows resource.
    set(TNT_ICON_ICO "${CMAKE_SOURCE_DIR}/assets/icon.ico")
    configure_file(src/icon.rc.in "${CMAKE_BINARY_DIR}/icon.rc" @ONLY)
    target_sources(TNTRecompiled PRIVATE "${CMAKE_BINARY_DIR}/icon.rc")
    target_link_libraries(TNTRecompiled PRIVATE Winmm.lib Dbghelp.lib)
endif()

if (TNT_HEADLESS)
    target_sources(TNTRecompiled PRIVATE src/headless_backend.cpp)
    target_compile_definitions(TNTRecompiled PRIVATE TNT_HEADLESS)
    # Optional: route headless audio through the SDL path (TNT_SDL_AUDIO=1) for audio testing.
    find_package(SDL2 QUIET)
    if (SDL2_FOUND)
        target_sources(TNTRecompiled PRIVATE src/sdl_audio.cpp)
        target_compile_definitions(TNTRecompiled PRIVATE TNT_HAVE_SDL_AUDIO)
        target_include_directories(TNTRecompiled PRIVATE ${SDL2_INCLUDE_DIRS})
        target_link_libraries(TNTRecompiled PRIVATE SDL2::SDL2)
    endif()
    option(TNT_HEADLESS_GLES "Headless build draws with the portable GLES2 renderer (needs DISPLAY)" OFF)
    if (TNT_HEADLESS_GLES AND SDL2_FOUND)
        target_sources(TNTRecompiled PRIVATE src/gles/n64_renderer.cpp src/overlay.cpp)
        target_compile_definitions(TNTRecompiled PRIVATE TNT_HEADLESS_GLES)
        target_include_directories(TNTRecompiled PRIVATE ${TNT_RUNTIME_DIR}/thirdparty/xxHash src)
        find_library(TNT_GLESV2 NAMES GLESv2 libGLESv2.so.2 REQUIRED)
        target_link_libraries(TNTRecompiled PRIVATE ${TNT_GLESV2})
    endif()
    set_target_properties(TNTRecompiled PROPERTIES ENABLE_EXPORTS ON) # readable crash backtraces
    if (CMAKE_SYSTEM_NAME STREQUAL "Linux")
        # OS-call tracer (TNT_TRACE=file). Wraps the runtime's OS entry points at link time.
        target_sources(TNTRecompiled PRIVATE src/trace_wrap.cpp)
        file(STRINGS src/trace_wrap.cpp TNT_WRAP_LINES REGEX "^WRAP\\(|__wrap_[A-Za-z0-9]+[A-Za-z0-9_]*\\(uint8_t")
        foreach(line ${TNT_WRAP_LINES})
            if (line MATCHES "^WRAP\\(([A-Za-z0-9_]+),")
                set(fn "${CMAKE_MATCH_1}")
            elseif (line MATCHES "__wrap_([A-Za-z0-9_]+)\\(uint8_t")
                set(fn "${CMAKE_MATCH_1}")
            endif()
            target_link_options(TNTRecompiled PRIVATE "-Wl,--wrap=${fn}")
        endforeach()
    endif()
else()
    include(cmake/FullBackend.cmake)
endif()
