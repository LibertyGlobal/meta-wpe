# Provides configuration for the Messenger Plugin
WPE_MESSENGER_AUTOSTART ??= "true"
WPE_MESSENGER_OUTOFPROCESS ??= "false"

# -----------------------------------------------------------------------------------------------------------
PACKAGECONFIG[messenger] = "\
    -DPLUGIN_MESSENGER=ON \
    -DPLUGIN_MESSENGER_AUTOSTART="${WPE_MESSENGER_AUTOSTART}" \
    -DPLUGIN_MESSENGER_OUTOFPROCESS="${WPE_MESSENGER_OUTOFPROCESS}" \
    ,-DPLUGIN_MESSENGER=OFF, \
"

# -----------------------------------------------------------------------------------------------------------