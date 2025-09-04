/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

/* Handedness */
#define EE_HANDS

// settings for the oled keyboard demo with Adafruit 0.91" OLED display on the Stemma QT port
#define OLED_DISPLAY_128X32
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13

/* RGB Synchronization between split halves */
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_MAX_LAYERS 8

/* Set default RGB mode to static */
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT

/* Optional: Set default RGB color (HSV values) */
#define RGBLIGHT_DEFAULT_HUE 3    // Blue hue (0-255)
#define RGBLIGHT_DEFAULT_SAT 120    // Full saturation
#define RGBLIGHT_DEFAULT_VAL 15    // Medium brightness

#ifdef OLED_ENABLE
#   define OLED_FONT_H "keyboards/splitkb/aurora/sofle_v2/glcdfont.c"
#endif

/* PIO Serial Driver Configuration for RP2040 */
#define SERIAL_DRIVER PIO
#define SERIAL_PIO_USE_PIO1    // Use PIO1 instead of PIO0 (recommended for splits)
#define RP2040_PIO_USE_PIO1    // RP2040 specific PIO1 usage

/* For full-duplex (two wire) communication - comment out SOFT_SERIAL_PIN above if using this */
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
