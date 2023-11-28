#include QMK_KEYBOARD_H

enum layer_number {
  _BASE = 0,
  _FKEYS,
  _NUM,
  _ARROW,
  _UMLAUT,
};

//uses configs made in QMK configurator

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_BASE] =  LAYOUT(
      KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                                 KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
      KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G,                                 KC_J, KC_L, KC_U, KC_Y, KC_RBRC, KC_BSLS,
      KC_LSFT, KC_A, KC_R, KC_S, KC_T, KC_D,                                KC_H, KC_N, KC_E, KC_I, KC_O, KC_RSFT,
      MO(_UMLAUT), KC_Z, KC_X, KC_C, KC_V, KC_B, MO(_NUM),      MO(_FKEYS), KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, LT(_UMLAUT, KC_RCTL),
      KC_LGUI,      KC_LALT,      KC_LCTL,      KC_SPC,      KC_SPC,      KC_BSPC,      KC_ENT,      MO(_ARROW)
),
[_FKEYS] = LAYOUT(
      KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                     KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11,
      KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIU, KC_F12,
      KC_TRNS, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_TRNS, KC_NO, KC_NO, KC_INS, KC_HOME, KC_BRID, KC_END,
      KC_TRNS,      KC_RALT,      KC_RCTL,      KC_TRNS,      KC_TRNS,      KC_DEL,      KC_TRNS,      KC_TRNS
  ),
[_NUM] = LAYOUT(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NUM, KC_P7, KC_P8, KC_P9, KC_PAST, KC_PSLS,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_P4, KC_P5, KC_P6, KC_PMNS, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,      KC_TRNS, KC_NO, KC_P0, KC_PDOT, KC_PCMM, KC_PPLS, KC_NO,
      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_TRNS,      KC_DEL,      KC_TRNS,      KC_TRNS
  ),
[_ARROW] = LAYOUT(
      LCG_SWP, LCG_NRM, KC_NO, KC_NO, KC_NO, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_NO,       KC_NO, KC_UP, KC_NO, KC_NO,                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
      KC_NO, KC_QUOT, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,           KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT,
                          KC_NO, KC_NO, KC_NO, KC_NO,              KC_NO, KC_NO, KC_NO, KC_TRNS
  ),

[_UMLAUT] = LAYOUT(
      LCG_SWP, LCG_NRM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_LBRC, KC_TRNS, KC_VOLU, KC_TRNS,
      KC_TRNS, KC_QUOT, KC_TRNS, KC_MINS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_EQL, RALT(KC_NUBS), KC_SCLN, KC_TRNS,
      KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,  KC_NO, KC_TRNS, KC_TRNS, KC_NUBS, LSFT(KC_NUBS), KC_VOLD, KC_NO,
      KC_RGUI,      KC_RALT,      KC_RCTL,      KC_NO,      KC_NO,      KC_DEL,      KC_NO,      KC_NO
  )
};
