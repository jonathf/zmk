/*
Functional keys layer.
*/
#define _BT0 &bt BT_SEL 0
#define _BT1 &bt BT_SEL 1
#define _BT2 &bt BT_SEL 2
#define _BT3 &bt BT_SEL 3
#define _BT4 &bt BT_SEL 4
#define _BT5 &bt BT_SEL 5
#define _BCLR &bt BT_CLR

#define _PSCR &kp PSCRN
#define _MENU &kp CMENU
#define _SLCK &kp SLCK

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
#define _F11 &kp F11
#define _F12 &kp F12
#define _F13 &kp F13
#define _F14 &kp F14
#define _F15 &kp F15
#define _F16 &kp F16
#define _F17 &kp F17
#define _F18 &kp F18
#define _F19 &kp F19
#define _F20 &kp F20


ZMK_LAYER(_LAYER_E1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _     _PSCR _MENU _SLCK _     _F11  _F7   _F8   _F9   _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   _BCLR _     _     _     _     _F12  _F4   _F5   _F6   _F10
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _BT0  _BT1  _BT2              _F1   _F2   _F3
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _     _     _     _
//                  ╰─────┴─────┴─────┴─────╯
)
