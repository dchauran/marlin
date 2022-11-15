/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Configuration_user.h
 *
 * Used to create per-user settings for a shared configuration. e.g. when
 * creating a standard config for a printer model, this allows the creator
 * to maintain a "stock" configuration, without maintaining a second config
 * that contains their personal deviations.
 *
 * To change a value that was previously defined, you must #undef it first.
 *
 */

// Example:
#undef CUSTOM_MACHINE_NAME
#define CUSTOM_MACHINE_NAME "Pyramid A1.1 - Custom"

#define PREHEAT_4_LABEL       "PC"
#define PREHEAT_4_TEMP_HOTEND 285
#define PREHEAT_4_TEMP_BED    130
#define PREHEAT_4_TEMP_CHAMBER 35
#define PREHEAT_4_FAN_SPEED     0 // Value from 0 to 255

#define SHOW_ALL_FILES true

// Sprite
#undef DEFAULT_Kp
#undef DEFAULT_Ki
#undef DEFAULT_Kd
#define DEFAULT_Kp 19.25
#define DEFAULT_Ki 2.13
#define DEFAULT_Kd 43.51
#undef DEFAULT_AXIS_STEPS_PER_UNIT
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 424.9 }

#define MAX_CYCLE_TIME_PID_AUTOTUNE 60L

#define X_SERIAL_RX_PIN PA10
#define X_SERIAL_TX_PIN PA10
#define Y_SERIAL_RX_PIN PA9
#define Y_SERIAL_TX_PIN PA9
#define Z_SERIAL_RX_PIN PC7
#define Z_SERIAL_TX_PIN PC7
#define Z2_SERIAL_RX_PIN PA5
#define Z2_SERIAL_TX_PIN PA5
#define E0_SERIAL_RX_PIN PC13
#define E0_SERIAL_TX_PIN PC13
