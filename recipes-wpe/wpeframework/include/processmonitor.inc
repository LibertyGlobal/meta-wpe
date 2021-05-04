# Provides configuration for the ProcessMonitor Plugin
WPE_PROCESSMONITOR_AUTOSTART ??= "true"
WPE_PROCESSMONITOR_EXITTIMEOUT ??= "2"

# -----------------------------------------------------------------------------------------------------------
PACKAGECONFIG[processmonitor] = "\
    -DPLUGIN_PROCESSMONITOR=ON \
    -DPLUGIN_PROCESSMONITOR_AUTOSTART="${WPE_PROCESSMONITOR_AUTOSTART}" \
    -DPLUGIN_PROCESSMONITOR_EXITTIMEOUT="${WPE_PROCESSMONITOR_EXITTIMEOUT}" \
    ,-DPLUGIN_PROCESSMONITOR=OFF, \
"

# -----------------------------------------------------------------------------------------------------------