#include QMK_KEYBOARD_H
#include "custom_keys.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RARR:
            if (record->event.pressed) {
                SEND_STRING("->");
            }
            break;
        case BDIR:
            if (record->event.pressed) {
                SEND_STRING("../");
            }
        break;
    }
    return true;
}