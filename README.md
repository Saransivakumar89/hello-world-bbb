# Hello World Linux Kernel Module for BeagleBone Black Rev C

A simple Linux kernel module that prints:

```text
Hello-world-BBB
```

when loaded and:

```text
Good-bye-BBB
```

when unloaded.

## Build Environment

- Host: Ubuntu
- Target: BeagleBone Black Rev C
- Kernel: Linux 5.10
- Cross Compiler: arm-linux-gnueabihf-gcc

## Build

```bash
make
```

## Load Module

```bash
sudo insmod hello.ko
```

## Unload Module

```bash
sudo rmmod hello
```

## Author

Saran Sivakumar
