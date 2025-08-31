#pragma once

#define _W &kp W
#define _E &kp E
#define _R &kp R
#define _T &kp T
#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &kp O
#define _P &kp P

#define _A &kp A
#define _S &kp S
#define _D &kp D
#define _F &kp F
#define _G &hmr LGUI G
#define _H &hml LGUI H
#define _J &kp J
#define _K &kp K
#define _L &kp L

#define _B &hml LSHIFT B
#define _X &hml RALT X
#define _C &hml LALT C
#define _V &hml LCTRL V
#define _N &hmr LSHIFT N
#define _M &hmr LCTRL M

ZMK_MOD_PAIR(__dot_us, DOT, LALT, LS(SEMI))
#define _DOT_US &__dot_us
ZMK_MOD_PAIR(__fslh_us, FSLH, RALT, BSLH)
#define _FSLH_US &__fslh_us

ZMK_BEHAVIOR(__capsword_us, caps_word, continue-list = <UNDER MINUS BKSP DEL>;)
ZMK_HOLDTAP(__caps_us, mo, __caps_us)
#define _CAPS_US &__caps_us 3 0
#define _SPC_US &hold_tap LA(LC(LGUI)) SPACE
#define _JUMP_01 &sl 1
#define _JUMP_02 &sl 2

ZMK_LAYER(LAYER0,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _A       _W       _E       _R       _T         _Y       _U       _I       _O       _P
      _X       _S       _D       _F       _G         _H       _J       _K       _L       _FSLH_US
               _C       _V       _B                           _N       _M       _DOT_US
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                _CAPS_US _SPC_US    _JUMP_01 _JUMP_02
)
