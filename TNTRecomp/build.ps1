# Builds The New Tetris: Recompiled on Windows. Started by build.bat; everything is logged to build_log.txt.
param([string]$Preset = "windows")
$ErrorActionPreference = "Continue"
$here    = $PSScriptRoot
$root    = Split-Path -Parent $here
$recomp  = Join-Path $root "recomp"
$log     = Join-Path $here "build_log.txt"
Set-Content -Path $log -Value "=== build started $(Get-Date) ===" -Encoding utf8

function Log($msg) { Add-Content -Path $log -Value $msg -Encoding utf8; Write-Host $msg }
function Fail($msg) { Log "ERROR: $msg"; Log "=== BUILD FAILED ==="; exit 1 }
function Run($exe, [string[]]$argv, $what) {
    Log "> $exe $($argv -join ' ')"
    & $exe @argv 2>&1 | ForEach-Object { $line = "$_"; Add-Content -Path $log -Value $line -Encoding utf8; Write-Host $line }
    if ($LASTEXITCODE -ne 0) { Fail "$what failed (exit code $LASTEXITCODE)" }
}

# 1. Visual Studio environment (x64), imported into this PowerShell session.
$vswhere = Join-Path ${env:ProgramFiles(x86)} "Microsoft Visual Studio\Installer\vswhere.exe"
if (-not (Test-Path $vswhere)) { Fail "Visual Studio Installer not found. Install Visual Studio 2022." }
$vs = & $vswhere -latest -products * -property installationPath
Log "Visual Studio: $vs"
$vcvars = Join-Path $vs "VC\Auxiliary\Build\vcvars64.bat"
if (-not (Test-Path $vcvars)) { Fail "C++ tools missing. In the VS Installer add 'Desktop development with C++'." }
$envDump = & cmd.exe /c "`"$vcvars`" >nul 2>&1 && set"
foreach ($line in $envDump) { if ($line -match '^([^=]+)=(.*)$') { Set-Item -Path "env:$($Matches[1])" -Value $Matches[2] } }

foreach ($tool in @("clang-cl", "cmake", "ninja")) {
    $p = Get-Command $tool -ErrorAction SilentlyContinue
    if (-not $p) {
        switch ($tool) {
            "clang-cl" { Fail "clang-cl not found. In the VS Installer, Modify > Individual components > 'C++ Clang Compiler for Windows'." }
            default    { Fail "$tool not found (it normally comes with Visual Studio's C++ CMake tools)." }
        }
    }
    Log "found $tool : $($p.Source)"
}

# 2. RT64 renderer, pinned to the revision Zelda64Recomp uses.
$rt64 = Join-Path $here "lib\rt64"
$parts = Get-ChildItem (Join-Path $here "lib") -Filter "rt64.zip.part*" -ErrorAction SilentlyContinue | Sort-Object Name
if (-not (Test-Path (Join-Path $rt64 "CMakeLists.txt")) -and $parts) {
    # Pre-packaged RT64 (no Git needed): join the parts and unpack.
    Log "Unpacking bundled RT64 ($($parts.Count) parts)..."
    $zip = Join-Path $here "lib\rt64.zip"
    $out = [System.IO.File]::Create($zip)
    foreach ($p in $parts) { $bytes = [System.IO.File]::ReadAllBytes($p.FullName); $out.Write($bytes, 0, $bytes.Length) }
    $out.Close()
    Add-Type -AssemblyName System.IO.Compression.FileSystem
    [System.IO.Compression.ZipFile]::ExtractToDirectory($zip, (Join-Path $here "lib"))
    Remove-Item $zip
    Log "RT64 unpacked."
}
if (-not (Test-Path (Join-Path $rt64 "CMakeLists.txt"))) {
    if (-not (Get-Command git -ErrorAction SilentlyContinue)) { Fail "RT64 is missing and git is not installed. Install Git for Windows from https://git-scm.com" }
    Run git @("clone", "https://github.com/rt64/rt64", $rt64) "Cloning RT64"
    Run git @("-C", $rt64, "checkout", "23cab603c4f9f4a8b369b38e036f1aa484603878") "RT64 checkout"
    Run git @("-C", $rt64, "submodule", "update", "--init", "--recursive") "RT64 submodules"
} else { Log "RT64 already present." }

# 3. Recompiled game code.
$n64recomp = Join-Path $root "build\n64recomp-pinned\Release\N64Recomp.exe"
$funcs = Join-Path $recomp "RecompiledFuncs"
$stamp = Join-Path $funcs "funcs.h"
$inputsNewer = (-not (Test-Path $stamp)) -or ((Get-Item (Join-Path $recomp "tnt.recomp.toml")).LastWriteTime -gt (Get-Item $stamp).LastWriteTime) -or ((Get-Item (Join-Path $recomp "tnt.syms.toml")).LastWriteTime -gt (Get-Item $stamp).LastWriteTime)
if ($inputsNewer -and -not (Test-Path $n64recomp)) {
    # A fresh clone: file dates are arbitrary, and the generated code is already in recomp\RecompiledFuncs.
    if (Test-Path $stamp) { Log "N64Recomp.exe not found; using the recompiled code in the repository."; $inputsNewer = $false }
    else { Fail "N64Recomp.exe not found at $n64recomp and recomp\RecompiledFuncs is empty" }
}
if ($inputsNewer) {
    if (Test-Path $funcs) { Remove-Item -Recurse -Force $funcs }
    New-Item -ItemType Directory $funcs | Out-Null
    Push-Location $recomp
    Run $n64recomp @("tnt.recomp.toml") "N64Recomp"
    Pop-Location
} else { Log "Recompiled code is up to date." }

# 3b. N64ModernRuntime (with this project's patch) next to TNTRecomp.
if (-not (Test-Path (Join-Path $root "runtime\N64ModernRuntime\CMakeLists.txt"))) {
    Fail "runtime\N64ModernRuntime is missing. Run runtime\setup_runtime.ps1 once (needs Git)."
}

# 4. Configure and build.
Push-Location $here
Run cmake @("--preset", $Preset) "CMake configure"
Run cmake @("--build", "--preset", $Preset) "Build"
Pop-Location

Log ""
Log "=== BUILD SUCCEEDED ==="
Log "Run: $here\out\build\$Preset\TNTRecompiled.exe $root\baserom.us.z64"
