// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    MAIL,
    EXTRA,
    CHORD,
    SYS,
    ALPHA,
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
        TO(MAIL),TO(EXTRA),TO(CHORD),TO(SYS),
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_EQL,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_P0,   KC_PDOT, KC_MS_BTN1
    ),
     /* ┌────┬────┬────┬────┐
     *  │(bk)│XTRA│CHRD│SYS │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │ N  │ [  │ ]  │ M  │
     *  └────┴────┴────┴────┘
     */
    [MAIL] = LAYOUT(
        TO(BASE),TO(EXTRA),TO(CHORD),TO(SYS),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        KC_N,     KC_LBRC, KC_RBRC, KC_M
    ),
    /*  ┌────┬────┬────┬────┐
     *  │MAIL│(bk)│CHRD│SYS │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  └────┴────┴────┴────┘
     */
    [EXTRA] = LAYOUT(
        TO(MAIL),TO(BASE),TO(CHORD),TO(SYS),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______
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
     *  │    │    │    │    │
     *  ├────┼────┼────┼────┤
     *  │    │    │    │    │
     *  └────┴────┴────┴────┘
     */
    [CHORD] = LAYOUT(
        TO(MAIL),TO(EXTRA),TO(BASE),TO(SYS),
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______,
        _______,  _______, _______, _______
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
        TO(MAIL),TO(EXTRA),TO(CHORD),TO(BASE),
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

void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv_noeeprom(HSV_OFF);
    layer_clear();
    default_layer_set((layer_state_t)1 << BASE);
}

bool rgb_matrix_indicators_user(void) {
    uint8_t brightness = 4;  // TODO: use rgb_matrix_get_val() ?

    if (host_keyboard_led_state().num_lock) {
        rgb_matrix_set_color( 4, 0, brightness, brightness );
    } else {
        rgb_matrix_set_color( 4, 0, 0, 0 );
    }
    if (IS_LAYER_ON(MAIL)) {
        rgb_matrix_set_color( 5, brightness, brightness, brightness );
    } else {
        rgb_matrix_set_color( 5, 0, 0, 0 );
    }
    if (IS_LAYER_ON(EXTRA)) {
        rgb_matrix_set_color( 2, brightness, brightness, brightness );
    } else {
        rgb_matrix_set_color( 2, 0, 0, 0 );
    }
    if (IS_LAYER_ON(CHORD)) {
        rgb_matrix_set_color(22, brightness, brightness, brightness );
    } else {
        rgb_matrix_set_color(22, 0, 0, 0 );
    }
    if (IS_LAYER_ON(SYS)) {
        rgb_matrix_set_color(17, brightness, brightness, brightness );
        rgb_matrix_set_color(12, brightness, 0, 0 );
    } else {
        rgb_matrix_set_color(17, 0, 0, 0 );
        rgb_matrix_set_color(12, 0, 0, 0 );
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgb_matrix_indicators_user();
    return state;
}
