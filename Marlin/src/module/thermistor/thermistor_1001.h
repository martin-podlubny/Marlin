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

// my custom manually-created thermistor table
constexpr temp_entry_t temptable_1001[] PROGMEM = {
    {OV(15), 270},
    {OV(20), 260},
    {OV(35), 250},
    {OV(41), 240},
    {OV(54), 228},
    {OV(63), 221},
    {OV(72), 213},
    {OV(82), 209},
    {OV(94), 201},
    {OV(98), 196},
    {OV(134), 181},
    {OV(170), 170},
    {OV(207), 160},
    {OV(216), 144},
    {OV(258), 134},
    {OV(300), 127},
    {OV(353), 120},
    {OV(409), 111},
    {OV(468), 103},
    {OV(532), 95},
    {OV(591), 88},
    {OV(666), 78},
    {OV(737), 71},
    {OV(795), 63},
    {OV(856), 54},
    {OV(901), 45},
    {OV(930), 38},
    {OV(940), 36}};
