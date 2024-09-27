# The Legend of Zelda: Ocarina of Time 3D

This is a WIP decompilation of The Legend of Zelda: Ocarina of Time 3D.
The purpose of the project is to recreate a source code base for the game from scratch, using information found inside the game along with static and/or dynamic analysis.
The only build currently supported is the USA version.

It builds the following ROM:


* **oot3d.axf**
* **code.bin** `md5: 20c7ec6288ba0af4feb6db646c6cc6d5`

Re-building of `romfs.bin` and `oot3d.3ds` will be targeted in the future.

**Note:** This repository does not include any of the assets necessary to build the ROM.
A prior copy of the game is required to extract the needed assets.

Website: <https://zelda.deco.mp/>

Discord: <https://discord.zelda.deco.mp>

## Installation
These instructions and the tools in this repository all assume a Windows development environment. Cross-platform support may be added in the future.

To set up the repository, place a USA version of `The Legend of Zelda: Ocarina of Time 3D (USA)` in the `Disassembly` directory of the repository and name it `baserom.3ds`. Any revision (v0 or v1) and either trimmed or untrimmed roms should be able to produce a correct repository.

Download and extract the contents of RVCT4.0 [Build 821] for Windows. Once extracted, the following environment variables must be set:

* `ARMCC_PATH`: The root directory of the extracted contents, such that `$ARMCC_PATH/win_32-pentium` is the folder containing the compiler binaries
* `RVCT40INC`: The include directory for ARM's Windows headers, most likely equal to `$ARMCC_PATH/include/windows`
* `RVCT40LIB`: The library director for ARM's libaries, most likely equal to `$ARMCC_PATH/lib`

You will also need to have installed cmake, make, and python for Windows.

To begin, run `cmake -B Build -S . -G "Unix Makefiles"`. This should configure the build using the ARM compiler toolchain. If this succeeds, perform the first build using `cmake --build Build -t check`. If all goes well, you should see:
```
Build/code.bin: OK
```

Note: to speed up the build, you can pass `-jN`, where N is the number of threads to use in the build.

## Building

A variety of useful cmake targets are available. Run `cmake --build Build -t [target]` with the following values of `[target]`:

* To build `oot3d.axf`, set `[target]` = `oot3d`
* To build `code.bin`, set `[target]` = `code`
* To check matching, set `[target]` = `check`


## Contributing
TODO

Most discussions happen on our [Discord Server](https://discord.zelda.deco.mp), where you are welcome to ask if you need help getting started, or if you have any questions regarding this project and other decompilation projects.
