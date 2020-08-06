SUMMARY = "WPE Framework OpenCDMi module for PlayReady Nexus"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=3b83ef96387f14655fc854ddc3c6bd57"

require include/wpeframework-plugins.inc

DEPENDS += " broadcom-refsw"

SRC_URI = "git://git@github.com/rdkcentral/OCDM-Playready-Nexus.git;protocol=https;branch=master"
# Revision hash of R1 release
SRCREV = "de09ab733d74074dcaae04f39f5b6dd50cdc2e62"

FILES_${PN} = "${datadir}/WPEFramework/OCDM/*.drm"
