#define HASH_ &kp LS(N3)
#define PARA_ &kp LS(NON_US_BSLH)
// ZMK_UNICODE_SINGLE(__2_PARA, N0, N0, A, N7)
// #define _2_PARA &__2_PARA
#define LDAN_ &kp LS(LA(V))
// ZMK_UNICODE_SINGLE(__2_LDANG, N0, N0, A, B)
// #define _2_LDANG &__2_LDANG
#define RDAN_ &kp LS(LA(B))
// ZMK_UNICODE_SINGLE(__2_RDANG, N0, N0, B, B)
// #define _2_RDANG &__2_RDANG
#define QMRK_ &kp UNDER

#define SEMI_ &holdtap_left RALT LS(COMMA)
#define SQT_ &kp NON_US_BSLH
#define LT_ &kp GRAVE
#define GT_ &kp LS(GRAVE)
#define AMPS_ &kp LS(N6)

#define TILD_ &holdtap_left LALT LC(RBRC)
// #define _TILDE_ &hold_tap LALT LA(RBRC)
// ZMK_MOD_NODEAD(_tilde, LA(RBRC))
// #define _TILDE_ &_tilde LALT 0

#define GRAV_ &kp LS(EQUAL)
// #define _GRAVE__ &kp LS(EQUAL)
// ZMK_MOD_NODEAD(_grave_, LS(EQUAL))
// #define _GRAVE_ &_grave_ LCTRL 0

// #define _ACUTE__ &kp EQUAL
// #define _ACUTE_ &_acute LSHIFT 0
// ZMK_UNICODE_SINGLE(__2_ACUTE, N0, N0, B, N4)
// ZMK_MOD_NODEAD(_acute_, LS(EQUAL))
// #define _ACUTE_ &_acute_ LSHIFT 0
ZMK_BEHAVIOR(__acute_, macro,
  bindings = <&kp EQUAL &kp EQUAL>;
)
#define ACUT_ &__acute_

#define EXCL_ &kp LS(N1)
#define PIPE_ &holdtap_right LALT LA(N7)

#define _J_A1 &to LAYER_A1

ZMK_LAYER(_LAYER_C2,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   HASH_ PARA_ LDAN_ RDAN_ QMRK_ _     _     _     _     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   SEMI_ SQT_  LT_   GT_   AMPS_ _     _     _     _     _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         TILD_ GRAV_ ACUT_             _     EXCL_ PIPE_
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _J_A1 _     _J_B2 _J_C2
//                  ╰─────┴─────┴─────┴─────╯
)

