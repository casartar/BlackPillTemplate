rm -r build
cmake -B build -G "Ninja" -DCMAKE_TOOLCHAIN_FILE=cmake/gcc-arm-none-eabi.cmake -DCMAKE_BUILD_TYPE:STRING="Debug"