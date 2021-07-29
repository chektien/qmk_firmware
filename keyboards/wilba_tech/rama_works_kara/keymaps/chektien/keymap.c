/* Copyright 2021 Jason Williams (Wilba)
 *
 *id_layer_2_indicator_row_col This program is free software: you can redistribute it and/or modify
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
// Default layout for RAMA WORKS KARA
#include QMK_KEYBOARD_H
/*#include "../../../wt_rgb_backlight.h"*/

// custom keycodes for macros
enum custom_keycodes {
  MAC1 = SAFE_RANGE,
  MAC2
};

// macro defns
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  switch (keycode) {
    case MAC1:
      if (record->event.pressed) {
        //on pressed 
        SEND_STRING("\"_");
      }
      else {
        // on release
      }
      break;

    case MAC2:
      if (record->event.pressed) {
        //on pressed 
        SEND_STRING("\"_d");
      }
      else {
        // on release
      }
      break;
  }
  return true;
}

// all keymaps
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	// Default layer
  [0] = LAYOUT_60_hhkb(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, MAC1,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
    MT(MOD_LCTL,KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LT(1,KC_SCLN), KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, FN_MO13,
        KC_LALT, KC_LGUI,                            KC_SPC,                             TG(1), FN_MO23),

	// Fn1 Layer
	[1] = LAYOUT_60_hhkb(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  MAC2,
		KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP,   KC_TRNS, KC_DEL,
		KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_LEFT, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_PMNS, KC_END,  KC_PGDN, KC_DOWN, KC_TRNS, KC_TRNS,
				KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS),

	// Fn2 Layer
	[2] = LAYOUT_60_hhkb(
		LGUI(LSFT(KC_A)), KC_MPRV, KC_MNXT, KC_MRWD, KC_MSTP, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F11, KC_MUTE, KC_VOLD, KC_VOLU,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS),

	// Fn3 Layer
	[3] = LAYOUT_60_hhkb(
		KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS),

};

/*layer_state_t layer_state_set_user(layer_state_t state) {*/
  /*HS col = { .h = 20, .s = 255 };*/
  /*switch (get_highest_layer(state)) {*/
    /*case 1:*/
      /*backlight_effect_indicators_set_colors(30, col);*/
      /*break;*/
    /*case 2:*/
      /*break;*/
    /*case 3:*/
      /*break;*/
  /*}*/
  /*return state;*/
/*}*/
