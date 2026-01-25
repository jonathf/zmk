/*
Functional keys layer.
*/
#define _PSCR &kp PSCRN

#define _BT0 &bt BT_SEL 0
#define _BT1 &bt BT_SEL 1
#define _BT2 &bt BT_SEL 2
#define _BCLR &bt BT_CLR

#define _F1 &kp F1
#define _F2 &kp F2
#define _F3 &kp F3
#define _F4 &kp F4
#define _F5 &kp F5
#define _F6 &kp F6
#define _F7 &kp F7
#define _F8 &kp F8
#define _F9 &kp F9
#define _F10 &kp F10

#define _J_A2 &to LAYER_A2

ZMK_LAYER(_LAYER_E1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _ _     _     _PSCR _     _     _     _F7   _F8   _F9   _    _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _ _BCLR _J_A2 _     _     _     _     _F4   _F5   _F6   _F10 _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _ _     _BT0  _BT1  _BT2  _     _     _F1   _F2   _F3   _    _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _SPC  _J_B1 _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)
