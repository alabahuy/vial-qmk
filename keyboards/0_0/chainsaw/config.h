// Copyright 2023 Alabahuy (@Alabahuy)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* Audio */
//#define AUDIO_PIN GP16
//#define AUDIO_PWM_DRIVER PWMD0
//#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
//#define AUDIO_INIT_DELAY
//#define AUDIO_CLICKY

//#define SPEAKER_SHUTDOWN GP25

#define DEBOUNCE 5

/* Joystick */
//#define ANALOG_JOYSTICK_X_AXIS_PIN GP27
//#define ANALOG_JOYSTICK_Y_AXIS_PIN GP26
//#define POINTING_DEVICE_ROTATION_90
//#define POINTING_DEVICE_INVERT_X

/* disable debug print */
//#define NO_DEBUG

/* disable print */	
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
