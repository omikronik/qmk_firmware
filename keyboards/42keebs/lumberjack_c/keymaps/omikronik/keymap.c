/* Copyright 2020 Paul James
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

enum layers {
  _QWERTY = 0,
  _FUNCTION,
  _SYMBOL,
  _GAME,
};

#define FN MO(_FUNCTION)
#define SYM MO(_SYMBOL)

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

/* Qwerty
 */
[_QWERTY] = LAYOUT_ortho_5x12(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
    XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI, FN,      KC_SPC,  SFT_BSPC,SYM,     KC_ENT, KC_RGUI,  XXXXXXX, XXXXXXX
),
/* Function
 */
[_FUNCTION] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, KC_ESC,  M_CTRL,  DSK_L,   DSK_R,   _______, _______, KC_HOME, KC_END,  KC_F11,  KC_F8,   KC_F12,
    _______, M_LALT,  M_LGUI,  M_LSFT,  M_CTRL,  M_RALT,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_F5,
    _______, UNDO,    CUT,     COPY,    KC_TAB,  PSTE,    DEL_W,   KC_BSPC, SSHOT,   _______, _______, GAME,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Symbol
 */
[_SYMBOL] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_GRV,  KC_PLUS, KC_MINUS, KC_EQL, KC_TILD, KC_DQUO, _______,
    _______, KC_HASH, KC_PERC, KC_LCBR, KC_RCBR, KC_QUOT, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN, _______,
    _______, KC_EXLM, KC_AT,   KC_LPRN, KC_RPRN, KC_DQT,  KC_ASTR, KC_AMPR, KC_UNDS, KC_BSLS, KC_PIPE, _______,
    _______, _______, _______, KC_LABK, KC_RABK, _______, _______, _______, _______, _______, _______, _______
),


[_GAME] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_Q,    KC_W,    KC_UP,   KC_E,    KC_R,    _______,
    _______, _______, _______, _______, _______, _______, KC_ESC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_LSFT, _______,
    _______, _______, _______, _______, _______, _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_LCTL, _______,
    _______, _______, _______, _______, _______, _______, KC_Z,    KC_X,    KC_C,    _______, _______, _______
),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    if (IS_QK_ONE_SHOT_MOD(keycode)) {
        return 0;
    }
    return 200;
}
