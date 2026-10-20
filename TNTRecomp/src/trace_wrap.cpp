// Linux-only OS-call tracer for the headless build. Uses the linker's --wrap to log
// every call into selected runtime OS functions (thread, args, return value).
// Enable with TNT_TRACE=path/to/trace.txt
#include <cstdio>
#include <cstdlib>
#include <mutex>
#include <chrono>
#include <atomic>
#include "recomp.h"
#include "ultramodern/ultramodern.hpp"

static FILE* trace_file() {
    static FILE* f = [] { const char* p = std::getenv("TNT_TRACE"); return p ? std::fopen(p, "w") : nullptr; }();
    return f;
}
static std::mutex trace_mutex;
static auto t0 = std::chrono::steady_clock::now();

static void log_call(const char* name, recomp_context* ctx, bool after) {
    FILE* f = trace_file();
    if (!f) return;
    double t = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
    PTR(OSThread) th = ultramodern::is_game_thread() ? ultramodern::this_thread() : 0;
    std::lock_guard lock{ trace_mutex };
    if (!after)
        std::fprintf(f, "%9.4f T%08X %-22s a0=%08X a1=%08X a2=%08X a3=%08X ra=%08X\n", t, (uint32_t)th, name,
            (uint32_t)ctx->r4, (uint32_t)ctx->r5, (uint32_t)ctx->r6, (uint32_t)ctx->r7, (uint32_t)ctx->r31);
    else
        std::fprintf(f, "%9.4f T%08X %-22s -> v0=%08X\n", t, (uint32_t)th, name, (uint32_t)ctx->r2);
    std::fflush(f);
}

#define WRAP(fn, log_return) \
    extern "C" void __real_##fn(uint8_t* rdram, recomp_context* ctx); \
    extern "C" void __wrap_##fn(uint8_t* rdram, recomp_context* ctx) { \
        log_call(#fn, ctx, false); \
        __real_##fn(rdram, ctx); \
        if (log_return) log_call(#fn, ctx, true); \
    }

WRAP(osRecvMesg_recomp, true)
WRAP(osSendMesg_recomp, true)
WRAP(osJamMesg_recomp, true)
WRAP(osPiStartDma_recomp, false)
WRAP(osEPiStartDma_recomp, false)
WRAP(osViSwapBuffer_recomp, false)
WRAP(osViSetMode_recomp, false)
WRAP(osSpTaskLoad_recomp, false)
WRAP(osSpTaskStartGo_recomp, false)
WRAP(osAiSetNextBuffer_recomp, true)
WRAP(osAiGetLength_recomp, true)
extern "C" void __real_osContInit_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" void __wrap_osContInit_recomp(uint8_t* rdram, recomp_context* ctx) {
    gpr bit = ctx->r5, st = ctx->r6;
    log_call("osContInit_recomp", ctx, false);
    __real_osContInit_recomp(rdram, ctx);
    if (FILE* f = trace_file()) {
        std::lock_guard lock{ trace_mutex };
        std::fprintf(f, "          osContInit -> v0=%d bitpattern=%02X status0: type=%04X status=%02X err=%02X\n", (int)ctx->r2,
            (uint8_t)MEM_B(0, bit), (uint16_t)MEM_HU(0, st), (uint8_t)MEM_BU(2, st), (uint8_t)MEM_BU(3, st));
        std::fflush(f);
    }
}
WRAP(osContStartReadData_recomp, true)
extern "C" void __real_osContGetReadData_recomp(uint8_t* rdram, recomp_context* ctx);
extern "C" void __wrap_osContGetReadData_recomp(uint8_t* rdram, recomp_context* ctx) {
    gpr pad = ctx->r4;
    __real_osContGetReadData_recomp(rdram, ctx);
    static uint16_t last = 0xFFFF;
    uint16_t b = (uint16_t)MEM_HU(0, pad);
    if (b != last) {
        last = b;
        if (FILE* f = trace_file()) {
            std::lock_guard lock{ trace_mutex };
            double t = std::chrono::duration<double>(std::chrono::steady_clock::now() - t0).count();
            std::fprintf(f, "%9.4f          pad0 buttons=%04X x=%d y=%d err=%02X (buffer %08X)\n", t, b, (int8_t)MEM_B(2, pad), (int8_t)MEM_B(3, pad), (uint8_t)MEM_BU(4, pad), (uint32_t)pad);
            std::fflush(f);
        }
    }
}
WRAP(osContStartQuery_recomp, true)
WRAP(osEepromProbe_recomp, true)
WRAP(osEepromRead_recomp, true)
WRAP(osEepromWrite_recomp, true)
WRAP(osPfsInitPak_recomp, true)
WRAP(osMotorInit_recomp, true)
WRAP(osStartThread_recomp, false)
WRAP(osStopThread_recomp, false)
WRAP(osSetThreadPri_recomp, false)
WRAP(osSetTimer_recomp, false)
WRAP(osDpSetNextBuffer_recomp, false)
