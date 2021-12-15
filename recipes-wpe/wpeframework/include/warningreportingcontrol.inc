# Provides configuration for the WarningReportingControl Plugin
WPE_WARNINGREPORTINGCONTROL_AUTOSTART ??= "true"
WPE_WARNINGREPORTINGCONTROL_CONSOLE ??= "true"
WPE_WARNINGREPORTINGCONTROL_SYSLOG ??= "true"
WPE_WARNINGREPORTINGCONTROL_FILENAME ??= "warnings.log"
WPE_WARNINGREPORTINGCONTROL_ABBREVIATED ??= "true"
WPE_WARNINGREPORTINGCONTROL_WARNINGSONLY ??= "false"


PACKAGECONFIG[warningreportingcontrol] = "\
    -DPLUGIN_WARNINGREPORTINGCONTROL=ON \
    -DPLUGIN_WARNINGREPORTINGCONTROL_AUTOSTART="${WPE_WARNINGREPORTINGCONTROL_AUTOSTART}" \
    -DPLUGIN_WARNINGREPORTINGCONTROL_CONSOLE="${WPE_WARNINGREPORTINGCONTROL_CONSOLE}" \
    -DPLUGIN_WARNINGREPORTINGCONTROL_SYSLOG="${WPE_WARNINGREPORTINGCONTROL_SYSLOG}" \
    -DPLUGIN_WARNINGREPORTINGCONTROL_FILENAME="${WPE_WARNINGREPORTINGCONTROL_FILENAME}" \
    -DPLUGIN_WARNINGREPORTINGCONTROL_ABBREVIATED="${WPE_WARNINGREPORTINGCONTROL_ABBREVIATED}" \
    -DPLUGIN_WARNINGREPORTINGCONTROL_WARNINGSONLY="${WPE_WARNINGREPORTINGCONTROL_WARNINGSONLY}" \
    ,-DPLUGIN_WARNINGREPORTINGCONTROL=OFF, \
"
