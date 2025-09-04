// HOST_OS: 0 us-int, 1 mac-no 2 mac-unicode
#pragma once

#define _HOME &kp HOME
#define _PG_DN &kp PG_DN
#define _PG_UP &kp PG_UP
#define _END &kp END
#define _PSCRN &kp PSCRN


#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGHT &kp RIGHT

// nop backspace
// nop percent

#define _0_EURO &hold_tap RALT LA(N5)
#define _1_EURO &hold_tap RALT LA(N4)
ZMK_UNICODE_SINGLE(__2_EURO, N2, N0, A, C)
#define _2_EURO &__2_EURO




#define _0_HASH2 &hml LSHIFT NON_US_HASH
ZMK_MOD_NODEAD(_acute, EQUAL)

#define _0_BSLH2 &hml LGUI NON_US_BSLH

#define _LGUI &kp LGUI
#define _LSHIFT &kp LSHIFT
#define _LCTRL &kp LCTRL
#define _LALT &kp LALT
#define _RALT &kp RALT
