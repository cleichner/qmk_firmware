#pragma once

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
    _FIDGET
};

enum custom_keycodes {
    CD_UP = SAFE_RANGE,
    CD_BACK,
    MK_FLSH,
};

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define LGUI_D LGUI_T(KC_D)
#define LSFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define RSFT_J LSFT_T(KC_J)
#define RGUI_K RGUI_T(KC_K)
#define LALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

#define LWR_SPC LT(_LOWER, KC_SPACE)
#define RSE_ETR LT(_RAISE, KC_ENTER)

#define LWR_BSC LT(_LOWER, KC_BSPACE)
#define RSE_TAB LT(_RAISE, KC_TAB)

#define MV_LFT LCTL(KC_LEFT)
#define MV_RGT LCTL(KC_RIGHT)
#define TAB_LFT LGUI(LSFT(KC_LBRC))
#define TAB_RGT LGUI(LSFT(KC_RBRC))

#define ZOOM_IN LGUI(KC_EQL)
#define ZOOM_OUT LGUI(KC_MINS)

