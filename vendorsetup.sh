echo 'Starting to clone stuffs needed to build for ruby '


# Vendor
echo 'Cloning vendor tree'
rm -rf vendor/xiaomi/ruby  && git clone https://github.com/yunothebess/vendor_xiaomi_ruby.git -b lineage-20 vendor/xiaomi/ruby

# Kernel
echo 'Cloning kernel tree'
rm -rf kernel/xiaomi/mt6877 && git clone --depth=1 https://github.com/PQEnablers-Devices/android_kernel_xiaomi_mt6877 -b lineage-20 kernel/xiaomi/mt6877

# Xiaomi hardware
echo 'Cloning hardware xiaomi'
rm -rf hardware/mediatek && git clone https://github.com/PQEnablers-Devices/android_hardware_mediatek -b lineage-20-foss hardware/mediatek

# mediatek sepolicy_vndr
echo 'Cloning mediatek sepolicy vndr'
rm -rf device/mediatek/sepolicy_vndr && git clone https://github.com/PQEnablers-Devices/android_device_mediatek_sepolicy_vndr.git -b lineage-20 device/mediatek/sepolicy_vndr

echo 'delete vendorsetup.sh from device tree once this is done'
