#pragma once

#define _BT0 &bt BT_SEL 0
#define _BT1 &bt BT_SEL 1
#define _BT2 &bt BT_SEL 2
#define _BT3 &bt BT_SEL 3
#define _BT4 &bt BT_SEL 4
#define _BT5 &bt BT_SEL 5
#define _BTCLR &bt BT_CLR

#define _VOLMUTE &kp C_MUTE
#define _VOLUP &kp C_VOL_UP
#define _VOLDN &kp C_VOL_DN
#define _VOLMAX &kp LS(C_VOL_UP)

#define _BRIUP &kp C_BRIGHTNESS_INC
#define _BRIDN &kp C_BRIGHTNESS_DEC
#define _BRIMIN &kp LS(C_BRIGHTNESS_DEC)
#define _BRIMAX &kp LS(C_BRIGHTNESS_INC)

#define _JUMP4 &sl LAYER4

ZMK_LAYER(_LAYER3,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _        _BRIMIN  _BRIDN   _BRIUP   _BRIMAX    &msc SCRL_LEFT &msc SCRL_DOWN &msc SCRL_UP &msc SCRL_RIGHT _
      _BTCLR   _VOLMUTE _VOLDN   _VOLUP   _VOLMAX    &mmv MOVE_LEFT &mmv MOVE_DOWN &mmv MOVE_UP &mmv MOVE_RIGHT _
               _BT0     _BT1     _BT2                &mkp LCLK      &mkp MCLK    &mkp RCLK
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                 _        _          _        _JUMP4
)
