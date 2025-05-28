// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    MAIL,
    STREAM,
    CHORD,
    SYS,
    ALPHA,
};

enum eck_keycodes {
  EK_CR0 = FW_SAFE_RANGE,  // Chord keys
  EK_CR1,
  EK_CR2,
  EK_CR3,
  EK_CR4,
  EK_CR5,
  EK_CR6,
  EK_CR7,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*  ┌────┬────┬────┬────┐
     *  │MAIL│XTRA│CHRD│SYS │
     *  ├────┼────┼────┼────┤
     *  │ Num│ /  │ *  │ -  │
     *  ├────┼────┼────┼────┤
     *  │ 7  │ 8  │ 9  │ +  │
     *  ├────┼────┼────┼────┤
     *  │ 4  │ 5  │ 6  │ += │
     *  ├────┼────┼────┼────┤
     *  │ 1  │ 2  │ 3  │Entr│
     *  ├────┼────┼────┼────┤
     *  │ 0  │ 0  │ .  │MB1 │
     *  └────┴────┴────┴────┘
     */
    [BASE] = LAYOUT(
        TO(MAIL),TO(STREAM),TO(CHORD),TO(SYS),
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_EQL,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_P0,   KC_PDOT, KC_MS_BTN1
    ),
     /* ┌────┬────┬────┬────┐
     *  │(bk)│XTRA│CHRD│SYS │
     *  ├────┼────┼────┼────┤
     *  │Esc │    │    │CSK │  CSK=Ctrl+Shift+K = Quick Filter
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤ R = mark thread read
     *  │ P  │ B  │ F  │ R  │ B/F = next/previous in list
     *  ├────┼────┼────┼────┤ P/N = prev/next unread
     *  │ N  │ [  │ ]  │ M  │ [/] = next/previous seen
     *  └────┴────┴────┴────┘ M = mark read
     */
    [MAIL] = LAYOUT(
        TO(BASE),TO(STREAM),TO(CHORD),TO(SYS),
        KC_ESC,   _______, _______, LCTL(LSFT(KC_K)),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        KC_P,     KC_B,    KC_F,    KC_R,
        KC_N,     KC_LBRC, KC_RBRC, KC_M
    ),
    /*  ┌────┬────┬────┬────┐
     *  │MAIL│(bk)│CHRD│SYS │
     *  ├────┼────┼────┼────┤ R!: Alt+Gui+Crtl+Shift+R (Record)
     *  │ R! │ S! │    │    │ S!: Alt+Gui+Crtl+Shift+S (Stream)
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤ T!: Alt+Gui+Crtl+Shift+S (Transition)
     *  │ T! │    │    │    │
     *  └────┴────┴────┴────┘
     */
    [STREAM] = LAYOUT(
        TO(MAIL),TO(BASE),TO(CHORD),TO(SYS),
        LALT(LGUI(LCTL(LSFT(KC_R)))),LALT(LGUI(LCTL(LSFT(KC_S)))), _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        LALT(LGUI(LCTL(LSFT(KC_T)))), _______,  _______, _______
    ),
    /*  ┌────┬────┬────┬────┐
     *  │MAIL│XTRA│(bk)│SYS │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │ 4  │ 5  │ 6  │ Sp │
     *  ├────┼────┼────┼────┤
     *  │ 1  │ 2  │ 3  │ Sh │
     *  └────┴────┴────┴────┘
     */
    [CHORD] = LAYOUT(
        TO(MAIL),TO(STREAM),TO(BASE),TO(SYS),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        EK_CR4,   EK_CR5,  EK_CR6,  EK_CR7,
        EK_CR0,   EK_CR1,  EK_CR2,  EK_CR3
    ),
    /*  ┌────┬────┬────┬────┐
     *  │MAIL│XTRA│CHRD│(bk)│
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │BOOT│
     *  └────┴────┴────┴────┘
     */
    [SYS] = LAYOUT(
        TO(MAIL),TO(STREAM),TO(CHORD),TO(BASE),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, QK_BOOT
    ),
    /* Alphabet
     *         ┌────┬────┬────┬────┐
     *  4 keys │ A  │ B  │ C  │ D  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ E  │ F  │ G  │ H  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ I  │ J  │ K  │ L  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ M  │ N  │ O  │ P  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ Q  │ R  │ S  │ T  │
     *         ├────┼────┼────┼────┤
     *  4 keys │ U  │ V  │ W  │ X  │
     *         └────┴────┴────┴────┘
     * 24 total
     */
    [ALPHA] = LAYOUT(
        KC_A,    KC_B,    KC_C,    KC_D,
        KC_E,    KC_F,    KC_G,    KC_H,
        KC_I,    KC_J,    KC_K,    KC_L,
        KC_M,    KC_N,    KC_O,    KC_P,
        KC_Q,    KC_R,    KC_S,    KC_T,
        KC_U,    KC_V,    KC_W,    KC_X
    ),
};

static uint8_t chord_state;
static uint8_t chord_held;

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
    layer_clear();
    default_layer_set((layer_state_t)1 << BASE);
    chord_state = 0;
}

static const int8_t led_indices[24] = {
     5,  2, 22, 17,
     4,  0, 20, 18,
     7,  1, 21, 16,
     6,  3, 23, 19,
     9, 11, 15, 13,
     8, 10, 14, 12
};

typedef struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
} rgb_color;

static rgb_color stream_rgb_colors[] = {
    {127, 127, 127},
    {127, 127, 127},
};

static void set_led_colors(rgb_color *colors) {
    for (int i = 0; i < 24; i++) {
        rgb_matrix_set_color(
            led_indices[i],
            colors[i].r,
            colors[i].g,
            colors[i].b);
    }
}

static rgb_color scale(rgb_color c, int scale) {
    return (rgb_color){
        c.r * scale / 256,
        c.g * scale / 256,
        c.b * scale / 256,
    };
}

bool rgb_matrix_indicators_user(void) {
    uint8_t brightness = 4;  // TODO: use rgb_matrix_get_val() ?

    if (IS_LAYER_ON(MAIL)) {
        set_led_colors((rgb_color[24]) {
            {brightness, brightness, brightness},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {brightness/4, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, brightness/4, brightness/4},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {brightness/4, brightness/4, brightness/4},
            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {brightness/4, brightness/4, brightness/4},

            {brightness/4, brightness/4, brightness/4},
            {0, brightness/4, brightness/4},
            {0, brightness/4, brightness/4},
            {brightness/4, brightness/4, brightness/4},
        });
        return true;
    } else if (IS_LAYER_ON(STREAM)) {
        set_led_colors((rgb_color[24]) {
            {0, 0, 0},
            {brightness, brightness, brightness},
            {0, 0, 0},
            {0, 0, 0},

            scale(stream_rgb_colors[0], brightness), // Rec
            scale(stream_rgb_colors[1], brightness), // Stream
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {brightness, brightness, brightness}, // Transition
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
        });
        return true;
    } else if (IS_LAYER_ON(CHORD)) {
        set_led_colors((rgb_color[24]) {
            {0, 0, 0},
            {0, 0, 0},
            {brightness, brightness, brightness},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            #define CHORDLED(n) (                                              \
                    (chord_state & (1<<n)) ? (                                 \
                        (chord_held & (1<<n))                                  \
                            ? (rgb_color){brightness, brightness, brightness}  \
                            : (rgb_color){brightness/2, brightness, brightness}\
                    ) : (                                                      \
                        (chord_held & (1<<n))                                  \
                            ? (rgb_color){brightness/4, 0, 0}                  \
                            : (rgb_color){0, 0, 0}                             \
                    )                                                          \
                )
            CHORDLED(4),
            CHORDLED(5),
            CHORDLED(6),
            CHORDLED(7),

            CHORDLED(0),
            CHORDLED(1),
            CHORDLED(2),
            CHORDLED(3),
        });
        return true;
    } else if (IS_LAYER_ON(SYS)) {
        set_led_colors((rgb_color[24]) {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {brightness, brightness, brightness},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {brightness, 0, 0},
        });
        return true;
    } else {
        set_led_colors((rgb_color[24]) {
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            (host_keyboard_led_state().num_lock ? (rgb_color){0, brightness, brightness} : (rgb_color){0, 0, 0}),
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},

            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, 0},

            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, 0},

            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, brightness/4},
            {0, 0, 0},

            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
            {0, 0, 0},
        });
        return true;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgb_matrix_indicators_user();
    return state;
}

static const uint16_t braille_codes[64] = {
//     ⠀     ⠁        ⠂        ⠃        ⠄        ⠅        ⠆        ⠇
    XXXXXXX, KC_A,    XXXXXXX, KC_B,    XXXXXXX, KC_K,    XXXXXXX, KC_L,
//  ⠈        ⠉        ⠊        ⠋        ⠌        ⠍        ⠎        ⠏
    XXXXXXX, KC_C,    KC_I,    KC_F,    XXXXXXX, KC_M,    KC_S,    KC_P,
//  ⠐        ⠑        ⠒        ⠓        ⠔        ⠕        ⠖        ⠗
    XXXXXXX, KC_E,    XXXXXXX, KC_H,    XXXXXXX, KC_O,    XXXXXXX, KC_R,
//  ⠘        ⠙        ⠚        ⠛        ⠜        ⠝        ⠞        ⠟
    XXXXXXX, KC_D,    KC_J,    KC_G,    XXXXXXX, KC_N,    KC_T,    KC_Q,
//  ⠠        ⠡        ⠢        ⠣        ⠤        ⠥        ⠦        ⠧
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_U,    XXXXXXX, KC_V,
//  ⠨        ⠩        ⠪        ⠫        ⠬        ⠭        ⠮        ⠯
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_X,    XXXXXXX, XXXXXXX,
//  ⠰        ⠱        ⠲        ⠳        ⠴        ⠵        ⠶        ⠷
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_Z,    XXXXXXX, XXXXXXX,
//  ⠸        ⠹        ⠺        ⠻        ⠼        ⠽        ⠾        ⠿
    XXXXXXX, XXXXXXX, KC_W,    XXXXXXX, XXXXXXX, KC_Y,    XXXXXXX, XXXXXXX
};

void send_chord(int state) {
    if (state & 0b10001000) {
        return;
    }
    int braille_state = (state & 0b00000111) | ((state & 0b01110000) >> 1);
    uint16_t keycode = braille_codes[braille_state];
    if (keycode) {
        tap_code16(keycode);
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (keycode >= EK_CR0 && keycode <= EK_CR7) {
        int pos = keycode - EK_CR0;
        int mask = 1 << pos;
        if (record->event.pressed) {
            chord_state ^= mask;
            chord_held |= mask;
        } else {
            chord_held &=~ mask;
            if (!chord_held) {
                send_chord(chord_state);
                chord_state = 0;
            }
        }
        rgb_matrix_indicators_user();
        return false;
    }
    return true;
}

void raw_hid_receive(uint8_t *data, uint8_t length) {
    //raw_hid_send(data, length);
    for (int i = 0; i+3 < length; i += 4) {
        int led_idx = data[i];
        if (led_idx >= sizeof(stream_rgb_colors)/sizeof(stream_rgb_colors[0])) break;
        stream_rgb_colors[led_idx].r = data[i + 1];
        stream_rgb_colors[led_idx].g = data[i + 2];
        stream_rgb_colors[led_idx].b = data[i + 3];
    }
    rgb_matrix_indicators_user();
}
