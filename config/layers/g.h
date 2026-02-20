/*
Mouse and media layer.
*/
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
#define _SRIG &msc SCRL_RIGHT

#define _MUP &mmv MOVE_UP
#define _MDOW &mmv MOVE_DOWN
#define _MLEF &mmv MOVE_LEFT
#define _MRIG &mmv MOVE_RIGHT

#define _CUT &holdtap_left LALT K_CUT
#define _COPY &holdtap_left LCTRL K_COPY
#define _PAST &holdtap_left LSHIFT K_PASTE

#define _LCLK &mkp LCLK
#define _MCLK &mkp MCLK
#define _RCLK &mkp RCLK

#define _J_E1 &sl LAYER_E1

ZMK_LAYER(_LAYER_G1,                                            TOP_START_PADDING
//      ╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
         _BMIN _BDN  _BUP  _BMAX _SLEF _SDOW _SUP  _SRIG        TOP_END_PADDING MIDDLE_START_PADDING
//╭─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────╮
   _     _MUTE _VDN  _VUP  _VMAX _MLEF _MDOW _MUP  _MRIG _      MIDDLE_END_PADDING BOTTOM_START_PADDING
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _CUT  _COPY _PAST    _PAD     _LCLK _MCLK _RCLK        BOTTOM_END_PADDING THUMB_START_PADDING
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _CAPS _SPC  _J_B1 _J_C1                    THUMB_END_PADDING
//                  ╰─────┴─────┴─────┴─────╯
)
