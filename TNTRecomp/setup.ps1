# One-time setup for The New Tetris: Recompiled on Windows.
# Run from this folder in a "Developer PowerShell for VS 2022":
#   powershell -ExecutionPolicy Bypass -File setup.ps1
$ErrorActionPreference = "Stop"
$root    = Split-Path -Parent $PSScriptRoot           # ...\TheNewT64risRecomp
$recomp  = Join-Path $root "recomp"
$n64rexe = Join-Path $root "build\n64recomp-pinned\Release\N64Recomp.exe"

# 1. RT64 renderer, pinned to the revision Zelda64Recomp uses.
$rt64 = Join-Path $PSScriptRoot "lib\rt64"
if (-not (Test-Path (Join-Path $rt64 "CMakeLists.txt"))) {
    Write-Host "Cloning RT64..."
    git clone https://github.com/rt64/rt64 $rt64
    git -C $rt64 checkout 23cab603c4f9f4a8b369b38e036f1aa484603878
    git -C $rt64 submodule update --init --recursive
} else {
    Write-Host "RT64 already present."
}

# 2. Generate the recompiled game code.
if (-not (Test-Path $n64rexe)) { throw "N64Recomp.exe not found at $n64rexe" }
Push-Location $recomp
if (Test-Path RecompiledFuncs) { Remove-Item -Recurse -Force RecompiledFuncs }
New-Item -ItemType Directory RecompiledFuncs | Out-Null
& $n64rexe tnt.recomp.toml
if ($LASTEXITCODE -ne 0) { Pop-Location; throw "N64Recomp failed" }
Pop-Location
Write-Host "Recompiled code written to $recomp\RecompiledFuncs"

# 3. Configure and build.
cmake --preset windows
cmake --build --preset windows
Write-Host ""
Write-Host "Done. Run:  out\build\windows\TNTRecompiled.exe ..\baserom.us.z64"
