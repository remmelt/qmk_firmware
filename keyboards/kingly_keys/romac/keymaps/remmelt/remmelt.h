enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                SEND_STRING("Foxes given today: ");
            } else {
                SEND_STRING("0");
            }
            break;
    }
    return true;
};
