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
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
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
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
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
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_L),     
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,      
    KC_CAPSLOCK,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,                                                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    TG(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TG(2),          
    KC_LCTRL,       KC_LGUI,        KC_LALT,        MO(2),          LM(1,MOD_LSFT), KC_LCTRL,                                                                                                       KC_RCTRL,       LM(1,MOD_RSFT), MO(2),          KC_RALT,        KC_PSCREEN,     KC_RCTRL,       
    KC_SPACE,       KC_BSPACE,      KC_PSCREEN,                     KC_MS_BTN3,     KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_BRIGHTNESS_UP,
    KC_NUMLOCK,     KC_PGUP,        KC_HOME,        KC_UP,          KC_END,         KC_AUDIO_VOL_UP,KC_MS_WH_UP,                                    KC_KP_ASTERISK, KC_KP_PLUS,     KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_COMMA,       KC_BRIGHTNESS_DOWN,
    KC_SCROLLLOCK,  KC_PGDOWN,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_AUDIO_VOL_DOWN,KC_MS_WH_DOWN,                                                                  KC_KP_SLASH,    KC_KP_MINUS,    KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_0,        KC_RCTRL,       
    KC_TRANSPARENT, KC_PC_CUT,      KC_PC_PASTE,    KC_PC_COPY,     KC_PC_UNDO,     KC_AUDIO_MUTE,                                  MO(3),          KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_ENTER
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, TO(4),          ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     AU_TOG,                                         MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_PAUSE,       KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT,                                 KC_ASTR,        KC_PLUS,        KC_7,           KC_8,           KC_9,           KC_COMMA,       KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    KC_TRANSPARENT,                                                                 KC_SLASH,       KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,                                    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    TO(0),          KC_TRANSPARENT, RGB_MOD,        RGB_SLD,        TOGGLE_LAYER_COLOR,RGB_TOG,        AU_TOG,                                         RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAI,        RGB_SPI,        RGB_HUI,        RGB_VAI,        MU_ON,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAD,        RGB_SPD,        RGB_HUD,        RGB_VAD,        MU_OFF,                                                                         WEBUSB_PAIR,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, HSV_172_255_255,HSV_86_255_128, HSV_27_255_255, HSV_215_255_128,HSV_0_255_255,                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {12,225,241}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {154,86,255}, {0,0,0}, {0,0,0}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {12,225,241}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,0,0}, {154,86,255}, {0,0,0}, {0,0,0}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,204,255}, {0,204,255}, {0,0,0}, {146,224,255}, {0,0,0}, {169,120,255}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {12,225,241}, {12,225,241}, {12,225,241}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {32,255,234}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {32,255,234}, {146,224,255}, {0,0,0}, {0,0,0}, {32,255,234}, {32,255,234}, {0,0,0}, {0,0,0}, {12,225,241}, {12,225,241}, {0,0,0}, {0,0,0}, {12,225,241}, {12,225,241}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {180,255,233}, {0,0,0}, {15,166,195}, {0,0,255}, {0,0,255}, {85,203,158}, {0,0,0}, {15,166,195}, {0,0,255}, {0,0,255}, {32,255,234}, {0,0,0}, {15,166,195}, {0,0,255}, {0,0,255}, {205,255,255}, {0,0,0}, {15,166,195}, {0,0,255}, {0,0,0}, {0,204,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
    case 2:
      set_layer_color(2);
      break;
    case 4:
      set_layer_color(4);
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
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_N));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_U) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_M) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_O));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_U));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_T)) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_U));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_F)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_S));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_T));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_M));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F) SS_DELAY(100) SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_A));

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_S));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_H));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_F));

    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K));

    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_N) SS_DELAY(100) SS_TAP(X_D) SS_DELAY(100) SS_TAP(X_SPACE));

    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O) SS_DELAY(100) SS_TAP(X_R));

    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_E));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
  }
  return true;
}
