// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
#pragma once

ZMK_MOD_PAIR(__1_COMMA, COMMA, RALT, LS(COMMA))
#define _1_COMMA &__1_COMMA

ZMK_MOD_PAIR(__1_DOT, DOT, LALT, LS(DOT))
#define _1_DOT &__1_DOT

ZMK_MOD_PAIR(__1_FSLH, LS(N7), RALT, LS(LA(N7)))
#define _1_FSLH &__1_FSLH
ZMK_UNICODE_PAIR(__2_FSLH, N0, N0, N2, F, N0, N0, N5, C)
#define _2_FSLH &__2_FSLH
