#pragma once

#define _BT0 &bt BT_SEL 0
#define _BT1 &bt BT_SEL 1
#define _BT2 &bt BT_SEL 2
#define _BT3 &bt BT_SEL 3
#define _BT4 &bt BT_SEL 4
#define _BT5 &bt BT_SEL 5
#define _BCLR &bt BT_CLR

#define _MUTE &kp C_MUTE
#define _VUP &kp C_VOL_UP
#define _VDN &kp C_VOL_DN
#define _VMAX &kp LS(C_VOL_UP)

#define _BUP &kp C_BRIGHTNESS_INC
#define _BDN &kp C_BRIGHTNESS_DEC
#define _BMIN &kp LS(C_BRIGHTNESS_DEC)
#define _BMAX &kp LS(C_BRIGHTNESS_INC)

#define _SUP &msc SCRL_UP
#define _SDOW &msc SCRL_DOWN
#define _SLEF &msc SCRL_LEFT
#define _SRIG &msc SCRL_LEFT

#define _MUP &mmv MOVE_UP
#define _MDOW &mmv MOVE_DOWN
#define _MLEF &mmv MOVE_LEFT
#define _MRIG &mmv MOVE_RIGHT

#define _LCLK &mkp LCLK
#define _MCLK &mkp MCLK
#define _RCLK &mkp RCLK

#define _J_E1 &sl LAYER_E1

ZMK_LAYER(_LAYER_D1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _     _BMIN _BDN  _BUP  _BMAX _SLEF _SDOW _SUP  _SRIG _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   _BCLR _MUTE _VDN  _VUP  _VMAX _MLEF _MDOW _MUP  _MRIG _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _BT0  _BT1  _BT2              _LCLK _MCLK _RCLK
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _     _     _     _J_E1
//                  ╰─────┴─────┴─────┴─────╯
)
