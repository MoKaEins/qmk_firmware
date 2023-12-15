#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _NUM,
  _ARROW,
  _GAMING,
  _UMLAUT
};


// Tap Dance declarations
enum {
    // TD_E_ACC,
    // TD_A_AE,
    // TD_O_OE,
    // TD_U_UE,
    // TD_S_SS,
    TD_RSFT_ENT
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // [TD_E_ACC] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_EQL),
    // [TD_O_OE] = ACTION_TAP_DANCE_DOUBLE(KC_O, KC_SCLN),
    // [TD_U_UE] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_LBRC),
    // [TD_S_SS] = ACTION_TAP_DANCE_DOUBLE(KC_S, KC_MINS),
    // [TD_A_AE] = ACTION_TAP_DANCE_DOUBLE(KC_A, KC_QUOT),
    [TD_RSFT_ENT] = ACTION_TAP_DANCE_DOUBLE(KC_RSFT, KC_ENT)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] =  LAYOUT(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                               KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
      KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,                               KC_J, KC_L, KC_U, KC_Y, KC_RBRC, KC_BSLS,
      KC_LSFT, KC_A, KC_R, KC_S, KC_T, KC_D,                              KC_H, KC_N, KC_E, KC_I, KC_O, TD(TD_RSFT_ENT),
      KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, MO(_NUM),          MO(_NUM), KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(_ARROW),
      TO(_ARROW), KC_LALT, KC_LCTL, LT(_UMLAUT, KC_SPC),                  KC_SPC, KC_BSPC, KC_LEFT, KC_RGHT
),

[_NUM] = LAYOUT(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                 KC_NUM, KC_P7, KC_P8, KC_P9, KC_PSLS, KC_PAST,
      KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                               KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO,
      KC_CAPS, KC_F11, KC_F12, SGUI(KC_S), KC_PSCR, KC_TRNS,                        KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_HOME,
      KC_RGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_NO, KC_P0, KC_PDOT, KC_PCMM, KC_PMNS, KC_END,
      KC_TRNS, KC_RALT, KC_RCTL, KC_TRNS,                                     KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS
  ),

[_ARROW] = LAYOUT(
      LCG_SWP, LCG_NRM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, RALT(KC_Q), KC_TRNS, KC_UP, KC_TRNS, KC_TRNS,                KC_TRNS, RALT(KC_L), KC_UP, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,                   KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, TO(_GAMING),
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,           KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS,
                          TO(_BASE), KC_RALT, KC_RCTL, KC_TRNS,              KC_NO, KC_DEL, KC_NO, TO(_BASE)
  ),

[_GAMING] = LAYOUT(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                    KC_Z, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
      KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                    KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS,
      KC_LCTL, KC_Y, KC_X, KC_C, KC_V, KC_B, KC_NO,      KC_N, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_BASE),
      KC_RCTL, KC_LGUI, KC_LALT, KC_SPC,                  KC_TRNS, KC_DEL, KC_NO, KC_NO
  ),

[_UMLAUT] = LAYOUT(
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_LBRC, KC_TRNS, KC_VOLU, KC_BRIU,
      KC_TRNS, KC_QUOT, KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_EQL, RALT(KC_NUBS), KC_SCLN, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_NUBS, LSFT(KC_NUBS), KC_VOLD, KC_BRID,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                          KC_ENT, KC_DEL, KC_TRNS, KC_TRNS
  )
};
