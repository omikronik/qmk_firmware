// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _SYM,
    _SYM2,
    _EXT,
    _FNC,
    _SETTINGS,
    _GAME1,
    _GAME2,
    _GAME3,
};

#define SYM MO(_SYM)
#define SYM2 MO(_SYM2)
#define EXT MO(_EXT)
#define FNC MO(_FNC)
#define SETTINGS MO(_SETTINGS)
#define GAME1 TG(_GAME1)
#define GAME2 MO(_GAME2)
#define GAME3 MO(_GAME3)

#define SFT_BSPC MT(MOD_LSFT, KC_BSPC)

#define M_LALT OSM(MOD_LALT)
#define M_RALT OSM(MOD_RALT)
#define M_LGUI OSM(MOD_LGUI)
#define M_LSFT OSM(MOD_LSFT)
#define M_CTRL OSM(MOD_LCTL)

#define LOWER LT(_LOWER, KC_TAB)
#define RAISE LT(_RAISE, KC_ESC)
#define ADJUST MO(_ADJUST)

#define DEL_W LCTL(KC_BSPC)
#define COPY LCTL(KC_C)
#define PSTE LCTL(KC_V)
#define CUT LCTL(KC_X)
#define UNDO LCTL(KC_Z)
#define SSHOT LGUI(LSFT(KC_S))
#define DSK_L LCTL(LGUI(KC_LEFT))
#define DSK_R LCTL(LGUI(KC_RGHT))
#define MUTE LCTL(LSFT(KC_M))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
              KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,
              KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                                  SYM2,     EXT,      KC_SPC,    SFT_BSPC, SYM,      FNC
 ),
   [_SYM] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_1,     KC_2,     KC_3 ,    KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,
              KC_HASH,  KC_PERC,  KC_LCBR,  KC_RCBR,  KC_QUOT,   KC_PLUS,  KC_MINUS, KC_EQL,   KC_QUES,  KC_COLN,
              KC_EXLM,  KC_AT,    KC_LPRN,  KC_RPRN,  KC_DQT,    KC_ASTR,  KC_AMPR,  KC_UNDS,  KC_BSLS,  KC_PIPE,
                                  _______,  _______,  _______,   _______,   _______,  _______
 ),
   [_SYM2] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
              KC_CIRC,  KC_DLR,   KC_LBRC,  KC_RBRC,   KC_GRV,   _______,  _______,  _______,  _______,   _______,
              _______,  _______,  KC_LT,    KC_GT,     KC_TILD,  _______,  _______,  _______,  _______,   _______,
                                  _______,  _______,   _______,  _______,  _______,  _______
 ),
   [_EXT] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_ESC,   _______,  DSK_L,    DSK_R,     KC_LGUI,  KC_PGUP,  KC_PGDN,  KC_END,   KC_HOME,   KC_CAPS,
              M_LALT,   M_LGUI,   M_LSFT,   M_CTRL,    M_RALT,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,   KC_DEL,
              UNDO,     CUT,      COPY,     KC_TAB,    PSTE,     DEL_W,    KC_BSPC,  SSHOT,    _______,   SETTINGS,
                                  _______,  _______,   _______,  KC_ENT,  _______,  _______
 ),
   [_FNC] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_F1,    KC_F2,    KC_F3,    KC_F4,     KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,
              M_LALT,   M_LGUI,   M_LSFT,   M_CTRL,    M_RALT,   _______,  _______,  _______,  KC_F5,    KC_F11,
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  KC_F12,
                                  _______,  _______,   _______,  _______,  _______,  _______
 ),
   [_SETTINGS] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
                                  _______,  _______,   _______,  _______,  _______,  _______
 ),
   [_GAME1] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_TAB,   KC_Q,     KC_W,     KC_E,      KC_R,     _______,  _______,  _______,  _______,   _______,
              KC_LSFT,  KC_A,     KC_S,     KC_D,      KC_F,     _______,  _______,  _______,  _______,   _______,
              KC_LCTL,  KC_Z,     KC_X,     KC_C,      KC_V,     _______,  _______,  _______,  _______,   _______,
                                  KC_LALT,  GAME2,     KC_SPC,   _______,  _______,  _______
 ),
   [_GAME2] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_1,     KC_2,     KC_3 ,    KC_4,      KC_5,     _______,  _______,  _______,  _______,   _______,
              KC_6,     KC_7 ,    KC_8 ,    KC_9 ,     KC_0,     _______,  _______,  _______,  _______,   _______,
              _______,  _______,  KC_T,     KC_G,      KC_B,     _______,  _______,  _______,  _______,   _______,
                                  _______,  _______,   _______,  _______,  _______,  _______
 ),
   [_GAME3] = LAYOUT_split_3x5_3(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
                                  _______,  _______,   _______,  _______,  _______,  _______
 )
};
