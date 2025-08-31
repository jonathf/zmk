#pragma once

#define _HASH &kp HASH
#define _PARA &kp LA(S)
#define _LDANG &kp RA(LBKT)
#define _RDANG &kp RA(RBKT)
#define _QMARK &kp QMARK

#define _HOME &kp HOME
#define _PG_DN &kp PG_DN
#define _PG_UP &kp PG_UP
#define _END &kp END
#define _PSCRN &kp PSCRN

#define _SEMI &hml RALT SEMI
#define _SQT &kp SQT
#define _LT &kp LT
#define _GT &kp GT
#define _AMPS &kp AMPS

#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGHT &kp RIGHT
#define _PRCNT &hmr RALT PRCNT

#define _TILDE &hml LALT TILDE
#define _GRAVE &hml LCTRL GRAVE
// #define _ACUTE &hml LSHIFT RA(SQT)
ZMK_MOD_NODEAD(_acute, RA(SQT))
#define _ACUTE &_acute LSHIFT 0

#define _EXCL &hmr LCTRL EXCL
#define _PIPE &hmr LALT PIPE

#define _SPACE &hold_tap LA(LC(LGUI)) SPACE
#define _JUMP0_ &to LAYER0_

ZMK_LAYER(LAYER2,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _HASH    _PARA    _LDANG   _RDANG   _QMARK     _HOME    _PG_DN   _PG_UP   _END     _PSCRN
      _SEMI    _SQT     _LT      _GT      _AMPS      _LEFT    _DOWN    _UP      _RIGHT   _PRCNT
               _TILDE   _GRAVE   _ACUTE                     &kp LSHIFT _EXCL    _PIPE
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                 _JUMP0_  _          _        _
)

#define _HASH_ &kp LS(N3)
#define _PARA_ &kp LS(NON_US_BSLH)
// ZMK_UNICODE_SINGLE(__2_PARA, N0, N0, A, N7)
// #define _2_PARA &__2_PARA
#define _LDANG_ &kp LS(LA(V))
// ZMK_UNICODE_SINGLE(__2_LDANG, N0, N0, A, B)
// #define _2_LDANG &__2_LDANG
#define _RDANG_ &kp LS(LA(B))
// ZMK_UNICODE_SINGLE(__2_RDANG, N0, N0, B, B)
// #define _2_RDANG &__2_RDANG
#define _QMARK_ &kp UNDER

#define _SEMI_ &hml RALT LS(COMMA)
#define _SQT_ &kp NON_US_BSLH
#define _LT_ &kp GRAVE
#define _GT_ &kp LS(GRAVE)
#define _AMPS_ &kp LS(N6)

#define _TILDE_ &hml LALT LC(RBRC)
// #define _TILDE_ &hold_tap LALT LA(RBRC)
// ZMK_MOD_NODEAD(_tilde, LA(RBRC))
// #define _TILDE_ &_tilde LALT 0

// #define _GRAVE_ &kp LS(EQUAL)
// #define _GRAVE__ &kp LS(EQUAL)
ZMK_MOD_NODEAD(_grave_, LS(EQUAL))
#define _GRAVE_ &_grave_ LCTRL 0

// #define _ACUTE__ &kp EQUAL
// #define _ACUTE_ &_acute LSHIFT 0
// ZMK_UNICODE_SINGLE(__2_ACUTE, N0, N0, B, N4)
ZMK_MOD_NODEAD(_acute_, LS(EQUAL))
#define _ACUTE_ &_acute_ LSHIFT 0

#define _EXCL_ &kp LS(N1)
#define _PIPE_ &hmr LALT LA(N7)

#define _JUMP0 &to LAYER0

ZMK_LAYER(LAYER2_,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _HASH_   _PARA_   _LDANG_  _RDANG_  _QMARK_   _        _        _        _        _
      _SEMI_   _SQT_    _LT_     _GT_     _AMPS_    _        _        _        _        _
               _TILDE_  _GRAVE_  _ACUTE_                     _        _EXCL_   _PIPE_
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                 _JUMP0  _          _        _
)
