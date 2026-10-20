# Full backend: SDL2 window/audio/input + RT64 renderer.
if (NOT EXISTS "${TNT_RT64_DIR}/CMakeLists.txt")
    message(FATAL_ERROR "RT64 not found at ${TNT_RT64_DIR}. Clone it with submodules (see README), or pass -DTNT_RT64_DIR=...")
endif()

set(RT64_STATIC TRUE CACHE BOOL "" FORCE)
set(RT64_SDL_WINDOW_VULKAN TRUE CACHE BOOL "" FORCE)
add_compile_definitions(HLSL_CPU)
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    add_compile_definitions(RT64_SDL_WINDOW_VULKAN)
endif()
add_subdirectory(${TNT_RT64_DIR} ${CMAKE_BINARY_DIR}/rt64)
target_include_directories(rt64 PRIVATE ${CMAKE_BINARY_DIR}/rt64/src)

target_sources(TNTRecompiled PRIVATE src/sdl_backend.cpp src/sdl_audio.cpp src/rt64_render_context.cpp src/overlay.cpp)
target_include_directories(TNTRecompiled PRIVATE
    ${TNT_RT64_DIR}/src
    ${TNT_RT64_DIR}/src/contrib
    ${TNT_RT64_DIR}/src/contrib/hlslpp/include
    ${TNT_RT64_DIR}/src/contrib/dxc/inc
    ${TNT_RT64_DIR}/src/rhi
    ${TNT_RT64_DIR}/src/render
    ${CMAKE_BINARY_DIR}/rt64/src
)
target_link_libraries(TNTRecompiled PRIVATE rt64)

if (WIN32)
    # Use the SDL2 that RT64 bundles for Windows.
    set(TNT_SDL2_DIR "${TNT_RT64_DIR}/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3")
    target_include_directories(TNTRecompiled PRIVATE "${TNT_SDL2_DIR}/include")
    target_link_directories(TNTRecompiled PRIVATE "${TNT_SDL2_DIR}/lib/x64")
    target_link_libraries(TNTRecompiled PRIVATE SDL2)
    add_custom_command(TARGET TNTRecompiled POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${TNT_SDL2_DIR}/lib/x64/SDL2.dll" $<TARGET_FILE_DIR:TNTRecompiled>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${TNT_RT64_DIR}/src/contrib/dxc/bin/x64/dxil.dll" $<TARGET_FILE_DIR:TNTRecompiled>
        COMMAND ${CMAKE_COMMAND} -E copy_if_different "${TNT_RT64_DIR}/src/contrib/dxc/bin/x64/dxcompiler.dll" $<TARGET_FILE_DIR:TNTRecompiled>
    )
    set_target_properties(TNTRecompiled PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:TNTRecompiled>")
else()
    find_package(SDL2 REQUIRED)
    target_include_directories(TNTRecompiled PRIVATE ${SDL2_INCLUDE_DIRS})
    target_link_libraries(TNTRecompiled PRIVATE SDL2::SDL2)
endif()
