#include QMK_KEYBOARD_H

enum layers {
  _BASE = 0,
  _SYM,
  _FNC,
  _SETTINGS,
  _GAME,
};

#define FNC MO(_FNC)
#define SYM MO(_SYM)
#define SETT MO(_SETTINGS)

#define SFT_BSPC MT(MOD_LSFT, KC_BSPC)

#define GAME TG(_GAME)

#define M_LALT OSM(MOD_LALT)
#define M_RALT OSM(MOD_RALT)
#define M_LGUI OSM(MOD_LGUI)
#define M_LSFT OSM(MOD_LSFT)
#define M_CTRL OSM(MOD_LCTL)

#define DEL_W LCTL(KC_BSPC)
#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)
#define CUT LCTL(KC_X)
#define UNDO LCTL(KC_Z)
#define SSHOT LGUI(LSFT(KC_S))
#define DSK_L LCTL(LGUI(KC_LEFT))
#define DSK_R LCTL(LGUI(KC_RGHT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                               KC_LALT, KC_LGUI, FNC,     KC_SPC,  KC_BSPC, SYM,     KC_ENT,  KC_RGUI
    ),

	[_SYM] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, KC_EXLM, KC_AT,   KC_LPRN, KC_RPRN, KC_QUES,                   KC_PLUS, KC_MINUS, KC_EQL, KC_QUOT, KC_DQUO, _______,
    _______, KC_HASH, KC_PERC, KC_LCBR, KC_RCBR, KC_GRV,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN, _______,
    _______, KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_TILD, _______, _______, KC_ASTR, KC_AMPR, KC_UNDS, KC_BSLS, KC_PIPE, _______,
                               _______, _______, SETT,    _______, _______, _______, _______, _______
    ),

	[_FNC] = LAYOUT(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, KC_ESC,  _______, DSK_L,   DSK_R,   _______,                   _______, KC_HOME, KC_END,  KC_F11,  KC_F5,   KC_F12,
    _______, M_LALT,  M_LGUI,  M_LSFT,  M_CTRL,  M_RALT,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, UNDO,    CUT,     COPY,    KC_TAB,  PSTE,    _______, _______, DEL_W,   KC_BSPC, SSHOT,   _______, _______, GAME,
                               _______, _______, _______, _______, _______, _______, _______, _______

    ),
	[_SETTINGS] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_GAME] = LAYOUT(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   KC_Q,    KC_W,    KC_UP,   KC_E,    KC_R,    _______,
    _______, _______, _______, _______, _______, _______,                   KC_ESC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_LSFT, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_LCTL, _______,
                               _______, _______, _______, _______, _______, KC_Z,    KC_X,    KC_C
),
};
