SUMMARY = "WPE Framework User Interface"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=c2b3f2a8aff73c673037a89bee1ee396"

require include/wpeframework-plugins.inc

SRC_URI = "git://github.com/rdkcentral/ThunderUI.git;protocol=git;branch=master"
SRCREV = "c3a700c62858e08ea88d022b4f508ab28647f80a"

do_configure[noexec] = "1"
do_compile[noexec] = "1"

do_install() {
	rm -rf ${D}${datadir}/WPEFramework/Controller/UI/*
	mkdir -p ${D}${datadir}/WPEFramework/Controller/UI
	cp -r ${S}/dist/* ${D}${datadir}/WPEFramework/Controller/UI
}

FILES_${PN} += "${datadir}/WPEFramework/Controller/UI/*"
