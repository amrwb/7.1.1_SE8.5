
#!/bin/bash
export PATH=$PATH:$HOME/arm-eabi-4.8/bin/
export ARCH=arm
mkdir  out
make -C $(pwd) O=$(pwd)/out CROSS_COMPILE=arm-eabi- VARIANT_DEFCONFIG=msm8916_sec_j5lte_kor_defconfig msm8916_sec_defconfig SELINUX_DEFCONFIG=selinux_defconfig

make -j64 -C $(pwd) O=$(pwd)/out CROSS_COMPILE=arm-eabi-

cp out/arch/arm/boot/zImage $(pwd)/arch/arm/boot/zImage
