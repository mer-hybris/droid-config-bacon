%package -n patterns-sailfish-device-adaptation-bacon
Summary: Jolla HW Adaptation bacon
Requires: droid-hal-bacon
Requires: droid-hal-bacon-detritus
Requires: droid-hal-bacon-img-boot
Requires: droid-hal-bacon-kernel
Requires: droid-hal-bacon-kernel-modules
Requires: droid-config-bacon-sailfish
Requires: droid-config-bacon-pulseaudio-settings
Requires: droid-config-bacon-policy-settings
Requires: droid-config-bacon-preinit-plugin
Requires: droid-config-bacon-flashing
Requires: droid-config-bacon-bluez5
Requires: droid-hal-version-bacon

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Sensors
Requires: hybris-libsensorfw-qt5

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# Add GStreamer v1.0 as standard
Requires: gstreamer1.0
Requires: gstreamer1.0-tools
Requires: gstreamer1.0-plugins-good
Requires: gstreamer1.0-plugins-base
Requires: gstreamer1.0-plugins-bad
Requires: nemo-gstreamer1.0-interfaces
Requires: gstreamer1.0-droid
Requires: gstreamer1.0-droid-tools

# This is needed to fix hw video decoding
Requires: droidmedia

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded
Requires: usb-moded-defaults-android
Requires: usb-moded-developer-mode-android

# Extra useful modes not officially supported:
# might need some configuration to get working
#Requires: usb-moded-mass-storage-android-config
# working but careful with roaming!
Requires: usb-moded-connection-sharing-android-config
# android diag mode only usable for certain android tools
#Requires: usb-moded-diag-mode-android

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-plugin-encsfa

# Settings app needs this since update15
Requires: jolla-settings-layout

# For devices with working cellular modem:
Requires: telepathy-ring
Requires: pulseaudio-modules-droid-glue

# Flashlight
Requires: jolla-settings-system-flashlight

# For devices where test_gps eventually gets a fix:
Requires: geoclue-provider-hybris

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Camera
Requires: camera-settings-plugin

# ffmemless vibrator
# Requires: qt5-feedback-haptics-ffmemless
Requires: ngfd-plugin-native-vibrator
Requires: qt5-feedback-haptics-native-vibrator

# gestures support
Requires: gestured

# fix for battery charger
Requires: statefs-provider-power-udev

# hciconfig etc.
Requires: bluez5-tools

# usefull stuff 
Requires: mce-tools
Requires: strace
Requires: binutils
Requires: harbour-messwerk

# Sailfish OS CSD tool for hardware testing
# needs some configuration to get all features working

%description -n patterns-sailfish-device-adaptation-bacon
Pattern with packages for bacon HW Adaptation

%files -n patterns-sailfish-device-adaptation-bacon
