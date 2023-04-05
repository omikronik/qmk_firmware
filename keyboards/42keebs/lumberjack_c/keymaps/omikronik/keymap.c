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
  _SYMBOL
};

#define FN MO(_FUNCTION)
#define SYM MO(_SYMBOL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 */
[_QWERTY] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LCTL, FN,      KC_LALT, KC_LGUI, FN,      KC_SPC,  KC_BSPC,  SYM,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),
/* Function
 */
[_FUNCTION] = LAYOUT_ortho_5x12(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_BSPC,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_F11,  KC_F12,  KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

/* Symbol
 */
[_SYMBOL] = LAYOUT_ortho_5x12(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_EXLM, KC_AT,   KC_LPRN, KC_RPRN, KC_TILD, KC_PLUS, KC_MINUS, KC_EQL, KC_QUOT, KC_DQUO, _______,
    _______, KC_HASH, KC_PERC, KC_LCBR, KC_RCBR, KC_GRV,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN, _______,
    _______, KC_CIRC, KC_DLR,  KC_LBRC, KC_RBRC, KC_QUES, KC_ASTR, KC_AMPR, KC_UNDS, KC_BSLS, KC_PIPE, _______,
    _______, _______, _______, KC_LABK, KC_RABK, _______, _______, _______, _______, _______, _______, _______
)

};
