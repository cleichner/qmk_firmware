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

// TODO: add custom keys to make homerow mods active on all layers
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

// Thumb keys
// I now have two tabs, so maybe a dedicated key for repeating or maybe
// use one as a leader?
#define RSE_TAB LT(_RAISE, KC_TAB)
#define LWR_BSC LT(_LOWER, KC_BSPACE)
#define ADJ_TAB LT(_ADJUST, KC_TAB)

#define RSE_ETR LT(_RAISE, KC_ENTER)
#define LWR_SPC LT(_LOWER, KC_SPACE)
#define ADJ_ESC LT(_ADJUST, KC_ESC)

// Shortcuts
#define MV_UP LCTL(KC_UP)
#define MV_LFT LCTL(KC_LEFT)
#define MV_RGT LCTL(KC_RIGHT)
#define TAB_LFT LGUI(LSFT(KC_LBRC))
#define TAB_RGT LGUI(LSFT(KC_RBRC))
#define WEB_BAK LGUI(KC_LBRC)
#define WEB_FWD LGUI(KC_RBRC)

#define ZOOM_IN LGUI(KC_EQL)
#define ZOOM_OUT LGUI(KC_MINS)

// Full-screen screenshot
#define SCREEN3 LGUI(LSFT(KC_3))
// Select sub-area for screenshot
#define SCREEN4 LGUI(LSFT(KC_4))
