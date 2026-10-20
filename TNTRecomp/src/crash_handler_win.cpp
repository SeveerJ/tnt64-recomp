// Windows crash reporter: on an unhandled exception, prints the exception code,
// faulting address and a symbolised stack trace (needs the .pdb next to the .exe)
// to stderr, then writes a minidump (TNTRecompiled.dmp) beside the executable.
#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <DbgHelp.h>
#include <cstdio>
#include <mutex>
#include <cstring>
#include <cstdint>

static std::mutex crash_mutex;

static void print_frame(HANDLE proc, DWORD64 addr, int i) {
    char buf[sizeof(SYMBOL_INFO) + 512];
    SYMBOL_INFO* sym = reinterpret_cast<SYMBOL_INFO*>(buf);
    sym->SizeOfStruct = sizeof(SYMBOL_INFO);
    sym->MaxNameLen = 511;
    DWORD64 disp = 0;
    IMAGEHLP_LINE64 line{}; line.SizeOfStruct = sizeof(line); DWORD ldisp = 0;
    HMODULE mod = nullptr;
    GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)(uintptr_t)addr, &mod);
    char modname[MAX_PATH] = "?";
    if (mod) GetModuleFileNameA(mod, modname, MAX_PATH);
    const char* base = strrchr(modname, '\\'); base = base ? base + 1 : modname;
    if (SymFromAddr(proc, addr, &disp, sym)) {
        if (SymGetLineFromAddr64(proc, addr, &ldisp, &line))
            fprintf(stderr, "  #%02d %s!%s+0x%llx  (%s:%lu)\n", i, base, sym->Name, (unsigned long long)disp, line.FileName, line.LineNumber);
        else
            fprintf(stderr, "  #%02d %s!%s+0x%llx\n", i, base, sym->Name, (unsigned long long)disp);
    } else {
        fprintf(stderr, "  #%02d %s+0x%llx\n", i, base, (unsigned long long)(addr - (DWORD64)mod));
    }
}

static LONG WINAPI crash_filter(EXCEPTION_POINTERS* ep) {
    std::lock_guard lock{ crash_mutex };
    HANDLE proc = GetCurrentProcess();
    SymSetOptions(SYMOPT_LOAD_LINES | SYMOPT_UNDNAME | SYMOPT_DEFERRED_LOADS);
    SymInitialize(proc, nullptr, TRUE);
    auto* er = ep->ExceptionRecord;
    fprintf(stderr, "\n=== CRASH: exception 0x%08lX at %p (thread %lu) ===\n", er->ExceptionCode, er->ExceptionAddress, GetCurrentThreadId());
    if (er->ExceptionCode == EXCEPTION_ACCESS_VIOLATION && er->NumberParameters >= 2)
        fprintf(stderr, "  %s address 0x%llx\n", er->ExceptionInformation[0] == 0 ? "read of" : (er->ExceptionInformation[0] == 1 ? "write to" : "execute at"), (unsigned long long)er->ExceptionInformation[1]);

    CONTEXT ctx = *ep->ContextRecord;
    STACKFRAME64 frame{};
    frame.AddrPC.Offset = ctx.Rip; frame.AddrPC.Mode = AddrModeFlat;
    frame.AddrFrame.Offset = ctx.Rbp; frame.AddrFrame.Mode = AddrModeFlat;
    frame.AddrStack.Offset = ctx.Rsp; frame.AddrStack.Mode = AddrModeFlat;
    for (int i = 0; i < 40; i++) {
        if (!StackWalk64(IMAGE_FILE_MACHINE_AMD64, proc, GetCurrentThread(), &frame, &ctx, nullptr, SymFunctionTableAccess64, SymGetModuleBase64, nullptr)) break;
        if (frame.AddrPC.Offset == 0) break;
        print_frame(proc, frame.AddrPC.Offset, i);
    }
    fflush(stderr);

    char path[MAX_PATH];
    GetModuleFileNameA(nullptr, path, MAX_PATH);
    if (char* dot = strrchr(path, '.')) memcpy(dot, ".dmp", 5);
    HANDLE f = CreateFileA(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (f != INVALID_HANDLE_VALUE) {
        MINIDUMP_EXCEPTION_INFORMATION mei{ GetCurrentThreadId(), ep, FALSE };
        MiniDumpWriteDump(proc, GetCurrentProcessId(), f, MiniDumpNormal, &mei, nullptr, nullptr);
        CloseHandle(f);
        fprintf(stderr, "  minidump written to %s\n", path);
    }
    fflush(stderr);
    return EXCEPTION_EXECUTE_HANDLER;
}

void tnt_install_crash_handler() {
    SetUnhandledExceptionFilter(crash_filter);
    AddVectoredExceptionHandler(0, [](EXCEPTION_POINTERS* ep) -> LONG {
        DWORD c = ep->ExceptionRecord->ExceptionCode;
        // Only exceptions that never reach the unhandled filter; access violations go there.
        if (c == EXCEPTION_STACK_OVERFLOW || c == 0xC0000409 /* fast fail / stack buffer overrun */) {
            crash_filter(ep);
            TerminateProcess(GetCurrentProcess(), c);
        }
        return EXCEPTION_CONTINUE_SEARCH;
    });
}
#else
void tnt_install_crash_handler() {}
#endif
