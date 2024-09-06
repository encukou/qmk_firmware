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

#define BRIGHTNESS_LEVELS 3
unsigned char current_brightness_index[2] = {0, 0};
unsigned char current_brightness_low = 0;
unsigned char current_brightness_high = 0;
const unsigned char brightnesses_low[BRIGHTNESS_LEVELS] = {0, 100, 200};
const unsigned char brightnesses_high[BRIGHTNESS_LEVELS][BRIGHTNESS_LEVELS] = {
    {100, 200, 255},
    {200, 230, 255},
    {255, 255, 255},
};
#define ARRAY_LEN(a) (sizeof(a) / sizeof(a[0]))

enum custom_keycodes {
    XZ_FN = SAFE_RANGE,
    XZ_MKR,
    XZ_REC,
    XZ_BRIL,
    XZ_BRIH
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

#define CAPS_LED_INDEX 62
#define NUM_LED_INDEX 37
#define SCRL_LED_INDEX 14
#define INPUT_LED_INDEX 40
#define FN_LED_INDEX 101
#define TGNUM_LED_INDEX 23
#define MKR_LED_INDEX_START 16
#define MKR_LED_OFFSET 3
#define Y_LED_INDEX 47
#define Z_LED_INDEX 79

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [XYZZY_B] = LAYOUT(
    KC_ESC,  XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,   XZ_FN,            XZ_FN,   XZ_FN,   XZ_FN,   XZ_MKR,  XZ_MKR,  XZ_MKR,  XZ_MKR,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP, KC_U,    KC_D,    KC_G,    TG(XYZZY_CZ),
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN, XZ_LT,   KC_N,    XZ_LT,   KC_I,
    KC_CAPS, KC_W,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                             KC_W,    KC_Z,    KC_E,
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
    XZ_FN1,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_PSCR, KC_SCRL, KC_PAUS, XZ_REC,  XZ_REC,  XZ_REC,  XZ_REC,
    _______, _______, _______, TGNUM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,
    XZ_FN1,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XZ_BRIL, XZ_BRIH, _______, XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,  XZ_FN1,
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

void update_brightness(void) {
    current_brightness_index[0] %= BRIGHTNESS_LEVELS;
    current_brightness_index[1] %= BRIGHTNESS_LEVELS;
    current_brightness_low = brightnesses_low[current_brightness_index[0]];
    current_brightness_high = brightnesses_high[current_brightness_index[0]][current_brightness_index[1]];
}

#define N_MACROS 4
#define MACRO_BUF_SIZE 32
typedef struct {
    unsigned char size;
    char recording;
    keyrecord_t buf[MACRO_BUF_SIZE];
} macro_t;

macro_t macros[N_MACROS] = {{0}};
int is_recording = 0;

void macro_play(int i) {
    layer_state_t saved_layer_state = layer_state;

    clear_keyboard();
    layer_clear();

    for (int j = 0; j < macros[i].size; j++) {
        process_record(&(macros[i].buf[j]));
        wait_ms(2);
    }

    clear_keyboard();

    layer_state_set(saved_layer_state);
}

void macro_recording_start(int i) {
    macros[i].recording = 1;
    macros[i].size = 0;
    is_recording = 1;
}

void macro_recording_stop(int i) {
    macros[i].recording = 0;
    while (macros[i].size && macros[i].buf[macros[i].size - 1].event.pressed) {
        macros[i].size--;
    }
    for (int i = 0; i < N_MACROS; i++) {
        if (macros[i].recording) {
            is_recording = 1;
            return;
        }
    }
    is_recording = 0;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    bool shifted = get_mods() & MOD_MASK_SHIFT;
    uint8_t row = record->event.key.row;
    uint8_t col = record->event.key.col;
    if (record->event.pressed) {
        switch (keycode) {
            case XZ_FN: {
                if (shifted && magic_shift[row][col]) {
                    send_string_P(magic_shift[row][col]);
                } else {
                    send_string_P(magic[row][col]);
                }
                send_char(' ');
            } break;
            case XZ_REC: {
                int i = col % N_MACROS;
                if (macros[i].recording) {
                    macro_recording_stop(i);
                } else {
                    macro_recording_start(i);
                }
            } return false;
            case XZ_MKR: {
                int i = col % N_MACROS;
                if (macros[i].recording) {
                    macro_recording_stop(i);
                } else if (macros[i].size == 0) {
                    macro_recording_start(i);
                } else {
                    macro_play(i);
                }
            } return false;
            case XZ_BRIL: {
                current_brightness_index[0] += 1;
                update_brightness();
            } break;
            case XZ_BRIH: {
                current_brightness_index[1] += 1;
                update_brightness();
            } break;
        }
    }
    if (is_recording) {
        for (int i = 0; i < N_MACROS; i++) {
            if (macros[i].recording) {
                if (!macros[i].size && !record->event.pressed) {
                    continue;
                }
                macros[i].buf[macros[i].size] = *record;
                macros[i].size++;
                if (macros[i].size >= MACRO_BUF_SIZE) {
                    macro_recording_stop(i);
                }
            }
        }
    }
    return true;
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_NONE);
    update_brightness();
}

#define LO (current_brightness_low)
#define HI (current_brightness_high)
#define MD ((current_brightness_low + current_brightness_high) / 2)

#define COLOR_WHITE HI, HI, HI
#define COLOR_GRAY MD, MD, MD
#define COLOR_RED HI, LO, LO
#define COLOR_BLACK LO, LO, LO

bool rgb_matrix_indicators_user(void) {
    led_t led_state = host_keyboard_led_state();
    rgb_matrix_set_color_all(COLOR_BLACK);

    if (led_state.caps_lock)    rgb_matrix_set_color(CAPS_LED_INDEX, COLOR_WHITE);
    else                        rgb_matrix_set_color(CAPS_LED_INDEX, COLOR_BLACK);

    if (led_state.num_lock)     rgb_matrix_set_color(NUM_LED_INDEX, COLOR_WHITE);
    else                        rgb_matrix_set_color(NUM_LED_INDEX, COLOR_BLACK);

    if (led_state.scroll_lock)  rgb_matrix_set_color(SCRL_LED_INDEX, COLOR_WHITE);
    else                        rgb_matrix_set_color(SCRL_LED_INDEX, COLOR_BLACK);

    if (IS_LAYER_ON(XYZZY_CZ)) {
        rgb_matrix_set_color(INPUT_LED_INDEX, COLOR_WHITE);
        rgb_matrix_set_color(Y_LED_INDEX, COLOR_GRAY);
        rgb_matrix_set_color(Z_LED_INDEX, COLOR_GRAY);
    } else {
        rgb_matrix_set_color(INPUT_LED_INDEX, COLOR_BLACK);
        rgb_matrix_set_color(Y_LED_INDEX, COLOR_BLACK);
        rgb_matrix_set_color(Z_LED_INDEX, COLOR_BLACK);
    }

    if (IS_LAYER_ON(XYZZY_FN))  rgb_matrix_set_color(FN_LED_INDEX, COLOR_WHITE);
    else                        rgb_matrix_set_color(FN_LED_INDEX, COLOR_BLACK);

    if (IS_LAYER_ON(XYZZY_NUM)) rgb_matrix_set_color(TGNUM_LED_INDEX, COLOR_WHITE);
    else if (IS_LAYER_ON(XYZZY_FN)) rgb_matrix_set_color(TGNUM_LED_INDEX, COLOR_GRAY);
    else                        rgb_matrix_set_color(TGNUM_LED_INDEX, COLOR_BLACK);

    for (int i = 0; i < N_MACROS; i++) {
        int led_index = MKR_LED_INDEX_START + (i + MKR_LED_OFFSET) % N_MACROS;
        if (macros[i].recording) rgb_matrix_set_color(led_index, COLOR_RED);
        else if (macros[i].size) rgb_matrix_set_color(led_index, COLOR_WHITE);
        else                     rgb_matrix_set_color(led_index, COLOR_BLACK);
    }

    return false;
}
#undef A
#undef B
