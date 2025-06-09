#! /bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all the .cpp files
cppFilenames=$(find . -type f -name "*.cpp")

# echo "Files: " $cppFilenames

assembly="testbed"
compilerFlags="-g -fdeclspec -fPIC"
# -fms-extensions
# -Wall -Werror
includeFlags="-Isrc -I../engine/src/"
linkerFlags="-L../bin/ -lengine -Wl,-rpath,."
defines="-D_DEBUG -DPIMPORT"

echo "Building $assembly..."
echo clang $cppFilenames $compilerFlags -o ../bin/$assembly $defines $includeFlags $linkerFlags
clang $cppFilenames $compilerFlags -o ../bin/$assembly $defines $includeFlags $linkerFlags
