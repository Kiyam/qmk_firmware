# Custom Keymap for Dactyl Manuform

This README file provides documentation for the custom keymap for the Dactyl Manuform keyboard. Below are the details regarding the keymap configuration, layers, and any specific features included in this keymap.

## Keymap Overview

The custom keymap is designed to provide a flexible and efficient layout for users of the Dactyl Manuform keyboard. It includes multiple layers for different functionalities, allowing users to switch between them seamlessly.

## Layers

The keymap consists of the following layers:

1. **Base Layer**: The default layer with standard key functions.
2. **Function Layer**: Access to function keys and media controls.
3. **Navigation Layer**: Dedicated keys for navigation (arrows, page up/down, etc.).
4. **Custom Layer**: A layer for custom macros and shortcuts.

## Key Features

- **Tap Dance**: Some keys are configured to perform different actions based on the number of taps.
- **Media Keys**: Quick access to media controls such as play, pause, and volume adjustment.
- **OLED Display Support**: Integration with an OLED display to show layer information and other relevant data.

## Configuration

To use this keymap, ensure that the following files are correctly set up in your QMK firmware directory:

- `keyboards/dactyl_manuform/config.h`: Contains pin definitions and matrix settings.
- `keyboards/dactyl_manuform/rules.mk`: Defines build rules and options for the keyboard firmware.

## Building the Firmware

To compile the firmware with this custom keymap, navigate to the QMK firmware root directory and run the following command:

```
qmk compile -kb dactyl_manuform -km custom
```

## Additional Notes

For further customization, you can modify the `keymap.c` file located in the same directory. Refer to the QMK documentation for more information on keymap configuration and advanced features.

Happy typing!