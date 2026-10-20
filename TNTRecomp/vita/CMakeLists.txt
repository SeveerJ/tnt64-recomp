# PS Vita build of The New Tetris: Recompiled (game code, audio, input and the vitaGL renderer).
#
#   cmake -S vita -B build-vita -DCMAKE_TOOLCHAIN_FILE=$VITASDK/share/vita.toolchain.cmake \
#         -DTNT_RECOMP_DIR=<recomp folder> -DTNT_RUNTIME_DIR=<N64ModernRuntime with the Vita patches>
#   cmake --build build-vita     -> build-vita/TNTRecompiled.vpk
cmake_minimum_required(VERSION 3.20)
if (NOT DEFINED CMAKE_TOOLCHAIN_FILE AND DEFINED ENV{VITASDK})
    set(CMAKE_TOOLCHAIN_FILE "$ENV{VITASDK}/share/vita.toolchain.cmake" CACHE PATH "")
endif()
project(TNTRecompiledVita C CXX)
include("${VITASDK}/share/vita.cmake" REQUIRED)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(VITA_APP_NAME "TNT Recompiled")
set(VITA_TITLEID  "TNTR00001")
set(VITA_VERSION  "00.20")
set(TNT_VITA_APP_DIR "ux0:data/TNTRecompiled")

set(TNT_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/..")
set(TNT_RECOMP_DIR  "${TNT_ROOT}/../recomp" CACHE PATH "Folder with RecompiledFuncs/, rsp/ and port/")
set(TNT_RUNTIME_DIR "${TNT_ROOT}/../runtime/N64ModernRuntime-vita" CACHE PATH "N64ModernRuntime, with the Vita patches applied")

add_compile_definitions(TNT_VITA_APP_DIR="${TNT_VITA_APP_DIR}")
# newlib gaps (posix_memalign), for every target including the runtime.
add_compile_options("SHELL:-include ${CMAKE_CURRENT_SOURCE_DIR}/vita_compat.h")
# Tune for the Vita's Cortex-A9.
add_compile_options(-mcpu=cortex-a9 -mtune=cortex-a9 -mfpu=neon)

# ---- Runtime (ultramodern + librecomp) ----
add_subdirectory("${TNT_RUNTIME_DIR}" runtime EXCLUDE_FROM_ALL)

# ---- Recompiled game code ----
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
    "${TNT_RUNTIME_DIR}/ultramodern/include"
    "${TNT_RUNTIME_DIR}/librecomp/include"
)
target_compile_options(TNTRecompiledFuncs PRIVATE
    "$<$<COMPILE_LANGUAGE:C>:SHELL:-include tnt_extra_decls.h>"
    -O3 -fno-strict-aliasing -Wno-unused-variable -Wno-implicit-function-declaration -Wno-int-conversion)

# ---- App ----
add_executable(TNTRecompiled
    "${TNT_ROOT}/src/main.cpp"
    "${TNT_ROOT}/src/register_overlays.cpp"
    "${TNT_ROOT}/src/crash_handler_win.cpp"
    "${TNT_ROOT}/src/leaderboard.cpp"
    "${TNT_ROOT}/src/settings.cpp"
    "${TNT_ROOT}/src/hle_audio.cpp"
    "${TNT_ROOT}/src/hle_audio/alist.c"
    "${TNT_ROOT}/src/hle_audio/alist_audio.c"
    "${TNT_ROOT}/src/hle_audio/audio.c"
    "${TNT_ROOT}/src/hle_audio/memory.c"
    "${TNT_RECOMP_DIR}/rsp/aspMain.cpp"
    "${TNT_RECOMP_DIR}/rsp/tnt_rsp.cpp"
    "${TNT_ROOT}/src/gles/n64_renderer.cpp"
    "${TNT_ROOT}/src/overlay.cpp"
    vita_backend.cpp
    vita_mod_stubs.cpp
)
target_include_directories(TNTRecompiled PRIVATE
    "${TNT_ROOT}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${TNT_RECOMP_DIR}"
    "${TNT_RUNTIME_DIR}/librecomp/include/librecomp"
    "${TNT_RUNTIME_DIR}/N64Recomp/include"
    "${TNT_RUNTIME_DIR}/thirdparty/xxHash"
)
target_compile_options(TNTRecompiled PRIVATE -O3 -fno-strict-aliasing)
# Emulator testing: print to the debug TTY (Vita3K shows it) instead of log.txt.
option(TNT_VITA_LOG_TO_TTY "Send printf to the debug TTY instead of log.txt" OFF)
option(TNT_VITA_TEST_RESULT "Emulator test: fake a finished game 40 s after start" OFF)
set(TNT_VITA_BACKEND_DEFS "")
if (TNT_VITA_LOG_TO_TTY)
    list(APPEND TNT_VITA_BACKEND_DEFS TNT_VITA_LOG_TO_TTY)
endif()
if (TNT_VITA_TEST_RESULT)
    list(APPEND TNT_VITA_BACKEND_DEFS TNT_VITA_TEST_RESULT)
endif()
set_source_files_properties(vita_backend.cpp PROPERTIES COMPILE_DEFINITIONS "${TNT_VITA_BACKEND_DEFS}")
target_link_libraries(TNTRecompiled PRIVATE
    TNTRecompiledFuncs librecomp ultramodern
    vitaGL vitashark SceShaccCgExt mathneon taihen_stub SceShaccCg_stub SceKernelDmacMgr_stub SceGxm_stub
    SceCommonDialog_stub SceRazorCapture_stub
    SceDisplay_stub SceCtrl_stub SceAudio_stub ScePower_stub SceSysmem_stub SceAppMgr_stub SceKernelThreadMgr_stub
    -Wl,--whole-archive pthread -Wl,--no-whole-archive m stdc++)

vita_create_self(eboot.bin TNTRecompiled UNSAFE)
vita_create_vpk(TNTRecompiled.vpk ${VITA_TITLEID} eboot.bin
    VERSION ${VITA_VERSION}
    NAME ${VITA_APP_NAME}
    FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/icon0.png sce_sys/icon0.png
    FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/bg.png sce_sys/livearea/contents/bg.png
    FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/startup.png sce_sys/livearea/contents/startup.png
    FILE ${CMAKE_CURRENT_SOURCE_DIR}/sce_sys/livearea/contents/template.xml sce_sys/livearea/contents/template.xml
)
