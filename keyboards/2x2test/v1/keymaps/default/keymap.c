#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* LAYOUT_ortho_2x2
 * 
 * ┌───┬───┐
 * │K01│K02│
 * ├───┼───┤
 * │K03│K04│
 * └───┴───┘
 */
    [0] = LAYOUT_ortho_2x2(
        KC_1, KC_2,
        KC_3, KC_4
    )
};