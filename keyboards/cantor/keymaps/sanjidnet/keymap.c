// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬─────────┬─────────┬─────────┬───┐           ┌───┬─────────┬─────────┬─────────┬───┬───┐
      * │Tab│ Q │       W │       E │       R │ T │           │ Y │       U │       I │       O │ P │   │
      * ├───┼───┼─────────┼─────────┼─────────┼───┤           ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │ESC│ A │ CTL / S │ GUI / D │ ALT / F │ G │           │ H │ ALT / J │ GUI / K │ CTL / L │ ; │ ' │
      * ├───┼───┼─────────┼─────────┼─────────┼───┤           ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │   │ Z │       X │       C │       V │ B │           │ N │       M │       , │       . │ / │   │
      * └───┴───┴─────────┴─────────┴─────────┴───┘           └───┴─────────┴─────────┴─────────┴───┴───┘
      *                       ┌──────┐                                   ┌─────┐
      *                       │ L-1  ├───────┐                     ┌─────┤ Bsp │
      *                       └──────┤ ENT   ├───────┐      ┌──────┤ SPC ├─────┘
      *                              └───────┤  L-2  │      │ Sft  ├─────┘
      *                                      └───────┘      └──────┘
      */
    [0] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TAB,         KC_Q,   KC_W,                   KC_E,                   KC_R,                   KC_T,           KC_Y,   KC_U,                   KC_I,                   KC_O,                   KC_P,           KC_NO,   
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_ESCAPE,      KC_A,   MT(MOD_LCTL, KC_S),     MT(MOD_LGUI, KC_D),     MT(MOD_LALT, KC_F),     KC_G,           KC_H,   MT(MOD_LALT, KC_J),     MT(MOD_LGUI, KC_K),     MT(MOD_LCTL, KC_L),     KC_SCLN,        KC_QUOT,     
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_NO,          KC_Z,   KC_X,                   KC_C,                   KC_V,                   KC_B,           KC_N,   KC_M,                   KC_COMM,                KC_DOT,                 KC_SLSH,        KC_NO,   
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                        MO(1),                  KC_ENT,                 MO(2),          KC_LSFT,                        KC_SPC,                 KC_BSPC 
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------

  ),
     /*
      * ┌───┬────┬────────┬─────────┬─────────┬───┐       ┌───┬─────────┬─────────┬─────────┬───┬───┐
      * │Tab│    │        │         │         │   │       │ + │       1 │       2 │       3 │ * │   │
      * ├───┼────┼────────┼─────────┼─────────┼───┤       ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │Esc│    │ CTL /  │ GUI /   │ ALT /   │   │       │ = │ ALT / 4 │ GUI / 5 │ CTL / 6 │ 0 │Del│
      * ├───┼────┼────────┼─────────┼─────────┼───┤       ├───┼─────────┼─────────┼─────────┼───┼───┤
      * │   │    │        │   {     │    }    │   │       │ - │       7 │       8 │       9 │ / │   │
      * └───┴────┴────────┴─────────┴─────────┴───┘       └───┴─────────┴─────────┴─────────┴───┴───┘
      *                        ┌───────┐                             ┌─────┐ 
      *                        │       ├─────┐                 ┌─────┤ Bsp │
      *                        └───────┤ ENT ├──────┐   ┌──────┤ SPC ├─────┘
      *                                └─────┤      │   │ Sft  ├─────┘
      *                                      └──────┘   └──────┘
      */
    [1] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TAB,       KC_NO,    KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,          KC_PLUS,        KC_1,                   KC_2,                   KC_3,                   KC_ASTR,        KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_ESCAPE,    KC_NO,    MT(MOD_LCTL, KC_NO),    MT(MOD_LGUI, KC_NO),    MT(MOD_LALT, KC_NO),    KC_NO,          KC_EQL,         MT(MOD_RALT, KC_4),     MT(MOD_RGUI, KC_5),     MT(MOD_RCTL, KC_6),     KC_0,           KC_DEL, 
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_NO,        KC_NO,    KC_NO,                  KC_LCBR,                KC_RCBR,                KC_NO,          KC_MINS,        KC_7,                   KC_8,                   KC_9,                   KC_SLSH,        KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                        KC_TRNS,                KC_ENT,                 KC_TRNS,        KC_LSFT,        KC_SPC,                 KC_BSPC
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
    ), 

     /*
      * ┌────┬──────┬─────────┬─────────┬──────────┬──────┐       ┌──────┬──────┬──────┬───────┬──────┬───┐
      * │Tab │  !   │  @      │  #      │  $       │  %   │       │  ^   │  &   │  *   │  (    │  )   │   │
      * ├────┼──────┼─────────┼─────────┼──────────┼──────┤       ├──────┼──────┼──────┼───────┼──────┼───┤
      * │Esc │ `/~  │ CTL /   │ GUI / [ │ ALT / ]  │      │       │ Left │ Down │ Up   │ Right │  \   │Del│
      * ├────┼──────┼─────────┼─────────┼──────────┼──────┤       ├──────┼──────┼──────┼───────┼──────┼───┤
      * │    │ UNDO │ CUT     │ COPY    │ PASTE    │ RApp │       │ Vol- │ Vol+ │ Mute │       │      │   │
      * └────┴──────┴─────────┴─────────┴──────────┴──────┘       └──────┴──────┴──────┴───────┴──────┴───┘
      *                                 ┌─────┐                             ┌─────┐
      *                                 │     ├─────┐                 ┌─────┤ Bsp │
      *                                 └─────┤ Ent ├───────┐   ┌─────┤ SPC ├─────┘
      *                                       └─────┤       │   │ Sft ├─────┘
      *                                             └───────┘   └─────┘
      */
    [2] = LAYOUT_split_3x6_3(
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_TAB,         KC_EXLM,        KC_AT,          KC_HASH,                KC_DLR,                 KC_PERC,        KC_CIRC,        KC_AMPR,                KC_ASTR,                KC_LPRN,                KC_RPRN,        KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_ESCAPE,      KC_GRV,   MT(MOD_LCTL, KC_NO),  MT(MOD_LGUI, KC_LCBR),  MT(MOD_LALT, KC_RCBR),  KC_NO,          KC_LEFT,        KC_DOWN,                KC_UP,                  KC_RIGHT,               KC_BSLS,        KC_DEL,
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
        KC_NO,          KC_UNDO,        KC_CUT,         KC_COPY,                KC_PASTE,               KC_APP,         KC_VOLD,        KC_VOLU,                KC_MUTE,                KC_NO,                  KC_NO,          KC_NO,  
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
                                                        KC_TRNS,                KC_ENT,                 KC_TRNS,        KC_LSFT,        KC_SPC,                 KC_BSPC
      //----------------------------------------------------------------------------------------------------------      --------------------------------------------------------------------------------------------------------------------
    )
};
