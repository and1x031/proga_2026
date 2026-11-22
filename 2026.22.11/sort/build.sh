#!/usr/bin/env sh
set -eu

cd "$(dirname "$0")"

# CLion on macOS bundles both programs, even without Homebrew.
if ! command -v cmake >/dev/null || ! command -v ninja >/dev/null; then
    for tool in /Applications/CLion.app/Contents/bin/cmake/mac/*/bin/cmake \
                /Applications/CLion.app/Contents/bin/ninja/mac/*/ninja; do
        if [ -x "$tool" ]; then
            PATH="${tool%/*}:$PATH"
        fi
    done
    export PATH
fi

cmake -S src -B build-local -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build-local
