# any kernel recipe with fragment support, that sets LINUX_VERSION to one of the tested
# values, will get the appropriate fragments included in their SRC_URI

LINUX_MAJOR = "${@(d.getVar('LINUX_VERSION') or "x.y").split('.')[0]}"
LINUX_MINOR = "${@(d.getVar('LINUX_VERSION') or "x.y").split('.')[1]}"

include ${@bb.utils.contains('DISTRO_FEATURES', 'virtualization', 'linux-yocto_${LINUX_MAJOR}.${LINUX_MINOR}_virtualization.inc', '', d)}


