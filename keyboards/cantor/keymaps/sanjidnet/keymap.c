// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬─────────┬─────────┬─────────┬───┐           ┌───┬─────────┬─────────┬─────────┬───┬───┐
      * │Tab│ Q │       W │       E │       R │ T │           │ Y │       U │       I │       O │ P │Bsp│
      * ├───┼───┼─────────┼─────────┼─────────┼───┤           ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │ESC│ A │ CTL / S │ GUI / D │ ALT / F │ G │           │ H │ ALT / J │ GUI / K │ CTL / L │ ; │ ' │
      * ├───┼───┼─────────┼─────────┼─────────┼───┤           ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │Sft│ Z │       X │       C │       V │ B │           │ N │       M │       , │       . │ / │Sft│
      * └───┴───┴─────────┴─────────┴─────────┴───┘           └───┴─────────┴─────────┴─────────┴───┴───┘
      *               ┌────┐                                ┌───┐
      *               │    ├───────┐                  ┌─────┤   │
      *               └────┤ ENT   ├───────┐      ┌───┤TO(1)├───┘
      *                    └───────┤       │      │SPC├─────┘
      *                            └───────┘      └───┘
      */
    [0] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TAB,         KC_Q,   KC_W,                   KC_E,                   KC_R,                   KC_T,           KC_Y,   KC_U,                   KC_I,                   KC_O,                   KC_P,           KC_BSPC, 
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_ESCAPE,      KC_A,   MT(MOD_LCTL, KC_S),     MT(MOD_LGUI, KC_D),     MT(MOD_LALT, KC_F),     KC_G,           KC_H,   MT(MOD_LALT, KC_J),     MT(MOD_LGUI, KC_K),     MT(MOD_LCTL, KC_L),     KC_SCLN,        KC_QUOT,     
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_LSFT,        KC_Z,   KC_X,                   KC_C,                   KC_V,                   KC_B,           KC_N,   KC_M,                   KC_COMM,                KC_DOT,                 KC_SLSH,        KC_RSFT, 
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                   KC_NO,   KC_ENT,                KC_NO,                               KC_SPC, TO(1), KC_NO   
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------



  ),
     /*
      * ┌───┬────┬────────┬─────────┬─────────┬───┐       ┌───┬─────────┬─────────┬─────────┬───┬───┐
      * │`~ │ 1  │      2 │       3 │       4 │ 5 │       │ + │       1 │       2 │       3 │ * │Bsp│
      * ├───┼────┼────────┼─────────┼─────────┼───┤       ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │   │ !  │ CTL /  │ GUI /   │ ALT /   │ % │       │ - │ ALT / 4 │ GUI / 5 │ CTL / 6 │ / │   │
      * ├───┼────┼────────┼─────────┼─────────┼───┤       ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │Sft│    │        │         │       { │ } │       │ 0 │       7 │       8 │       9 │ = │Sft│
      * └───┴────┴────────┴─────────┴─────────┴───┘       └───┴─────────┴─────────┴─────────┴───┴───┘
      *                         ┌─────────┐                       ┌─────┐
      *                         │ MLCKSCN ├─────┐           ┌─────┤TO(3)│
      *                         └─────────┤TO(0)├───┐   ┌───┤TO(2)├─────┘
      *                                   └─────┤   │   │   ├─────┘
      *                                         └───┘   └───┘
      */
    [1] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_GRV,       KC_1,     KC_2,                   KC_3,                   KC_4,                   KC_5,           KC_PLUS,        KC_1,                   KC_2,                   KC_3,                   KC_ASTR,        KC_BSPC,
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TRNS,      KC_EXLM,  MT(MOD_LCTL, KC_NO),    MT(MOD_LGUI, KC_NO),    MT(MOD_LALT, KC_NO),    KC_PERC,        KC_MINS,        MT(MOD_RALT, KC_4),     MT(MOD_RGUI, KC_5),     MT(MOD_RCTL, KC_6),     KC_SLSH,        KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_LSFT,      KC_NO,    KC_NO,                  KC_NO,                  KC_LCBR,                KC_RCBR,        KC_0,           KC_7,                   KC_8,                   KC_9,                   KC_EQL,         KC_RSFT,
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                                      KC_TRNS, TO(0), KC_NO,                            KC_NO, TO(2), TO(3)
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
    ),
     /*
      * ┌────┬──────┬──────┬─────────┬──────────┬──────┐       ┌──────┬──────┬──────┬───────┬──────┬───┐
      * │ `~ │  !   │  @   │  #      │  $       │  %   │       │  ^   │  &   │  *   │  (    │  )   │Bsp│
      * ├────┼──────┼──────┼─────────┼──────────┼──────┤       ├──────┼──────┼──────┼───────┼──────┼───┤
      * │    │ HOME │ END  │ LCTRL+C │ LCTRL+V  │      │       │ Left │ Down │ Up   │ Right │ Del  │   │
      * ├────┼──────┼──────┼─────────┼──────────┼──────┤       ├──────┼──────┼──────┼───────┼──────┼───┤
      * │Sft │ UNDO │ CUT  │ COPY    │ PASTE    │ RApp │       │ Vol- │ Vol+ │ Mute │       │ RGui │   │
      * └────┴──────┴──────┴─────────┴──────────┴──────┘       └──────┴──────┴──────┴───────┴──────┴───┘
      *                                  ┌─────┐                       ┌─────┐
      *                                  │     ├─────┐           ┌─────┤TO(3)│
      *                                  └─────┤TO(0)├───┐   ┌───┤TO(0)├─────┘
      *                                        └─────┤ALT│   │SPC├─────┘
      *                                              └───┘   └───┘
      */
    [2] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_GRV,         KC_EXLM,        KC_AT,          KC_HASH,                KC_DLR,                 KC_PERC,        KC_CIRC,        KC_AMPR,                KC_ASTR,                KC_LPRN,                KC_RPRN,        KC_BSPC,
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TRNS,        KC_NO,  MT(MOD_LCTL, KC_LBRC),  MT(MOD_LGUI, KC_LCBR),  MT(MOD_LALT, KC_RCBR),  KC_RBRC,        KC_LEFT,        KC_DOWN,                KC_UP,                  KC_RIGHT,               KC_NO,          KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TAB,         KC_UNDO,        KC_CUT,         KC_COPY,                KC_PASTE,               KC_APP,         KC_VOLD,        KC_VOLU,                KC_MUTE,                KC_NO,                  KC_NO,          KC_RSFT,
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                                        KC_NO,          TO(0),          KC_NO,          KC_TRNS,        KC_TRNS,                TO(3)
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
    ),
     /*
      * ┌──┬────┬──────┬────┬────┬────┐       ┌────┬────┬────┬────┬─────┬─────┐
      * │  │ F1 │ F2   │ F3 │ F4 │ F5 │       │ F6 │ F7 │ F8 │ F9 │ F10 │ F11 │
      * ├──┼────┼──────┼────┼────┼────┤       ├────┼────┼────┼────┼─────┼─────┤
      * │  │    │      │    │    │    │       │    │    │    │    │     │ F12 │
      * ├──┼────┼──────┼────┼────┼────┤       ├────┼────┼────┼────┼─────┼─────┤
      * │  │    │      │    │    │    │       │    │    │    │    │     │     │
      * └──┴────┴──────┴────┴────┴────┘       └────┴────┴────┴────┴─────┴─────┘
      *                   ┌───┐                       ┌───┐
      *                   │   ├─────┐           ┌─────┤   │
      *                   └───┤TO(0)├───┐   ┌───┤     ├───┘
      *                       └─────┤ENT│   │   ├─────┘
      *                             └───┘   └───┘
      */
    [3] = LAYOUT_split_3x6_3(
      //--------------------------------------------------------------         ---------------------------------------------------------------------------------
        KC_NO, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                   KC_F6,   KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,
      //--------------------------------------------------------------         ---------------------------------------------------------------------------------
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_F12,
      //--------------------------------------------------------------         ---------------------------------------------------------------------------------
        KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,
      //--------------------------------------------------------------         ---------------------------------------------------------------------------------
                                              KC_NO, TO(0), KC_NO,              KC_NO, KC_NO, KC_NO
      //--------------------------------------------------------------         ---------------------------------------------------------------------------------
    )
};
