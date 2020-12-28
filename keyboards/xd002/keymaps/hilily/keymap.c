#include QMK_KEYBOARD_H

enum custom_keycodes {
    HI_LILY = SAFE_RANGE,
    I_LOVE_YOU,
};

static const char* hi_lily = "Hi, Lily! ";
static uint8_t hi = 0;

static const char* i_love_you = "I love you! ";
static uint8_t i = 0;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // I could also send them as whole strings, but I think it's more fun this
    // way.
    switch (keycode) {
    case HI_LILY:
        if (record->event.pressed) {
            send_char(hi_lily[hi]);
            hi++;
            if (hi >= 10) {
                hi = 0;
            }
        } else { }
        break;

    case I_LOVE_YOU:
        if (record->event.pressed) {
            send_char(i_love_you[i]);
            i++;
            if (i >= 12) {
                i = 0;
            }
        } else { }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    I_LOVE_YOU, HI_LILY
  )
};

