#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

#define DUAL_FUNC_0 LT(15, KC_B)
#define DUAL_FUNC_1 LT(10, KC_F2)
#define DUAL_FUNC_2 LT(14, KC_X)
#define DUAL_FUNC_3 LT(12, KC_6)
#define DUAL_FUNC_4 LT(7, KC_S)
#define DUAL_FUNC_5 LT(2, KC_F20)
#define DUAL_FUNC_6 LT(11, KC_F1)
#define DUAL_FUNC_7 LT(1, KC_S)
#define DUAL_FUNC_8 LT(4, KC_P)
#define DUAL_FUNC_9 LT(5, KC_U)
#define DUAL_FUNC_10 LT(3, KC_F7)
#define DUAL_FUNC_11 LT(4, KC_9)
#define DUAL_FUNC_12 LT(6, KC_P)
#define DUAL_FUNC_13 LT(14, KC_F17)
#define DUAL_FUNC_14 LT(1, KC_F1)
#define DUAL_FUNC_15 LT(6, KC_F7)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    LGUI(LCTL(KC_Q)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(7),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    LGUI(KC_BSLS),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           RGUI(RSFT(KC_4)),                                RGUI(RCTL(KC_SPACE)),KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_LEFT_SHIFT,  MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),KC_F,           KC_G,                                                                           KC_H,           KC_J,           MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_RIGHT_SHIFT,
    LALT(LSFT(KC_MINUS)),KC_Z,           MT(MOD_RALT, KC_X),KC_C,           KC_V,           KC_B,           KC_HYPR,                                        RGUI(RSFT(KC_5)),KC_N,           KC_M,           KC_COMMA,       MT(MOD_RALT, KC_DOT),KC_SLASH,       KC_TRANSPARENT,
    DUAL_FUNC_0,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(3, KC_ESCAPE),                                                                                                LT(6, KC_QUOTE),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_1,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LT(1, KC_SPACE),LT(2, KC_TAB),  KC_TRANSPARENT, KC_TRANSPARENT, LT(5, KC_ENTER),LT(4, KC_BSPC)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),KC_PC_UNDO,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_CAPS,
    KC_TRANSPARENT, KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_INSERT,      KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       KC_BSPC
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(KC_U)),LALT(LCTL(KC_UP)),LALT(LCTL(KC_I)),KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          LSFT(KC_INSERT),LCTL(KC_INSERT),LSFT(KC_DELETE),KC_PC_UNDO,     KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    KC_TRANSPARENT, KC_NO,                                                                          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(LCTL(KC_J)),LALT(LCTL(KC_DOWN)),LALT(LCTL(KC_K)),KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_WH_RIGHT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                                                                                          KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN2,     KC_MS_BTN1
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        RGB_MODE_FORWARD,RGB_HUI,        RGB_SAI,        RGB_VAI,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                                                          KC_MEDIA_PREV_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK,KC_AUDIO_MUTE,  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_ASTR,        KC_7,           KC_8,           KC_9,           KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_EQUAL,                                                                       KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,                                                                                                         KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_0,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SCLN,        KC_PIPE,        KC_HASH,        KC_LBRC,        KC_RBRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TILD,        KC_QUOTE,       KC_AMPR,        KC_LPRN,        KC_RPRN,                                                                        KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_GRAVE,       KC_EXLM,        KC_AT,          KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,                                                                                                        KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_DLR,         KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_PSCR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_SCRL,                                                                        KC_NO,          KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_PAUSE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_RIGHT_ALT,   KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CAPS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(8),                                                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,                                                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_12,   DUAL_FUNC_13,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    DUAL_FUNC_14,   DUAL_FUNC_15,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L',
  '*', '*',
  '*', '*', '*', '*',
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 
  '*', '*',
  '*', '*', '*', '*'
);


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        default:
            return TAPPING_TERM;
    }
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,      
    SINGLE_HOLD,         
    DOUBLE_TAP,          
    DOUBLE_HOLD,         
    DOUBLE_SINGLE_TAP,   
    MORE_TAPS            
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_LEFT)));
        tap_code16(LALT(LCTL(KC_LEFT)));
        tap_code16(LALT(LCTL(KC_LEFT)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_LEFT)));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_LEFT))); register_code16(LALT(LCTL(KC_LEFT)));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_LEFT))); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_F)));
        tap_code16(LALT(LCTL(KC_F)));
        tap_code16(LALT(LCTL(KC_F)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_F)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_F))); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_R))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_ENTER))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_F))); register_code16(LALT(LCTL(KC_F)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_F))); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_R))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_ENTER))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_F))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_RIGHT)));
        tap_code16(LALT(LCTL(KC_RIGHT)));
        tap_code16(LALT(LCTL(KC_RIGHT)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_RIGHT)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_G))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_RIGHT))); register_code16(LALT(LCTL(KC_RIGHT)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_G))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_RIGHT))); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_C));
        } else {
          unregister_code16(LGUI(KC_C));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_X));
        } else {
          unregister_code16(LGUI(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(RGUI(KC_V));
        } else {
          unregister_code16(RGUI(KC_V));
        }
      } else {
        if (record->event.pressed) {
          register_code16(RGUI(KC_V));
        } else {
          unregister_code16(RGUI(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F1);
        } else {
          unregister_code16(KC_F1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F1));
        } else {
          unregister_code16(LGUI(KC_F1));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F2);
        } else {
          unregister_code16(KC_F2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F2));
        } else {
          unregister_code16(LGUI(KC_F2));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F3);
        } else {
          unregister_code16(KC_F3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F3));
        } else {
          unregister_code16(LGUI(KC_F3));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F4);
        } else {
          unregister_code16(KC_F4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F4));
        } else {
          unregister_code16(LGUI(KC_F4));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F5);
        } else {
          unregister_code16(KC_F5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F5));
        } else {
          unregister_code16(LGUI(KC_F5));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_1));
        } else {
          unregister_code16(LGUI(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_2));
        } else {
          unregister_code16(LGUI(KC_2));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_3));
        } else {
          unregister_code16(LGUI(KC_3));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_4));
        } else {
          unregister_code16(LGUI(KC_4));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_5));
        } else {
          unregister_code16(LGUI(KC_5));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_7));
        } else {
          unregister_code16(LGUI(KC_7));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_6));
        } else {
          unregister_code16(LGUI(KC_6));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_0));
        } else {
          unregister_code16(LGUI(KC_0));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_9));
        } else {
          unregister_code16(LGUI(KC_9));
        }  
      }  
      return false;
  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

