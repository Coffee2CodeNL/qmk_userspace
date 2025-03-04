#include QMK_KEYBOARD_H
#include "raw_hid.h"

#include <string.h>

void raw_hid_receive(uint8_t *data, uint8_t length) {
    uint8_t response[length];
    memset(response, 0, length);
    response[0] = 'B';

    if(data[0] == 'A') {
        raw_hid_send(response, length);
    }
}