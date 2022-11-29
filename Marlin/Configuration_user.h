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

#undef HEATER_0_MAXTEMP
#define HEATER_0_MAXTEMP 315

#undef  NOZZLE_TO_PROBE_OFFSET
//#define NOZZLE_TO_PROBE_OFFSET { -35.5, 0, -4.83 }
#define NOZZLE_TO_PROBE_OFFSET { -31.9, -40.5, -5.2 }

#define PREHEAT_4_LABEL       "PC"
#define PREHEAT_4_TEMP_HOTEND 290
#define PREHEAT_4_TEMP_BED    120
#define PREHEAT_4_TEMP_CHAMBER 35
#define PREHEAT_4_FAN_SPEED     0 // Value from 0 to 255

// #undef GRID_MAX_POINTS_Y
// #undef GRID_MAX_POINTS_X
// #define GRID_MAX_POINTS_X 3
// #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X

#undef Z_DRIVER_TYPE
#undef Z2_DRIVER_TYPE
#undef E0_DRIVER_TYPE
#undef E1_DRIVER_TYPE
#define Z_DRIVER_TYPE  TMC2208_STANDALONE
#define Z2_DRIVER_TYPE TMC2208_STANDALONE
#define E0_DRIVER_TYPE TMC2208_STANDALONE
#define E1_DRIVER_TYPE TMC2208_STANDALONE

#undef INVERT_Z_DIR
#define INVERT_Z_DIR false
// #undef INVERT_E0_DIR
// #define INVERT_E0_DIR true

#define SHOW_ALL_FILES true


// Sprite
#undef DEFAULT_Kp
#undef DEFAULT_Ki
#undef DEFAULT_Kd
#define DEFAULT_Kp 15.23
#define DEFAULT_Ki 1.46
#define DEFAULT_Kd 39.61
#undef DEFAULT_AXIS_STEPS_PER_UNIT
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 424.9 }

// #undef X_BED_SIZE
// #undef Y_BED_SIZE
// #define X_BED_SIZE 293
// #define Y_BED_SIZE 285
#define MAX_CYCLE_TIME_PID_AUTOTUNE 60L