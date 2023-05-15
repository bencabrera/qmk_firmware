#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case QMKBEST:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_TAP(X_ESC));
            SEND_STRING(":w");
            SEND_STRING(SS_TAP(X_ENT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM test_combo1[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM test_combo2[] = {KC_S, KC_D, KC_F, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_ESC),
    COMBO(test_combo2, QMKBEST),
    /*COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!*/
};
