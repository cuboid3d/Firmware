/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Gen3+ pin assignments
 */

#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
  #error "Oops!  Make sure you have 'Sanguino' selected from the 'Tools -> Boards' menu."
#endif

#define BOARD_NAME         "Gen3+"

//
// Limit Switches
//
#define X_STOP_PIN         20
#define Y_STOP_PIN         25
#define Z_STOP_PIN         30

//
// Steppers
//
#define X_STEP_PIN         15
#define X_DIR_PIN          18
#define X_ENABLE_PIN       19

#define Y_STEP_PIN         23
#define Y_DIR_PIN          22
#define Y_ENABLE_PIN       24

#define Z_STEP_PIN         27
#define Z_DIR_PIN          28
#define Z_ENABLE_PIN       29

#define E0_STEP_PIN        17
#define E0_DIR_PIN         21
#define E0_ENABLE_PIN      13

//
// Temperature Sensors
//
#define TEMP_0_PIN          0   // Analog Input (pin 33 extruder)
#define TEMP_BED_PIN        5   // Analog Input (pin 34 bed)

//
// Heaters
//
#define HEATER_0_PIN       12
#define HEATER_BED_PIN     16

//
// Misc. Functions
//
#define SDSS                4
#define PS_ON_PIN          14


