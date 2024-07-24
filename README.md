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
2. https://cmake.org/download/ (Binary distribution ZIP)
3. https://github.com/ninja-build/ninja/releases (ninja-win.zip)
4. https://github.com/openocd-org/openocd/releases/latest (openocd-vxx.x-i686-mingw32.tar.gz)
5. https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads (Windows (mingw-w64-i686) hosted cross toolchains ZIP)

### Copy to C://STM32Toolchain
Should look like this:
![](images/filestructure.png)

### Add to path
Should look like this:
![](images/path.png)

Restart vscode to apply path variables

### Driver Shizzle for cheap fucking ST-Link clone
1. Delete original  driver
2. Install Zadig. Download from https://zadig.akeo.ie/
3. Replace Driver
![](images/zadig.png)

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