/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// ============================================================================
// Keychron K11 Max (ANSI RGB) - Per-Key LED Index Constants
// ============================================================================
// Total LED Count: 68 (Indices 0 to 67)
// Note: Rotary encoder click [0,15] does not have an onboard LED.

// ----------------------------------------------------------------------------
// Row 0 - Number / Esc Row
// ----------------------------------------------------------------------------
#define LED_ESC         0
#define LED_GESC        0
#define LED_GRV         0
#define LED_1           1
#define LED_EXLM        1
#define LED_2           2
#define LED_AT          2
#define LED_3           3
#define LED_HASH        3
#define LED_4           4
#define LED_DLR         4
#define LED_5           5
#define LED_PERC        5
#define LED_6           6
#define LED_CIRC        6
#define LED_7           7
#define LED_AMPR        7
#define LED_8           8
#define LED_ASTR        8
#define LED_9           9
#define LED_LPRN        9
#define LED_0           10
#define LED_RPRN        10
#define LED_MINS        11
#define LED_MINUS       11
#define LED_UNDR        11
#define LED_EQL         12
#define LED_EQUAL       12
#define LED_PLUS        12
#define LED_BSPC        13
#define LED_BACKSPACE   13

// ----------------------------------------------------------------------------
// Row 1 - QWERTY Row
// ----------------------------------------------------------------------------
#define LED_TAB         14
#define LED_Q           15
#define LED_W           16
#define LED_E           17
#define LED_R           18
#define LED_T           19
#define LED_Y           20
#define LED_U           21
#define LED_I           22
#define LED_O           23
#define LED_P           24
#define LED_LBRC        25
#define LED_LCBR        25
#define LED_RBRC        26
#define LED_RCBR        26
#define LED_BSLS        27
#define LED_BSLASH      27
#define LED_PIPE        27
#define LED_DEL         28
#define LED_DELETE      28
#define LED_INS         28

// ----------------------------------------------------------------------------
// Row 2 - Home Row
// ----------------------------------------------------------------------------
#define LED_CAPS        29
#define LED_CAPS_LOCK   29
#define LED_A           30
#define LED_S           31
#define LED_D           32
#define LED_F           33
#define LED_G           34
#define LED_H           35
#define LED_J           36
#define LED_K           37
#define LED_L           38
#define LED_SCLN        39
#define LED_COLN        39
#define LED_QUOT        40
#define LED_DQUO        40
#define LED_ENT         41
#define LED_ENTER       41
#define LED_HOME        42
#define LED_END         42

// ----------------------------------------------------------------------------
// Row 3 - Bottom Letter Row
// ----------------------------------------------------------------------------
#define LED_LSHIFT      43
#define LED_LSFT        43
#define LED_Z           44
#define LED_X           45
#define LED_C           46
#define LED_V           47
#define LED_B_LEFT      48
#define LED_BL          48
#define LED_B           48  // Default alias for Left B on Alice layout
#define LED_B_RIGHT     49
#define LED_BR          49
#define LED_N           50
#define LED_M           51
#define LED_COMM        52
#define LED_COMMA       52
#define LED_LABK        52
#define LED_DOT         53
#define LED_PERIOD      53
#define LED_RABK        53
#define LED_SLSH        54
#define LED_SLASH       54
#define LED_QUES        54
#define LED_RSHIFT      55
#define LED_RSFT        55
#define LED_UP          56
#define LED_PGUP        56  // Physical Up Arrow / Layer Fn PgUp

// ----------------------------------------------------------------------------
// Row 4 - Modifiers / Spacebar / Arrow Cluster
// ----------------------------------------------------------------------------
#define LED_LCTRL       57
#define LED_LCTL        57
#define LED_LOPT        58
#define LED_LOPTION     58
#define LED_LALT        58
#define LED_LCMD        59
#define LED_LCMMD       59
#define LED_LGUI        59
#define LED_LWIN        59
#define LED_LSPACE      60
#define LED_SPC_L       60  // Left split spacebar (also low battery indicator)
#define LED_FN1         61
#define LED_FN          61  // Left Fn key between split spacebars
#define LED_FN2         62  // Right Fn key between split spacebars
#define LED_RSPACE      63
#define LED_SPC_R       63  // Right split spacebar (also low battery indicator)
#define LED_RCMD        64
#define LED_RCMMD       64
#define LED_RALT        64
#define LED_RGUI        64
#define LED_LEFT        65
#define LED_DOWN        66
#define LED_PGDN        66  // Physical Down Arrow / Layer Fn PgDn
#define LED_RIGHT       67
#define LED_RGHT        67
