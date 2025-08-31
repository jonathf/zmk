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
#define _ACUTE &hml LSHIFT RA(SQT)

#define _EXCL &hmr LCTRL EXCL
#define _PIPE &hmr LALT PIPE

#define _SPACE &hold_tap LA(LC(LGUI)) SPACE
#define _JUMP_25 &to 5

ZMK_LAYER(NAVIGATION,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _HASH    _PARA    _LDANG   _RDANG   _QMARK     _HOME    _PG_DN   _PG_UP   _END     _PSCRN
      _SEMI    _SQT     _LT      _GT      _AMPS      _LEFT    _DOWN    _UP      _RIGHT   _PRCNT
               _TILDE   _GRAVE   _ACUTE                     &kp LSHIFT _EXCL    _PIPE
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                _JUMP_25 _SPACE     _        _
)
