#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_Q,           KC_W,           KC_B,           KC_J,           KC_BSLASH,      KC_AMPR,                                        KC_TILD,        ST_MACRO_0,     KC_DQUO,        KC_QUOTE,       KC_GRAVE,       ST_MACRO_1,     KC_DELETE,      
    KC_INSERT,      KC_K,           KC_P,           KC_D,           KC_H,           KC_LBRACKET,    KC_RBRACKET,                                    KC_DLR,         KC_COMMA,       KC_Y,           KC_U,           KC_O,           KC_SLASH,       KC_PGUP,        
    KC_CAPSLOCK,    KC_S,           KC_E,           KC_L,           KC_F,           KC_LPRN,        KC_RPRN,                                                                        KC_EXLM,        KC_DOT,         KC_A,           KC_I,           KC_T,           KC_R,           KC_PGDOWN,      
    MO(4),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_G,                                           KC_UNDS,        KC_N,           KC_M,           KC_EQUAL,       KC_MINUS,       MO(4),          
    KC_LCTRL,       KC_LGUI,        KC_LALT,        MO(2),          LM(1,MOD_LSFT), KC_LCTRL,                                                                                                       KC_RCTRL,       LM(1,MOD_RSFT), MO(2),          KC_RALT,        LT(3,KC_PSCREEN),KC_RCTRL,       
    KC_SPACE,       KC_BSPACE,      LT(3,KC_PSCREEN),                KC_MS_BTN3,     KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        ST_MACRO_2,                                     KC_CIRC,        ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     KC_HASH,        ST_MACRO_6,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_AT,          ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PERC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,                                                                        KC_QUES,        KC_COLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_ASTR,        KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_INSERT,      KC_NO,          KC_7,           KC_8,           KC_9,           KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_MS_WH_UP,    KC_AUDIO_VOL_UP,                                KC_NUMLOCK,     KC_KP_COMMA,    KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_WH_DOWN,  KC_AUDIO_VOL_DOWN,                                                                KC_SCROLLLOCK,  KC_KP_DOT,      KC_1,           KC_2,           KC_3,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_AUDIO_MUTE,                                  KC_RCTRL,       KC_0,           KC_KP_ENTER,    KC_KP_EQUAL,    KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT,      KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_ENTER
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_19,    KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,    KC_NO,          KC_NO,                                          KC_NO,          ST_MACRO_28,    KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT,      KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         LGUI(KC_L),     
    KC_TRANSPARENT, KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F17,         KC_F18,                                         KC_F19,         KC_F20,         KC_F21,         KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,                                          WEBUSB_PAIR,    TO(5),          KC_NO,          KC_NO,          ST_MACRO_29,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LSHIFT,      KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_RSHIFT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                                                                                          TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,183,238}, {0,183,238}, {0,183,238}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {14,255,255}, {35,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {35,255,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {35,255,255}, {154,255,255}, {0,0,0}, {249,228,255}, {35,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {35,255,255}, {0,0,0}, {188,255,255}, {0,0,0}, {35,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {35,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {188,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_E)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_3)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_D)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_9)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_0) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_KP_4)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_B)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_U)) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_0)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_S) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_L) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_1) SS_DELAY(100) SS_TAP(X_4) SS_DELAY(100) SS_TAP(X_2)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Z) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_X) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_A)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Y) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_U) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_1)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N) SS_DELAY(100) SS_RCTL(SS_RSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_0) SS_DELAY(100) SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_T) SS_TAP(X_E) SS_TAP(X_S) SS_TAP(X_T) ));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


