%package -n patterns-sailfish-device-configuration-bacon
Summary: Jolla Configuration bacon
Requires: patterns-sailfish-device-configuration-common-bacon
Requires: patterns-sailfish-device-adaptation-bacon

# in new temprelates

Requires: sailfish-content-graphics-z%{icon_res}

# are these still needed?
# Requires: jolla-ambient-z%{icon_res}
# Requires: ambient-icons-closed-z%{icon_res}

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
# dev-tools pattern will be fixed in the next release
# for now we'll use its 'exploded' version:
#Requires: patterns-sailfish-dev-tools
Requires: jolla-developer-mode
Requires: strace
Requires: gdb
Requires: gdb-gdbserver
#Requires: wget
Requires: vim-enhanced
Requires: less
Requires: valgrind
Requires: patterns-sailfish-rnd
Requires: libhybris-tests
Requires: busybox-static
Requires: openssh-server
Requires: zypper

# why is this not installed by default? 
Requires: jolla-settings-accounts-extensions-jolla
Requires: jolla-settings-system-sideloading
Requires: store-client

# Introduced starting Sailfish OS 2.0.4.x:
# # 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all
Requires: jolla-settings-sailfishos

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# these might come in handy and should be installed from the store
# still a phone without these is rather useless
#Requires: jolla-email
#Requires: jolla-calendar
#Requires: jolla-calculator
#Requires: jolla-mediaplayer

# these might come in handy as well
#Requires: jolla-settings-accounts-extensions-jabber
#Requires: jolla-settings-accounts-extensions-email
# not usefull yet
#Requires: jolla-settings-accounts-extensions-sip

%description -n patterns-sailfish-device-configuration-bacon
Pattern with packages for bacon configurations

%files -n patterns-sailfish-device-configuration-bacon
