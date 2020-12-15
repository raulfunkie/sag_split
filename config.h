/*
Copyright 2021 Raul Rincon

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x2607
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0100
#define MANUFACTURER    funkie
#define PRODUCT        	SplitSag V1
#define DESCRIPTION     Sagittarious inspired split keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
//define MATRIX_ROW_PINS { B4, E6, D7, C6, D4 }

//define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D2

#define DEBOUNCE 5
