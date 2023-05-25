#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, 		KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, 		KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
		KC_RALT, KC_Z, KC_X, KC_C, KC_V, KC_B, 		KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(3),
		KC_LGUI, KC_LSFT, KC_ENT, 					KC_SPC, MO(1), KC_LCTL
	),
	[1] = LAYOUT_split_3x6_3(
		KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, 					KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
		KC_LCTL, KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN, KC_MINS, 	KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_GRAVE,
		KC_LSFT, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN, KC_UNDS, 	KC_NO, KC_PIPE, KC_BSLS, KC_TILDE, KC_NO, KC_DEL,
		MO(2), KC_LSFT, KC_SPC, 								KC_ENT, _______, KC_TRNS
	),
	[2] = LAYOUT_split_3x6_3(
		KC_NO, LCTL(LGUI(KC_1)), LCTL(LGUI(KC_2)), LCTL(LGUI(KC_3)), LCTL(LGUI(KC_4)), LCTL(LGUI(KC_5)), 			LCTL(LGUI(KC_6)), LCTL(LGUI(KC_7)), LCTL(LGUI(KC_8)), LCTL(LGUI(KC_9)), LCTL(LGUI(KC_0)), KC_NO,
		KC_NO, LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), LGUI(KC_4), LGUI(KC_5), 											LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 																	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, 																					KC_TRNS, KC_TRNS, KC_TRNS
	),
	[3] = LAYOUT_split_3x6_3(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 		KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 		KC_NO, KC_NO, KC_PAGE_DOWN, KC_PAGE_UP, KC_NO, KC_TRNS,
		KC_LGUI, KC_LSFT, KC_ENT, 						KC_SPC, MO(1), KC_LCTL
	),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

#include "combos.c"


