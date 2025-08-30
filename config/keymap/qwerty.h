// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
#pragma once

#define _Q &kp Q
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
#define _G &hold_tap LGUI G
#define _H &hold_tap LGUI H
#define _J &kp J
#define _K &kp K
#define _L &kp L

#define _B &hmr LSHIFT B
#define _Z &kp Z
#define _X &hold_tap RALT X
#define _C &hold_tap LALT C
#define _V &hold_tap LCTRL V

#define _N &hold_tap LSHIFT N
#define _M &hold_tap LCTRL M

ZMK_MOD_PAIR(__0_COMMA, COMMA, RALT, SEMI)
#define _0_COMMA &__0_COMMA
ZMK_MOD_PAIR(__1_COMMA, COMMA, RALT, LS(COMMA))
#define _1_COMMA &__1_COMMA

ZMK_MOD_PAIR(__0_DOT, DOT, LALT, LS(SEMI))
#define _0_DOT &__0_DOT
ZMK_MOD_PAIR(__1_DOT, DOT, LALT, LS(DOT))
#define _1_DOT &__1_DOT

ZMK_MOD_PAIR(__0_FSLH, FSLH, RALT, BSLH)
#define _0_FSLH &__0_FSLH
ZMK_MOD_PAIR(__1_FSLH, LS(N7), RALT, LS(LA(N7)))
#define _1_FSLH &__1_FSLH
ZMK_UNICODE_PAIR(__2_FSLH, N0, N0, N2, F, N0, N0, N5, C)
#define _2_FSLH &__2_FSLH
