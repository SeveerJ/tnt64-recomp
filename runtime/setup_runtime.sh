#!/bin/bash
# Fetches N64ModernRuntime at the revision this project uses, as two copies:
#   runtime/N64ModernRuntime       + runtime-pc.patch   (PC / Linux builds)
#   runtime/N64ModernRuntime-vita  + runtime-vita.patch (PS Vita build; includes the PC fix)
set -e
here="$(cd "$(dirname "$0")" && pwd)"
fetch() {
    local dir="$1" patch="$2"
    if [ -f "$dir/CMakeLists.txt" ]; then echo "$dir already present"; return; fi
    git clone https://github.com/N64Recomp/N64ModernRuntime.git "$dir"
    git -C "$dir" checkout cdf5abb
    git -C "$dir" submodule update --init --recursive
    (cd "$dir" && patch -p1 < "$here/patches/$patch")
}
fetch "$here/N64ModernRuntime" runtime-pc.patch
fetch "$here/N64ModernRuntime-vita" runtime-vita.patch
