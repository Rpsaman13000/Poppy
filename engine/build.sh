#! /bin/bash
# Build script for engine
set echo on

mkdir -p ../bin

# Get a list of all the .cpp files
cppFilenames=$(find . -type f -name "*.cpp")

# echo "Files: " $cppFilenames

assembly="engine"
compilerFlags="-g -shared -fdeclspec -fPIC"
# -fms-extensions
# -Wall -Werror
includeFlags="-Isrc -I$VULKAN_SDK/include/"
linkerFlags="-lvulkan -L$VULKAN_SDK/lib/"
defines="-D_DEBUG -DPEXPORT"

echo "Building $assembly..."
clang $cppFilenames $compilerFlags -o ../bin/lib$assembly.so $defines $includeFlags $linkerFlags
