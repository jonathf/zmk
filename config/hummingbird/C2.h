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

ZMK_LAYER(_LAYER_C2,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _HASH_   _PARA_   _LDANG_  _RDANG_  _QMARK_   _        _        _        _        _
      _SEMI_   _SQT_    _LT_     _GT_     _AMPS_    _        _        _        _        _
               _TILDE_  _GRAVE_  _ACUTE_                     _        _EXCL_   _PIPE_
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                 _JUMP0  _          _        _
)

