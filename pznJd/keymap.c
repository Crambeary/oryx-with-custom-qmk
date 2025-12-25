#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};



#define DUAL_FUNC_0 LT(3, KC_M)
#define DUAL_FUNC_1 LT(2, KC_F21)
#define DUAL_FUNC_2 LT(10, KC_K)
#define DUAL_FUNC_3 LT(12, KC_F11)
#define DUAL_FUNC_4 LT(9, KC_F12)
#define DUAL_FUNC_5 LT(9, KC_F7)
#define DUAL_FUNC_6 LT(1, KC_4)
#define DUAL_FUNC_7 LT(3, KC_F15)
#define DUAL_FUNC_8 LT(7, KC_F)
#define DUAL_FUNC_9 LT(10, KC_N)
#define DUAL_FUNC_10 LT(11, KC_F21)
#define DUAL_FUNC_11 LT(3, KC_F18)
#define DUAL_FUNC_12 LT(5, KC_F1)
#define DUAL_FUNC_13 LT(7, KC_F13)
#define DUAL_FUNC_14 LT(13, KC_0)
#define DUAL_FUNC_15 LT(4, KC_9)
#define DUAL_FUNC_16 LT(8, KC_9)
#define DUAL_FUNC_17 LT(15, KC_S)
#define DUAL_FUNC_18 LT(2, KC_F8)
#define DUAL_FUNC_19 LT(8, KC_E)
#define DUAL_FUNC_20 LT(13, KC_6)
#define DUAL_FUNC_21 LT(13, KC_3)
#define DUAL_FUNC_22 LT(2, KC_X)
#define DUAL_FUNC_23 LT(2, KC_F24)
#define DUAL_FUNC_24 LT(12, KC_F22)
#define DUAL_FUNC_25 LT(9, KC_F6)
#define DUAL_FUNC_26 LT(12, KC_F6)
#define DUAL_FUNC_27 LT(12, KC_F9)
#define DUAL_FUNC_28 LT(14, KC_F23)
#define DUAL_FUNC_29 LT(6, KC_I)
#define DUAL_FUNC_30 LT(15, KC_I)
#define DUAL_FUNC_31 LT(9, KC_5)
#define DUAL_FUNC_32 LT(1, KC_0)
#define DUAL_FUNC_33 LT(4, KC_8)
#define DUAL_FUNC_34 LT(9, KC_P)
#define DUAL_FUNC_35 LT(3, KC_F16)
#define DUAL_FUNC_36 LT(8, KC_K)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, CW_TOGG,        
    KC_MINUS,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_R,           KC_S,           MT(MOD_LSFT, KC_T),KC_G,                                           KC_M,           MT(MOD_RSFT, KC_N),KC_E,           KC_I,           KC_O,           MT(MOD_LCTL, KC_QUOTE),
    KC_LEFT_GUI,    MT(MOD_LALT, KC_Z),MEH_T(KC_X),    ALL_T(KC_C),    LT(4, KC_D),    KC_V,                                           KC_K,           LT(7, KC_H),    ALL_T(KC_COMMA),MEH_T(KC_DOT),  MT(MOD_LALT, KC_SLASH),MT(MOD_LGUI, KC_EQUAL),
                                                    LT(5, KC_ENTER),MT(MOD_LSFT, KC_TAB),                                KC_BSPC,        LT(13, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    KC_MINUS,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    CW_TOGG,        MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_LALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    KC_HYPR,        KC_Z,           KC_X,           KC_C,           LT(4, KC_V),    KC_B,                                           KC_N,           LT(7, KC_M),    KC_COMMA,       KC_DOT,         KC_SLASH,       KC_MEH,         
                                                    LT(2, KC_SPACE),LT(3, KC_TAB),                                  LT(6, KC_BSPC), LT(5, KC_ENTER)
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_A,           KC_B,           KC_C,           KC_D,           KC_E,           KC_F,           
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_HASH,        
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,                                          KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_ASTR,        TO(10),         
    KC_NO,          KC_NO,          KC_MEH,         KC_HYPR,        QK_LLCK,        KC_NO,                                          KC_0,           KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_DELETE,      
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          TO(10),         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,         KC_HYPR,        QK_LLCK,        KC_TRANSPARENT,                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PSCR,        KC_F7,          KC_F8,          KC_F9,          KC_F12,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 KC_SCRL,        KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEH,         KC_HYPR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_PAUSE,       KC_F1,          KC_F2,          KC_F3,          KC_F10,         KC_INSERT,      
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,                                 KC_SLASH,       KC_ASTR,        KC_PLUS,        KC_PERC,        KC_COLN,        KC_PIPE,        
    KC_TRANSPARENT, KC_MINUS,       KC_UNDS,        KC_LPRN,        KC_RPRN,        KC_GRAVE,                                       KC_CIRC,        KC_LABK,        KC_RABK,        KC_EQUAL,       KC_DLR,         KC_DQUO,        
    KC_TRANSPARENT, DUAL_FUNC_0,    KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_NO,                                          KC_NO,          KC_EXLM,        KC_AT,          KC_HASH,        DUAL_FUNC_1,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LALT(KC_RIGHT),                                 KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_TRANSPARENT, KC_MS_WH_RIGHT, KC_MS_BTN3,                                     KC_TRANSPARENT, QK_LLCK,        KC_HYPR,        KC_MEH,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    RGB_HUI,        RGB_HUD,        KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  RGB_SAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_SPI,        KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,RGB_SAD,                                        KC_TRANSPARENT, KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_LEFT_ALT,    KC_RIGHT_GUI,   KC_TRANSPARENT, 
    RGB_SPD,        TO(0),          TO(1),          QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_PRINT,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_DELETE,      
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_ALT,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_GRAVE,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_M,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_M,           KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_ENTER,       TO(8),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_SPACE,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,   DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 LT(12, KC_BSPC),LT(11, KC_ENTER)
  ),
  [11] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_5,           KC_4,           KC_3,           KC_2,           KC_1,           DUAL_FUNC_20,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_21,   DUAL_FUNC_22,   DUAL_FUNC_23,   DUAL_FUNC_24,   DUAL_FUNC_25,   DUAL_FUNC_26,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_27,   DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   KC_ESCAPE,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DUAL_FUNC_32,   DUAL_FUNC_33,   DUAL_FUNC_34,   DUAL_FUNC_35,   DUAL_FUNC_36,   CW_TOGG,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TAB,         KC_TRANSPARENT
  ),
  [12] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(3),          OSM(MOD_LSFT),  OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_HYPR),  OSM(MOD_MEH),   LGUI(KC_SPACE), KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [13] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    QK_LLCK,        KC_NO,          KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,                                     KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_DOT,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,                                        KC_PLUS,        MT(MOD_RSFT, KC_4),MT(MOD_RCTL, KC_5),MT(MOD_LALT, KC_6),KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_ALT,    ST_MACRO_0,     KC_NO,          ST_MACRO_1,     KC_NO,                                          KC_0,           KC_1,           KC_2,           KC_3,           MT(MOD_LALT, KC_SLASH),KC_DELETE,      
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_BSLS, MT(MOD_LCTL, KC_QUOTE), MT(MOD_LGUI, KC_EQUAL), COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_SPACE, KC_LEFT_ALT, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_BSLS, KC_J, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_V, LT(5, KC_ENTER), COMBO_END};
const uint16_t PROGMEM combo4[] = { LT(13, KC_SPACE), KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TG(8)),
    COMBO(combo1, TT(9)),
    COMBO(combo2, TO(10)),
    COMBO(combo3, TT(2)),
    COMBO(combo4, TT(6)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_D):
            return g_tapping_term -15;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term -40;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term -40;
        case MT(MOD_RCTL, KC_K):
            return g_tapping_term -15;
        default:
            return g_tapping_term;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {125,125,134}, {0,0,0}, {0,0,0}, {0,0,0}, {139,219,208}, {139,219,208}, {139,219,208}, {139,219,208}, {139,219,208}, {139,219,208}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {139,219,208}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,218,204}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {1,53,235}, {1,53,235}, {36,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {125,125,134}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,218,204}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {191,70,231}, {191,70,231}, {0,0,0}, {0,0,0}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {0,0,0}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {0,0,0}, {191,70,231}, {191,70,231}, {191,70,231}, {191,70,231}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {139,219,208}, {36,255,255}, {0,0,0}, {0,0,0}, {36,255,255}, {139,219,208}, {139,219,208}, {139,219,208}, {36,255,255}, {0,0,0}, {0,0,0}, {36,255,255}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {125,125,134}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {82,127,255}, {82,127,255}, {82,127,255}, {36,255,255}, {36,255,255}, {82,127,255}, {82,127,255}, {82,127,255}, {82,127,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,0,255}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,0,255}, {0,0,255}, {0,0,255}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,182,145}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,217,206}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,147,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [13] = { {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {125,125,134}, {0,0,0}, {89,107,231}, {36,255,255}, {89,107,231}, {89,107,231}, {0,0,0}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {89,107,231}, {0,0,0}, {89,107,231}, {1,53,235}, {0,0,0}, {1,53,235}, {0,0,0}, {0,0,0}, {0,0,0}, {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {139,217,204}, {189,255,238}, {36,255,255}, {36,255,255}, {36,255,255}, {189,255,238}, {0,0,0}, {189,255,238}, {36,255,255}, {36,255,255}, {36,255,255}, {189,255,238}, {0,0,0}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {189,255,238}, {0,0,0}, {0,0,0}, {36,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
      case 8:
        set_layer_color(8);
        break;
      case 13:
        set_layer_color(13);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_TAB)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_TAB))));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_TILD);
        } else {
          unregister_code16(KC_TILD);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUES);
        } else {
          unregister_code16(KC_QUES);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_J);
        } else {
          unregister_code16(KC_J);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_J));
        } else {
          unregister_code16(LSFT(KC_J));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_L);
        } else {
          unregister_code16(KC_L);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_L));
        } else {
          unregister_code16(LSFT(KC_L));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_U);
        } else {
          unregister_code16(KC_U);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_U));
        } else {
          unregister_code16(LSFT(KC_U));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Y);
        } else {
          unregister_code16(KC_Y);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_Y));
        } else {
          unregister_code16(LSFT(KC_Y));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SCLN);
        } else {
          unregister_code16(KC_SCLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_SCLN));
        } else {
          unregister_code16(LSFT(KC_SCLN));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_BSLS);
        } else {
          unregister_code16(KC_BSLS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_BSLS));
        } else {
          unregister_code16(LSFT(KC_BSLS));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_M);
        } else {
          unregister_code16(KC_M);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_M));
        } else {
          unregister_code16(LSFT(KC_M));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_N);
        } else {
          unregister_code16(KC_N);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_N));
        } else {
          unregister_code16(LSFT(KC_N));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_E);
        } else {
          unregister_code16(KC_E);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_E));
        } else {
          unregister_code16(LSFT(KC_E));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_I);
        } else {
          unregister_code16(KC_I);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_I));
        } else {
          unregister_code16(LSFT(KC_I));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_O);
        } else {
          unregister_code16(KC_O);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_O));
        } else {
          unregister_code16(LSFT(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_QUOTE));
        } else {
          unregister_code16(LSFT(KC_QUOTE));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_K);
        } else {
          unregister_code16(KC_K);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_K));
        } else {
          unregister_code16(LSFT(KC_K));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_H);
        } else {
          unregister_code16(KC_H);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_H));
        } else {
          unregister_code16(LSFT(KC_H));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_COMMA));
        } else {
          unregister_code16(LSFT(KC_COMMA));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_DOT));
        } else {
          unregister_code16(LSFT(KC_DOT));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_SLASH);
        } else {
          unregister_code16(KC_SLASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_SLASH));
        } else {
          unregister_code16(LSFT(KC_SLASH));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_EQUAL);
        } else {
          unregister_code16(KC_EQUAL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_EQUAL));
        } else {
          unregister_code16(LSFT(KC_EQUAL));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_GRAVE));
        } else {
          unregister_code16(LSFT(KC_GRAVE));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_B);
        } else {
          unregister_code16(KC_B);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_B));
        } else {
          unregister_code16(LSFT(KC_B));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_P);
        } else {
          unregister_code16(KC_P);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_P));
        } else {
          unregister_code16(LSFT(KC_P));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_F);
        } else {
          unregister_code16(KC_F);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_F));
        } else {
          unregister_code16(LSFT(KC_F));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_W);
        } else {
          unregister_code16(KC_W);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_W));
        } else {
          unregister_code16(LSFT(KC_W));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Q);
        } else {
          unregister_code16(KC_Q);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_Q));
        } else {
          unregister_code16(LSFT(KC_Q));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MINUS);
        } else {
          unregister_code16(KC_MINUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_MINUS));
        } else {
          unregister_code16(LSFT(KC_MINUS));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_G);
        } else {
          unregister_code16(KC_G);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_G));
        } else {
          unregister_code16(LSFT(KC_G));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_T);
        } else {
          unregister_code16(KC_T);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_T));
        } else {
          unregister_code16(LSFT(KC_T));
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_S);
        } else {
          unregister_code16(KC_S);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_S));
        } else {
          unregister_code16(LSFT(KC_S));
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_R);
        } else {
          unregister_code16(KC_R);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_R));
        } else {
          unregister_code16(LSFT(KC_R));
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_A);
        } else {
          unregister_code16(KC_A);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_A));
        } else {
          unregister_code16(LSFT(KC_A));
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_V));
        } else {
          unregister_code16(LSFT(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_D);
        } else {
          unregister_code16(KC_D);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_D));
        } else {
          unregister_code16(LSFT(KC_D));
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_C));
        } else {
          unregister_code16(LSFT(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_X);
        } else {
          unregister_code16(KC_X);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_X));
        } else {
          unregister_code16(LSFT(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_Z);
        } else {
          unregister_code16(KC_Z);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LSFT(KC_Z));
        } else {
          unregister_code16(LSFT(KC_Z));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
