
WPE_PLAYERINFO_AUTOSTART ?= "true"
WPE_PLAYERINFO_DOLBY_FLAGS = "${@bb.utils.contains('DISTRO_FEATURES', 'dolby', '-DDOLBY_SUPPORT=ON', '-DDOLBY_SUPPORT=OFF', d)}"
WPE_PLAYERINFO_DOLBY_PLATFORM_IMPL ?= "None"

PACKAGECONFIG[playerinfo] = "\
    -DPLUGIN_PLAYERINFO=ON \
    -DPLUGIN_PLAYERINFO_AUTOSTART=${WPE_PLAYERINFO_AUTOSTART} \
    ${WPE_PLAYERINFO_DOLBY_FLAGS} \
    -DDOLBY_IMPLEMENTATION=${WPE_PLAYERINFO_DOLBY_PLATFORM_IMPL}, \
    ,,"