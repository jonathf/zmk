// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
// !"Å \`789  !"Å ``/()
// (Æ)= +456  (Æ)= ? %&
// %&å¨?0123  %&Å ?=!"
#pragma once

#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9

#define _0_AA &kp RA(W)
#define _1_AA &kp LBKT
ZMK_UNICODE_PAIR(__2_AA, N0, N0, E, N5, N0, N0, C, N5)
#define _2_AA &__2_AA

#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6

#define _0_OE &kp RA(L)
#define _1_OE &kp SEMI
ZMK_UNICODE_PAIR(__2_OE, N0, N0, F, N8, N0, N0, D, N8)
#define _2_OE &__2_OE

#define _1_PRCNT &hmr RALT LS(N5)


#define _N0 &kp N0
#define _N1 &hmr LSHIFT N1
#define _N2 &hmr LCTRL N2
#define _N3 &hmr LALT N3

#define _0_AE &kp RA(Z)
#define _1_AE &hold_tap RALT SQT
ZMK_UNICODE_PAIR(__2_AE, N0, N0, E, N6, N0, N0, C, N6)
#define _2_AE &__2_AE

