# Provides configuration for the BluetoothControl and BluetoothRemoteControl Plugins
WPE_BLUETOOTH_AUTOSTART ??= "true"
WPE_BLUETOOTH_PERSISTMAC ??= "false"
WPE_BLUETOOTHREMOTECONTROL_AUTOSTART ??= "true"

# -----------------------------------------------------------------------------------------------------------
PACKAGECONFIG[bluetoothcontrol] = "-DPLUGIN_BLUETOOTH=ON \
    -DPLUGIN_BLUETOOTH_AUTOSTART="${WPE_BLUETOOTH_AUTOSTART}" \
    -DPLUGIN_BLUETOOTH_PERSISTMAC="${WPE_BLUETOOTH_PERSISTMAC}" \
    ,-DPLUGIN_BLUETOOTH=OFF,,bluez5"

PACKAGECONFIG[bluetoothremote] = "-DPLUGIN_BLUETOOTHREMOTECONTROL=ON \
    -DPLUGIN_BLUETOOTHREMOTECONTROL_AUTOSTART="${WPE_BLUETOOTHREMOTECONTROL_AUTOSTART}" \
    ,-DPLUGIN_BLUETOOTHREMOTECONTROL=OFF,"
# -----------------------------------------------------------------------------------------------------------