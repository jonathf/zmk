#pragma once

#define _A &kp A
#define _W &kp W
#define _E &kp E
#define _R &kp R
#define _T &kp T

#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &kp O
#define _P &kp P

#define _X &hml RALT X
#define _S &kp S
#define _D &kp D
#define _F &kp F
#define _G &hml LGUI G

#define _H &hmr LGUI H
#define _J &kp J
#define _K &kp K
#define _L &kp L
// ZMK_MOD_PAIR(__fslh, FSLH, RALT, BSLH)
ZMK_MOD_MORPH(__fslh,
  bindings = <&hmr RALT FSLH>, <&kp BSLH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _FSLH &__fslh

#define _C &hml LALT C
#define _V &hml LCTRL V
#define _B &hml LSHIFT B

#define _N &hmr LSHIFT N
#define _M &hmr LCTRL M
// ZMK_MOD_PAIR(__dot, DOT, LALT, LS(SEMI))
ZMK_MOD_MORPH(__dot,
  bindings = <&hmr RALT DOT>, <&kp LS(SEMI)>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _DOT &__dot

ZMK_CAPS_WORD(__caps,
  continue-list = <UNDER MINUS BKSP DEL>;
)
ZMK_HOLD_TAP(_caps,
    flavor="tap-preferred";
    tapping-term-ms=<200>;
    quick-tap-ms=<100>;
    global-quick-tap;
    hold-trigger-on-release;
    bindings = <&mo>, <&__caps>;
    require-prior-idle-ms=<80>;
)
#define _CAPS &_caps LAYER3 0
#define _SPACE &hold_tap LA(LC(LGUI)) SPACE
#define _JUMP1 &sl LAYER1
#define _JUMP2 &sl LAYER2

ZMK_LAYER(_LAYER0,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _A       _W       _E       _R       _T         _Y       _U       _I       _O       _P
      _X       _S       _D       _F       _G         _H       _J       _K       _L       _FSLH
               _C       _V       _B                           _N       _M       _DOT
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                _CAPS     _SPACE     _JUMP1   _JUMP2
)

ZMK_LAYER(_LAYER0_,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _A       _W       _E       _R       _T         _Y       _U       _I       _O       _P
      _X       _S       _D       _F       _G         _H       _J       _K       _L       _FSLH
               _C       _V       _B                           _N       _M       _DOT
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                _CAPS     _SPACE     _JUMP1   _JUMP2
)

// #define _DOT_ &hmr LALT DOT
// // ZMK_BEHAVIOR(__dot_, mod_morph,
// //   bindings = <&hmr RALT DOT>, <&kp LS(DOT)>;
// //   mods = <(MOD_LSFT|MOD_RSFT)>;
// // )
// // #define _DOT &__dot
// // ZMK_MOD_PAIR(__DOT_, DOT, LALT, LS(DOT))
// ZMK_MOD_MORPH(__fslh_,
//   bindings = <&hmr RALT LS(N7)>, <&kp LS(LA(N7))>;
//   mods = <(MOD_LSFT|MOD_RSFT)>;
// )
// #define _FSLH_ &__fslh_
// // ZMK_MOD_PAIR(__FSLH_, LS(N7), RALT, LS(LA(N7)))
// // ZMK_UNICODE_PAIR(__2_FSLH, N0, N0, N2, F, N0, N0, N5, C)
// // #define _2_FSLH &__2_FSLH
//
// ZMK_CAPS_WORD(__caps_,
//   continue-list = <FSLH LS(FSLH) BKSP DEL>;
// )
// ZMK_HOLD_TAP(_caps__,
//     flavor="tap-preferred";
//     tapping-term-ms=<200>;
//     quick-tap-ms=<100>;
//     global-quick-tap;
//     hold-trigger-on-release;
//     bindings = <&mo>, <&__caps_>;
//     require-prior-idle-ms=<80>;
// )
// #define _CAPS_ &_caps__ LAYER3 0
// // ZMK_HOLDTAP(__caps_, mo, __caps_)
// #define _JUMP1_ &sl LAYER1_
// #define _JUMP2_ &sl LAYER2_
//
// ZMK_LAYER(_LAYER0_,
// //  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
//       _        _        _        _        _          _        _        _        _        _
//       _        _        _        _        _          _        _        _        _        _FSLH_
//                _        _        _                            _        _        _DOT_
// //           ╰────────┴────────┼────────┼────────╮ ╭────────┼────────┼────────┴────────╯
//                                  _CAPS_   _          _JUMP1_  _JUMP2_
// )
