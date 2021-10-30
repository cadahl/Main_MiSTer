
#ifndef JAMMA2JOY_H
#define JAMMA2JOY_H

#include <stdint.h>

// Jammasd/J-PAC/I-PAC have shifted keys: when 1P start is kept pressed, it acts as a shift key,
// outputting other key signals. Example: 1P start + 2P start = KEY_ESC
// Shifted keys are passed as normal keyboard keys.
struct jamma2joy_s
{
	uint16_t player;
	uint16_t btn;
};

extern "C" struct jamma2joy_s jamma2joy[128];

#endif
