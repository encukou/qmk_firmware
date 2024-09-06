/* Copyright (C) 2022 jonylee@hfd
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

bool cz = false;

enum custom_keycodes {
    XZ_FN = SAFE_RANGE,
    XZ_MKR
};
#define XZ_FN1 XZ_FN
#define XZ_LT  XZ_FN
#define TGNUM TG(XYZZY_NUM)

enum __layers {
    XYZZY_B,
    XYZZY_CZ,
    XYZZY_FN,
    XYZZY_NUM,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [XYZZY_B] = LAYOUT(
    KC_ESC,  XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,            XZ_FN,   XZ_FN,   XZ_FN,   XZ_MKR,  XZ_MKR,  XZ_MKR,  XZ_MKR,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, KC_U,    KC_D,    KC_G,    TG(XYZZY_CZ),
    KC_TAB,  KC_A,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, XZ_LT,   KC_N,    XZ_LT,   KC_I,
    KC_CAPS, KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                             KC_W,    KC_Z,    KC_E,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                   KC_RSFT,          KC_UP,            XZ_LT,   KC_S,    XZ_LT,   KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, KC_RGUI, MO(XYZZY_FN),     KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,          KC_X,    KC_L),

  [XYZZY_CZ] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            _______, KC_Y,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,          _______,          _______, _______, _______, _______,
    _______, _______, _______,                   _______,                            _______, _______, _______,          _______, _______, _______, _______,          _______, _______),

  [XYZZY_FN] = LAYOUT(
    XZ_FN1,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SCRL, KC_PAUS, _______, _______, _______, _______,
    _______, _______, _______, TGNUM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,
    XZ_FN1,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,
    XZ_FN1,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          XZ_FN1,                             XZ_FN1,  XZ_FN1,  XZ_FN1,
    XZ_FN1,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   XZ_FN1,           XZ_FN1,           XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,
    XZ_FN1,  XZ_FN1,  XZ_FN1,                    XZ_FN1,                             XZ_FN1,  XZ_FN1,  _______,          XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,           XZ_FN1,  XZ_FN1),

  [XYZZY_NUM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                            KC_P4,   KC_P5,   KC_P6,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,          _______,          KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    _______, _______, _______,                   _______,                            _______, _______, _______,          _______, _______, _______, _______,          KC_P0,   KC_PDOT),
};

PROGMEM const char* magic[MATRIX_ROWS][MATRIX_COLS] = LAYOUT(
    "ESCAPE","THROW", "PULL",  "CLOSE", "PRESS", "PICK",  "DRINK", "KICK", "TOUCH",  "SHOW", "TELL",   "CLIMB", "EMPTY",          "PRINT", "SCROLL","BREAK", NULL,    NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    "ERASE", "INSERT","HOME",  "PGUP",  "UP",    "DOWN",  "AGAIN",  "INPUT",
    "JUMP",  NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    "DELETE","END",   "PGDN",  "NW",    "NORTH", "NE",    "INSPECT",
    "LOCK",  NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,             "ENTER",                            "WEST",  "WAIT",  "EAST",
    "SHIFT", NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,                      "SHIFT",          "PREVIOUS",       "SW",    "SOUTH", "SE",    "RETURN",
    "CONTROL","SYSTEM","OPTION",                 "SPACE",                            "OPTION","SYSTEM",NULL,            "CONTROL","LEFT",  "NEXT",  "RIGHT",          "EXAMINE","LOOK"
);
PROGMEM const char* magic_shift[MATRIX_ROWS][MATRIX_COLS] = LAYOUT(
    NULL,    "TAKE",  "PUSH",  "OPEN",  "HIT",  "PUT",   "EAT",    "TURN", "LISTEN", "TALK", "ASK",    "RUN",   "FILL",           "WRITE", "MOVE",  "MAKE",  NULL,    NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,             NULL,                               NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,    NULL,                      NULL,             NULL,             NULL,    NULL,    NULL,    NULL,
    NULL,    NULL,    NULL,                      NULL,                               NULL,    NULL,    NULL,             NULL,    NULL,    NULL,    NULL,             NULL,    NULL
);
// clang-format on

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool shifted = get_mods() & MOD_MASK_SHIFT;
    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    if (record->event.pressed) {
        switch (keycode) {
            case XZ_FN: {
                if (shifted && magic[row][col]) {
                    send_string_P(magic_shift[row][col]);
                    return false;
                }
                send_string_P(magic[row][col]);
            } return false;
        }
    }
    return true;
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_NONE);
}

/*
#define CZ_LED_INDEX MAC_LED_INDEX
#define EN_LED_INDEX MAC_LED_INDEX
#define COLOR_WHITE 255, 255, 255
#define COLOR_BLACK 0, 0, 0

bool rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(CAPS_LED_INDEX, COLOR_WHITE);
    } else {
        rgb_matrix_set_color(CAPS_LED_INDEX, COLOR_BLACK);
    }
    if (host_keyboard_led_state().num_lock) {
        if (host_keyboard_led_state().scroll_lock) {
            rgb_matrix_set_color(NUM_LED_INDEX, 255, 255, 255);
        } else {
            rgb_matrix_set_color(NUM_LED_INDEX, 255, 255, 0);
        }
    } else {
        if (host_keyboard_led_state().scroll_lock) {
            rgb_matrix_set_color(NUM_LED_INDEX, 0, 0, 255);
        } else {
            rgb_matrix_set_color(NUM_LED_INDEX, 0, 0, 0);
        }
    }
    if (cz) {
        rgb_matrix_set_color(CZ_LED_INDEX, COLOR_WHITE);
        rgb_matrix_set_color(EN_LED_INDEX, COLOR_BLACK);
    } else {
        rgb_matrix_set_color(CZ_LED_INDEX, COLOR_BLACK);
        rgb_matrix_set_color(EN_LED_INDEX, COLOR_WHITE);
    }
    return true;
}
*/
