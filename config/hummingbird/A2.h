#define _ &none

#define _DOT_ &holdtap_right LALT DOT
// ZMK_BEHAVIOR(__dot_, mod_morph,
//   bindings = <&holdtap_right RALT DOT>, <&kp LS(DOT)>;
//   mods = <(MOD_LSFT|MOD_RSFT)>;
// )
// #define _DOT &__dot
// ZMK_MOD_PAIR(__DOT_, DOT, LALT, LS(DOT))
ZMK_MOD_MORPH(__fslh_,
  bindings = <&holdtap_right RALT LS(N7)>, <&kp LS(LA(N7))>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _FSLH_ &__fslh_
// ZMK_MOD_PAIR(__FSLH_, LS(N7), RALT, LS(LA(N7)))
// ZMK_UNICODE_PAIR(__2_FSLH, N0, N0, N2, F, N0, N0, N5, C)
// #define _2_FSLH &__2_FSLH

ZMK_CAPS_WORD(__caps_,
  continue-list = <FSLH LS(FSLH) BKSP DEL>;
)
ZMK_HOLD_TAP(_caps_,
    flavor="tap-preferred";
    tapping-term-ms=<200>;
    quick-tap-ms=<100>;
    global-quick-tap;
    hold-trigger-on-release;
    bindings = <&mo>, <&__caps_>;
    require-prior-idle-ms=<80>;
)
#define _CAPS_ &_caps_ LAYER_D1 0
// ZMK_HOLDTAP(__caps_, mo, __caps_)
#define _JUMPB2 &sl LAYER_B2
#define _JUMPC2 &sl LAYER_C2

ZMK_LAYER(_LAYER_A2,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _        _        _        _        _          _        _        _        _        _
//  ├────────┼────────┼────────┼────────┼────────┤ ├────────┼────────┼────────┼────────┼────────┤
      _        _        _        _        _          _        _        _        _        _FSLH_
//  ╰────────┼────────┼────────┼────────┼────────╯ ╰────────┼────────┼────────┼────────┼────────╯
               _        _        _                            _        _        _DOT_
//           ╰────────┴────────┼────────┼────────╮ ╭────────┼────────┼────────┴────────╯
                                 _CAPS_   _          _        _
//                             ╰────────┴────────╯ ╰────────┴────────╯
)
