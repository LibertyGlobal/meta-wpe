# Provides configuration for the Cobalt Plugin
WPE_COBALT_STARBOARD_CONFIGURATION_INCLUDE ??= ""

# Additional flags
WPE_COBALT_AUTOSTART ??= "false"
WPE_COBALT_OUTOFPROCESS ??= "true"
WPE_COBALT_USER ??= ""
WPE_COBALT_GROUP ??= ""

WPE_COBALT_RESOLUTION ??= "720p"

WPE_COBALT_CLIENTIDENTIFIER ??= ""
WPE_COBALT_MANUFACTURER_NAME ??= ""
WPE_COBALT_CHIPSET_MODEL_NUMBER ??= ""
WPE_COBALT_FIRMWARE_VERSION ??= ""
WPE_COBALT_MODEL_NAME ??= ""
WPE_COBALT_MODEL_YEAR ??= ""
WPE_COBALT_OPERATOR_NAME ??= ""
WPE_COBALT_FRIENDLY_NAME ??= ""
WPE_COBALT_SCOPE ??= ""
WPE_COBALT_SECRET ??= ""
WPE_COBALT_PLAYBACKRATES ??= ""
WPE_COBALT_WEBINSPECTOR_ADDRESS ??= "0.0.0.0:9222"

# -----------------------------------------------------------------------------------------------------------
WPE_COBALT_EXTRAFLAGS = "\
    -DPLUGIN_COBALT_AUTOSTART="${WPE_COBALT_AUTOSTART}" \
    -DPLUGIN_COBALT_OUTOFPROCESS="${WPE_COBALT_OUTOFPROCESS}" \
    -DPLUGIN_COBALT_USER="${WPE_COBALT_USER}" \
    -DPLUGIN_COBALT_GROUP="${WPE_COBALT_GROUP}" \
    -DWPEFRAMEWORK_PLUGIN_COBALT_STARBOARD_CONFIGURATION_INCLUDE="${WPE_COBALT_STARBOARD_CONFIGURATION_INCLUDE}" \
    -DPLUGIN_COBALT_RESOLUTION="${WPE_COBALT_RESOLUTION}" \
    -DPLUGIN_COBALT_CLIENTIDENTIFIER="${WPE_COBALT_CLIENTIDENTIFIER}" \
    -DPLUGIN_COBALT_MANUFACTURER_NAME="${WPE_COBALT_MANUFACTURER_NAME}" \
    -DPLUGIN_COBALT_CHIPSET_MODEL_NUMBER="${WPE_COBALT_CHIPSET_MODEL_NUMBER}" \
    -DPLUGIN_COBALT_FIRMWARE_VERSION="${WPE_COBALT_FIRMWARE_VERSION}" \
    -DPLUGIN_COBALT_MODEL_NAME="${WPE_COBALT_MODEL_NAME}" \
    -DPLUGIN_COBALT_MODEL_YEAR="${WPE_COBALT_MODEL_YEAR}" \
    -DPLUGIN_COBALT_OPERATOR_NAME="${WPE_COBALT_OPERATOR_NAME}" \
    -DPLUGIN_COBALT_FRIENDLY_NAME="${WPE_COBALT_FRIENDLY_NAME}" \
    -DPLUGIN_COBALT_WEBINSPECTOR_ADDRESS="${WPE_COBALT_WEBINSPECTOR_ADDRESS}" \
    -DPLUGIN_COBALT_SCOPE="${WPE_COBALT_SCOPE}" \
    -DPLUGIN_COBALT_SECRET="${WPE_COBALT_SECRET}" \
    -DPLUGIN_COBALT_PLAYBACKRATES="${WPE_COBALT_PLAYBACKRATES}" \
"

PACKAGECONFIG[cobalt] = "\
    -DPLUGIN_COBALT=ON \
    ${WPE_COBALT_EXTRAFLAGS}, \
    -DPLUGIN_COBALT=OFF,libcobalt,libcobalt \
"
# -----------------------------------------------------------------------------------------------------------