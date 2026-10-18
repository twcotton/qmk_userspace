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

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE, // Layer 0: Mac base layer (default when back switch is set to Mac)
    WIN_BASE, // Layer 1: Windows base layer (default when back switch is set to Win)
    LAYER_2,  // Layer 2: F-keys / RGB toggle (activated via OSL(2) or fn)
    LAYER_3,  // Layer 3: Navigation / Numpad / Media (activated via MO(3))
    LAYER_4,  // Layer 4: Number row overlay (activated via TO(4), exits via TO(0))
    LAYER_5,  // Layer 5: Extra layer (configurable in VIA)
    LAYER_6,  // Layer 6: Extra layer (configurable in VIA)
    LAYER_7,  // Layer 7: Extra layer (configurable in VIA)
};

// Custom keycodes starting at QK_USER (maps directly to VIA's USER00, USER01, etc.)
enum custom_keycodes {
    MY_CUSTOM_LOGIC = QK_USER, // USER00 in VIA
    MY_CUSTOM_KEY2,            // USER01 in VIA
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_69_ansi(
        QK_GESC    , KC_GRV     , KC_LCBR    , KC_LPRN    , KC_LBRC    , LALT(KC_E) , LALT(KC_GRV), KC_HASH    , KC_RBRC    , KC_RPRN    , KC_RCBR    , KC_MINS    , KC_EQL     , KC_BSPC    , KC_MPLY    ,
        KC_TAB     , KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       , KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       , KC_DLR     , KC_AMPR    , KC_BSLS    , OSL(2)     ,
        KC_LCTL    , KC_A       , KC_S       , KC_D       , KC_F       , KC_G       , KC_H       , KC_J       , KC_K       , KC_L       , KC_SCLN    , KC_QUOT    , KC_ENT     , TO(4)      ,
        KC_LSFT    , KC_Z       , KC_X       , KC_C       , KC_V       , KC_B       , KC_B       , KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    , KC_RSFT    , KC_UP      ,
        LCA(KC_NO) , KC_LOPTN   , KC_LCMMD   , KC_SPC     , MO(3)      , MO(3)      , KC_BSPC    , KC_RCMMD   , KC_LEFT    , KC_DOWN    , KC_RGHT    ),

    [WIN_BASE] = LAYOUT_69_ansi(
        QK_GESC    , KC_GRV     , KC_LCBR    , KC_LPRN    , KC_LBRC    , KC_MINS    , KC_EQL     , KC_AMPR    , KC_RBRC    , KC_RPRN    , KC_RCBR    , KC_MINS    , KC_EQL     , KC_BSPC    , KC_MPLY    ,
        KC_TAB     , KC_Q       , KC_W       , KC_E       , KC_R       , KC_T       , KC_Y       , KC_U       , KC_I       , KC_O       , KC_P       , KC_LBRC    , KC_RBRC    , KC_BSLS    , OSL(2)     ,
        KC_LCTL    , KC_A       , KC_S       , KC_D       , KC_F       , KC_G       , KC_H       , KC_J       , KC_K       , KC_L       , KC_SCLN    , KC_QUOT    , KC_ENT     , TO(4)      ,
        KC_LSFT    , KC_Z       , KC_X       , KC_C       , KC_V       , KC_B       , KC_B       , KC_N       , KC_M       , KC_COMM    , KC_DOT     , KC_SLSH    , KC_RSFT    , KC_UP      ,
        KC_LCTL    , KC_LGUI    , KC_LALT    , KC_SPC     , MO(3)      , MO(3)      , KC_BSPC    , KC_RALT    , KC_LEFT    , KC_DOWN    , KC_RGHT    ),

    [LAYER_2] = LAYOUT_69_ansi(
        KC_GRV     , KC_F1      , KC_F2      , KC_F3      , KC_F4      , KC_F5      , KC_F6      , KC_F7      , KC_F8      , KC_F9      , KC_F10     , KC_F11     , KC_F12     , _______    , RGB_TOG    ,
        _______    , _______    , KC_F1      , KC_F2      , KC_F3      , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        RGB_TOG    , KC_F10     , KC_F4      , KC_F5      , KC_F6      , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , KC_F7      , KC_F8      , KC_F9      , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , MO(3)      , MO(3)      , _______    , _______    , _______    , _______    , _______    ),

    [LAYER_3] = LAYOUT_69_ansi(
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , KC_DEL     , _______    ,
        _______    , LCA(KC_NO) , KC_1       , KC_2       , KC_3       , _______    , KC_HOME    , KC_PGDN    , KC_PGUP    , KC_END     , _______    , _______    , _______    , _______    , _______    ,
        _______    , KC_0       , KC_4       , KC_5       , KC_6       , KC_DOT     , KC_LEFT    , KC_DOWN    , KC_UP      , KC_RGHT    , _______    , _______    , _______    , _______    ,
        _______    , KC_LALT    , KC_7       , KC_8       , KC_9       , KC_COMM    , KC_F16     , KC_F17     , KC_MINS    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ),

    [LAYER_4] = LAYOUT_69_ansi(
        KC_GRV     , KC_1       , KC_2       , KC_3       , KC_4       , KC_5       , KC_6       , KC_7       , KC_8       , KC_9       , KC_0       , KC_MINS    , KC_EQL     , KC_DEL     , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , KC_LBRC    , KC_RBRC    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , TO(0)      ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ),

    [LAYER_5] = LAYOUT_69_ansi(
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ),

    [LAYER_6] = LAYOUT_69_ansi(
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ),

    [LAYER_7] = LAYOUT_69_ansi(
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ,
        _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    , _______    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LAYER_2]  = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [LAYER_3]  = {ENCODER_CCW_CW(KC_MRWD, KC_MFFD)},
    [LAYER_4]  = {ENCODER_CCW_CW(_______, _______)},
    [LAYER_5]  = {ENCODER_CCW_CW(_______, _______)},
    [LAYER_6]  = {ENCODER_CCW_CW(_______, _______)},
    [LAYER_7]  = {ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE
// clang-format on

// ----------------------------------------------------------------------------
// Custom Key / Logic Processing
// ----------------------------------------------------------------------------
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Process Keychron wireless & Bluetooth logic first
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }

    switch (keycode) {
        case MY_CUSTOM_LOGIC:
            if (record->event.pressed) {
                // Place your custom logic or macro here
                // e.g. SEND_STRING("Custom logic executed!\n");
            }
            return false;

        case MY_CUSTOM_KEY2:
            if (record->event.pressed) {
                // Second custom key action
            }
            return false;

        default:
            return true; // Pass through to standard QMK / VIA handler
    }
}

void keyboard_post_init_user(void) {
#if defined(RGB_MATRIX_ENABLE)
    // Automatically switch to Typing Heatmap if keyboard is on the old default (Cycle Left-Right)
    if (rgb_matrix_get_mode() == RGB_MATRIX_CYCLE_LEFT_RIGHT) {
        rgb_matrix_mode(RGB_MATRIX_TYPING_HEATMAP);
    }
#endif
}

// ----------------------------------------------------------------------------
// Custom Backlight / RGB Matrix Logic
// ----------------------------------------------------------------------------
#if defined(RGB_MATRIX_ENABLE)
#include <lib/lib8tion/lib8tion.h>
#include "k11_leds.h"

// Color definitions for each layer (R, G, B)
#define COLOR_MAC_BASE 0, 255, 255  // Layer 0 (Mac Base): Cyan
#define COLOR_WIN_BASE 0, 255, 0    // Layer 1 (Win Base): Green
#define COLOR_LAYER_2  255, 0, 255  // Layer 2 (Fn / F-Keys): Magenta
#define COLOR_LAYER_3  255, 255, 0  // Layer 3 (Nav / Numpad): Yellow

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Determine the active layer: combines overlay layer_state with default_layer_state
    // (ensures toggling between Mac and Windows base layers works accurately)
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    for (uint8_t i = led_min; i < led_max; i++) {
        switch (layer) {
            case MAC_BASE:
                // Base layer: keep empty to allow standard VIA RGB effects
                break;
            case WIN_BASE:
                // Base layer: keep empty to allow standard VIA RGB effects
                break;
            case LAYER_2:
                rgb_matrix_set_color(i, COLOR_LAYER_2);
                break;
            case LAYER_3:
                // Per-key RGB: WASD highlighted in solid Red, pulsing rainbow on the rest
                if (
                    i == LED_H ||
                    i == LED_J ||
                    i == LED_K ||
                    i == LED_L
                ) {
                    rgb_matrix_set_color(i, COLOR_MAC_BASE);
                }
                break;
            case LAYER_4:
                if (
                    i == LED_Q ||
                    i == LED_W ||
                    i == LED_E ||
                    i == LED_A ||
                    i == LED_S ||
                    i == LED_D
                ) {
                    rgb_matrix_set_color(i, COLOR_MAC_BASE);
                }
                break;
            case LAYER_5:
                // Layer 5 RGB (configure per-key or per-layer here)
                break;
            case LAYER_6:
                // Layer 6 RGB (configure per-key or per-layer here)
                break;
            case LAYER_7:
                // Layer 7 RGB (configure per-key or per-layer here)
                break;
            default:
                break;
        }
    }

    // Highlight Caps Lock key in White when Caps Lock is active
    if (host_keyboard_led_state().caps_lock) {
#if defined(CAPS_LOCK_INDEX)
        rgb_matrix_set_color(CAPS_LOCK_INDEX, 255, 255, 255);
#endif
    }

    return false;
}
#endif
