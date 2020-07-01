SUMMARY = "Host/Native tooling for the Web Platform for Embedded Framework"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=f1dffbfd5c2eb52e0302eb6296cc3711"

PR = "r0"
PV = "3.0+git${SRCPV}"
S = "${WORKDIR}/git"

SRC_URI = "git://github.com/rdkcentral/Thunder.git;protocol=git;branch=master \
          "
SRC_URI[md5sum] = "42b518b9ccd6852d1d709749bc96cb70"
SRC_URI[sha256sum] = "f3c45b121cf6257eafabdc3a8008763aed1cd7da06dbabc59a9e4d2a5e4e6697"

SRCREV = "44015fd94299ccac5a625a27c7878b6a0f2b169f"

inherit cmake pkgconfig native python3native

DEPENDS = "\
    python3-native \
    python3-jsonref-native \
"

OECMAKE_SOURCEPATH = "${WORKDIR}/git/Tools"

FILES_${PN} += "${datadir}/*/Modules/*.cmake"
