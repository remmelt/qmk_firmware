#include QMK_KEYBOARD_H
#if __has_include("remmelt.h")
#    include "remmelt.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(QMKBEST, KC_8, KC_9, KC_4, KC_5, KC_6, KC_1, KC_2, KC_3, MO(1), KC_0, KC_DOT), [1] = LAYOUT(KC_ESC, KC_ESC, KC_ESC, KC_ESC, KC_UP, KC_ESC, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_ESC, KC_ESC)};
