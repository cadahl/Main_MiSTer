#include <stdint.h>
#include <linux/input.h>

struct jamma2joy_s
{
	uint16_t player;
	uint16_t btn;
};

struct jamma2joy_s jamma2joy[128] =
{
	[KEY_5] =           {1, 0x120}, // 1P coin
	[KEY_1] =           {1, 0x121}, // 1P start (shift key)
	[KEY_UP] =          {1, 0x122}, // 1P up
	[KEY_DOWN] =        {1, 0x123}, // 1P down
	[KEY_LEFT] =        {1, 0x124}, // 1P left
	[KEY_RIGHT] =       {1, 0x125}, // 1P right
	[KEY_LEFTCTRL] =    {1, 0x126}, // 1P 1
	[KEY_LEFTALT] =     {1, 0x127}, // 1P 2
	[KEY_SPACE] =       {1, 0x128}, // 1P 3
	[KEY_LEFTSHIFT] =   {1, 0x129}, // 1P 4
	[KEY_Z] =           {1, 0x12A}, // 1P 5
	[KEY_X] =           {1, 0x12B}, // 1P 6
	[KEY_C] =           {1, 0x12C}, // 1P 7
	[KEY_V] =           {1, 0x12D}, // 1P 8

	[KEY_9] =           {1, 0x12E}, // Test
	[KEY_TAB] =         {1, 0x12F}, // Tab (shift + 1P right)
	[KEY_ENTER] =       {1, 0x130}, // Enter (shift + 1P left)
	// ~ Tidle supportted?
	[KEY_P] =           {1, 0x131}, // P (pause) (shift + 1P down)
	[KEY_F1] =          {1, 0x132}, // Service
	[KEY_F2] =          {1, 0x133}, // Test
	[KEY_F3] =          {1, 0x134}, // Tilt

	[KEY_6] =           {2, 0x120}, // 2P coin
	[KEY_2] =           {2, 0x121}, // 2P start
	[KEY_R] =           {2, 0x122}, // 2P up
	[KEY_F] =           {2, 0x123}, // 2P down
	[KEY_D] =           {2, 0x124}, // 2P left
	[KEY_G] =           {2, 0x125}, // 2P right
	[KEY_A] =           {2, 0x126}, // 2P 1
	[KEY_S] =           {2, 0x127}, // 2P 2
	[KEY_Q] =           {2, 0x128}, // 2P 3
	[KEY_W] =           {2, 0x129}, // 2P 4
	[KEY_I] =           {2, 0x12A}, // 2P 5
	[KEY_K] =           {2, 0x12B}, // 2P 6
	[KEY_J] =           {2, 0x12C}, // 2P 7
	[KEY_L] =           {2, 0x12D}, // 2P 8

/*
	some key codes overlap with 1P/2P buttons.

	[KEY_7] =           {3, 0x120}, // 3P coin
	[KEY_3] =           {3, 0x121}, // 3P start
	[KEY_I] =           {3, 0x122}, // 3P up
	[KEY_K] =           {3, 0x123}, // 3P down
	[KEY_J] =           {3, 0x124}, // 3P left
	[KEY_L] =           {3, 0x125}, // 3P right
	[KEY_RIGHTCTRL] =   {3, 0x126}, // 3P 1
	[KEY_RIGHTSHIFT] =  {3, 0x127}, // 3P 2
	[KEY_ENTER] =       {3, 0x128}, // 3P 3
	[KEY_O] =           {3, 0x129}, // 3P 4

	[KEY_8] =           {4, 0x120}, // 4P coin
	[KEY_4] =           {4, 0x121}, // 4P start
	[KEY_Y] =           {4, 0x122}, // 4P up
	[KEY_N] =           {4, 0x123}, // 4P down
	[KEY_V] =           {4, 0x124}, // 4P left
	[KEY_U] =           {4, 0x125}, // 4P right
	[KEY_B] =           {4, 0x126}, // 4P 1
	[KEY_E] =           {4, 0x127}, // 4P 2
	[KEY_H] =           {4, 0x128}, // 4P 3
	[KEY_M] =           {4, 0x129}, // 4P 4
*/
};
