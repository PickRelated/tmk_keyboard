#include "keymap_common.h"

#define CUSTOM_KEYMAP(\
    K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, \
    K13, K14, K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, \
    K25, K26, K27, K28, K29, K30, K31, K32, K33, K34, K35, K36, \
    K37, K38, K39, K40, K41, K42, K43, K44, K45, K46, K47, K48, \
    K49, K50 \
) {\
  { K01,  K02,  K03,  K04,  K05,  K06,  K07,  K08,  K09,  K10,  K11,  K12,  KC_NO,  KC_NO },  \
  { K13,  K14,  K15,  K16,  K17,  K18,  K19,  K20,  K21,  K22,  K23,  K24,  KC_NO,  KC_NO },  \
  { K25,  K26,  K27,  K28,  K29,  K30,  K31,  K32,  K33,  K34,  K35,  K36,  K50,    KC_NO },  \
  { K37,  K38,  K39,  K40,  K41,  K42,  K43,  K44,  K45,  K46,  K47,  K48,  K49,    KC_NO} \
}

#define LAYER_MAIN CUSTOM_KEYMAP(\
  KC_TAB,   KC_Q,     KC_W,    KC_E,     KC_R,    KC_T,     KC_Y,    KC_U,    KC_I,     KC_O,    KC_P,     KC_BSPC,                   \
  KC_ESC,   KC_A,     KC_S,    KC_D,     KC_F,    KC_G,     KC_H,    KC_J,    KC_K,     KC_L,    KC_SCLN,  KC_ENT,                    \
  KC_NUHS,  KC_Z,     KC_X,    KC_C,     KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,  KC_DELETE,                 \
  KC_FN4,   KC_PSCR,  KC_FN3,  KC_LGUI,  KC_FN2,  KC_LSFT,  KC_SPC,  KC_FN1,  KC_APP,   KC_NO,   KC_EQL,   ACTION_MODS_KEY(MOD_LALT,  KC_LSFT),  \
  KC_LCTL,  KC_LALT)

#define LAYER_DIGITS CUSTOM_KEYMAP(\
  KC_NO,    KC_NO,    KC_NO,    KC_QUOT,          SHIFT(KC_LBRC),  SHIFT(KC_RBRC),  KC_EQL,   KC_7,     KC_8,  KC_9,    KC_PSLS,  KC_TRNS,  \
  KC_NO,    KC_NO,    KC_NO,    SHIFT(KC_4),      SHIFT(KC_9),     SHIFT(KC_0),     KC_PMNS,  KC_4,     KC_5,  KC_6,    KC_PPLS,  KC_TRNS,  \
  KC_NO,    KC_NO,    KC_NO,    SHIFT(KC_QUOT),   KC_LBRC,         KC_RBRC,         KC_CALC,  KC_1,     KC_2,  KC_3,    KC_PAST,  KC_TRNS,  \
  KC_NO,    KC_NO,    KC_NO,    SHIFT(KC_MINUS),  KC_MINUS,        KC_LSFT,         KC_TRNS,  KC_TRNS,  KC_0,  KC_DOT,  KC_PEQL,  KC_TRNS,  \
  KC_TRNS,  KC_TRNS)

#define LAYER_NAV CUSTOM_KEYMAP(\
  KC_SLEP,  KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_HOME,  KC_UP,    KC_END,   KC_MNXT,  KC_CALC,  \
  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_MPLY,  KC_VOLU,  \
  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_PGUP,  KC_NO,    KC_PGDN,  KC_MPRV,  KC_VOLD,  \
  KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_TRNS,  KC_TRNS,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_MUTE,  \
  KC_TRNS,  KC_TRNS)

#define LAYER_FUNC CUSTOM_KEYMAP(\
  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO,  \
  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_NO,  \
  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,    KC_NO,  KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_NO,  \
  KC_FN0,   KC_NO,    KC_TRNS,  KC_NO,  KC_NO,  KC_TRNS,  KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,  \
  KC_TRNS,  KC_TRNS)

#define LAYER_DVORAK CUSTOM_KEYMAP(\
  KC_TRNS,  KC_SLSH,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_TRNS,  \
  KC_TRNS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_TRNS,  \
  KC_TRNS,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_TRNS,  \
  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  \
  KC_TRNS,  KC_TRNS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: mostly letters */
  LAYER_MAIN,
  /* 1: punctuation and numbers */
  LAYER_DIGITS,
  /* 2: arrows and navigation */
  LAYER_NAV,
  /* 3: function keys */
  LAYER_FUNC,
  /* 4: dvorak */
  LAYER_DVORAK
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_FUNCTION(BOOTLOADER), // reset to bootloader
  [1] = ACTION_LAYER_MOMENTARY(1),   // to LAYER_DIGITS
  [2] = ACTION_LAYER_MOMENTARY(2),   // to LAYER_NAV
  [3] = ACTION_LAYER_MOMENTARY(3),   // to LAYER_FUNC
  [4] = ACTION_LAYER_TOGGLE(4),      // to LAYER_DVORAK
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
