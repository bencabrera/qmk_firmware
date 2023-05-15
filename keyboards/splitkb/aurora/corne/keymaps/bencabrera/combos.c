#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

enum custom_keycodes {
    ESC_AND_SAVE = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case ESC_AND_SAVE:
        if (record->event.pressed) {
            // when keycode ESC_AND_SAVE is pressed
            SEND_STRING(SS_TAP(X_ESC));
            SEND_STRING(":w");
            SEND_STRING(SS_TAP(X_ENT));
        } else {
            // when keycode ESC_AND_SAVE is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM esc_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM esc_and_hold_combo[] = {KC_S, KC_D, KC_F, COMBO_END};
/*const uint16_t PROGMEM tab_combo[] = {KC_Q, KC_W, COMBO_END};*/

combo_t key_combos[COMBO_COUNT] = {
    COMBO(esc_combo, KC_ESC),
    COMBO(esc_and_hold_combo, ESC_AND_SAVE),
    /*COMBO(tab_combo, KC_TAB),*/
    /*COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!*/
};
