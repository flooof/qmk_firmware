#pragma once

#include "quantum.h"

/* LAYOUT_ortho_2x2
 * 
 * ┌───┬───┐
 * │K01│K02│
 * ├───┼───┤
 * │K03│K04│
 * └───┴───┘
 */
#define LAYOUT_ortho_2x2( \
	K00, K01, \
	K10, K11 \
) { \
	{ K00, K01 }, \
	{ K10, K11 } \
}
