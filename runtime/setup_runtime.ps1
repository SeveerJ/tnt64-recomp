# Fetches N64ModernRuntime at the revision this project uses and applies the PC patch.
# Run once from anywhere:  powershell -ExecutionPolicy Bypass -File runtime\setup_runtime.ps1
$ErrorActionPreference = "Stop"
$here = $PSScriptRoot
$rt = Join-Path $here "N64ModernRuntime"
if (Test-Path (Join-Path $rt "CMakeLists.txt")) { Write-Host "N64ModernRuntime already present."; exit 0 }
git clone https://github.com/N64Recomp/N64ModernRuntime.git $rt
git -C $rt checkout cdf5abb
git -C $rt submodule update --init --recursive
git -C $rt apply (Join-Path $here "patches\runtime-pc.patch")
Write-Host "N64ModernRuntime ready (with runtime-pc.patch)."
