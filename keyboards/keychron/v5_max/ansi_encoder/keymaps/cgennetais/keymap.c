#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    EXTEND,
    MOUSE,
};

// abbreviations
// layer toggles
#define FN_MAC MO(MAC_FN)
#define FN_WIN MO(WIN_FN)
#define MO_EXT MO(EXTEND)
#define TAB_MS LT(MOUSE,KC_TAB)
#define SPC_EXT LT(EXTEND,KC_SPC)
// Home row mods
#define HRM_A MT(MOD_LGUI,KC_A)
#define HRM_S MT(MOD_LALT,KC_S)
#define HRM_D MT(MOD_LSFT,KC_D)
#define HRM_F MT(MOD_LCTL,KC_F)
#define HRM_J MT(MOD_LCTL,KC_J)
#define HRM_K MT(MOD_LSFT,KC_K)
#define HRM_L MT(MOD_LALT,KC_L)
#define HRM_SCL MT(MOD_LGUI,KC_SCLN)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [MAC_BASE] = LAYOUT_ansi_98(
        KC_ESC,             KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            KC_DEL,   KC_HOME,  KC_END,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, FN_MAC,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT           ),

    [MAC_FN] = LAYOUT_ansi_98(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             _______,  _______,  _______,    UG_TOGG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______            ),

    [WIN_BASE] = LAYOUT_ansi_98(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_DEL,   KC_PSCR,  KC_F20,     KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_NUM,   KC_PSLS,  KC_PAST,    KC_PMNS,
        TAB_MS,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_P7,    KC_P8,    KC_P9,      KC_PPLS,
        MO_EXT,   HRM_A,    HRM_S,    HRM_D,    HRM_F,    KC_G,     KC_H,     HRM_J,    HRM_K,    HRM_L,    HRM_SCL,  KC_QUOT,            KC_ENT,             KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,      KC_PENT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                SPC_EXT,                                KC_RALT,  FN_WIN,   KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT            ),

    [WIN_FN] = LAYOUT_ansi_98(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            _______,  _______,  _______,    UG_TOGG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        _______,  UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,            _______,  _______,  _______,  _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______            ),

    [EXTEND] = LAYOUT_ansi_98(
        KC_CAPS,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,            _______,  KC_HOME,  KC_END,     _______,
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             _______,  _______,  _______,    _______,
        KC_ESC,   MC_1,     MC_2,     MC_3,     MC_4,     _______,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   _______,  _______,  _______,  _______,            KC_HOME,  KC_UP,    KC_PGUP,    _______,
        _______,  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_BSPC,  _______,            KC_PSCR,            KC_LEFT,  KC_NO,    KC_RGHT,
        _______,            _______,  _______,  _______,  _______,  _______,  KC_ENT,   KC_TAB,   KC_ESC,   _______,  _______,            _______,  _______,  KC_END,   KC_DOWN,  KC_PGDN,    _______,
        _______,  _______,  _______,                                KC_ENT,                                 _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______            ),

    [MOUSE] = LAYOUT_ansi_98(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        _______,  _______,  _______,  _______,  _______,  _______,  MS_WHLL,  MS_WHLU,  MS_WHLD,  MS_WHLR,  _______,  _______,  _______,  _______,            _______,  _______,  _______,    _______,
        _______,  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  _______,  MS_LEFT,  MS_DOWN,  MS_UP,    MS_RGHT,  _______,  _______,            _______,            _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  MS_BTN1,  MS_BTN3,  MS_BTN2,  _______,  _______,            _______,  _______,  _______,  _______,  _______,    _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______            ),
 };

// macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MC_0: // unused
                SEND_STRING(SS_DOWN(X_LCTL)SS_UP(X_LCTL));
                return false;
            case MC_1: // go forward in history
                SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_LEFT)SS_UP(X_LALT));
                return false;
            case MC_2: // go back in history
                SEND_STRING(SS_DOWN(X_LALT)SS_TAP(X_RGHT)SS_UP(X_LALT));
                return false;
            case MC_3: // next tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_PGUP)SS_UP(X_LCTL));
                return false;
            case MC_4: // prev tab
                SEND_STRING(SS_DOWN(X_LCTL)SS_TAP(X_PGDN)SS_UP(X_LCTL));
                return false;
        }
    }
    return true;
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(UG_VALD, UG_VALU)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(UG_VALD, UG_VALU)},
    [EXTEND]   = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
    [MOUSE]    = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT)},
};
#endif // ENCODER_MAP_ENABLE
