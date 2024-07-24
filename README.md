# BlackPillTemplate

## Installation Manjaro

```
$ git clone https://github.com/casartar/BlackPillTemplate.git

$ sudo pacman -Syu code
$ sudo pacman -Syu cmake
$ sudo pacman -Syu ninja
$ sudo pacman -Syu arm-none-eabi-gcc
$ sudo pacman -Syu arm-none-eabi-newlib
$ sudo pacman -Syu arm-none-eabi-gdb
$ sudo pacman -Syu openocd
```

## Installation Windows

### Download
1. https://code.visualstudio.com/download
2. https://cmake.org/download/
3. https://github.com/ninja-build/ninja/releases
4. https://github.com/openocd-org/openocd/releases/latest
5. https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads

### Copy to C://STM32Toolchain
Add to path:
1. 


## Prepare vscode for debugging
```
$ cd BlackPillTemplate
$ ./init_ninja
$ cd build
$ ninja
```

## Compile the template

Install vscode Extension marus25.cortex-debug
Install vscode Extension ms-vscode.cpptools
If it is not available use "Download Extension" on the right side of https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools and install the vsix file manually.