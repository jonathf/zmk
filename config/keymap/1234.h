// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
// !"Å \`789  !"Å ``/()
// (Æ)= +456  (Æ)= ? %&
// %&å¨?0123  %&Å ?=!"
#pragma once

#define _0_EXCL &hmr LCTRL EXCL
#define _1_EXCL &kp LS(N1)
#define _1_AT &kp BSLH
#define _1_LBRC &kp LA(LS(N8))
#define _1_RBRC &kp LA(LS(N9))
#define _1_EQUAL &kp LS(N0)

#define _1_PLUS &kp MINUS
#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9

#define _0_AA &kp RA(W)
#define _1_AA &kp LBKT
ZMK_UNICODE_PAIR(__2_AA, N0, N0, E, N5, N0, N0, C, N5)
#define _2_AA &__2_AA

#define _1_STAR &kp LS(BSLH)
#define _1_DQT &kp LS(N2)
#define _1_LPAR &kp LS(N8)
#define _1_RPAR &kp LS(N9)
#define _1_DOLLAR &hml LGUI LS(N4)

#define _1_MINUS &hmr LGUI FSLH

#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6

#define _0_OE &kp RA(L)
#define _1_OE &kp SEMI
ZMK_UNICODE_PAIR(__2_OE, N0, N0, F, N8, N0, N0, D, N8)
#define _2_OE &__2_OE

#define _0_SEMI &hml RALT SEMI
#define _1_SEMI &hml RALT LS(COMMA)
#define _0_PRCNT &hmr RALT PRCNT
#define _1_PRCNT &hmr RALT LS(N5)

// #define _1_CARET &hold_tap LALT LS(RBRC)
#define _1_CARET &hold_tap LALT LS(LA(RBRC))

#define _1_LBKT &hml LCTRL LA(N8)
#define _1_RBKT &hml LSHIFT LA(N9)
#define _1_UNDER &hmr RALT LS(FSLH)

#define _N0 &kp N0
#define _N1 &hmr LSHIFT N1
#define _N2 &hmr LCTRL N2
#define _N3 &hmr LALT N3

#define _0_AE &kp RA(Z)
#define _1_AE &hold_tap RALT SQT
ZMK_UNICODE_PAIR(__2_AE, N0, N0, E, N6, N0, N0, C, N6)
#define _2_AE &__2_AE

