#define DOT_ &holdtap_right LALT DOT
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
#define FSLH_ &__fslh_
// ZMK_MOD_PAIR(__FSLH_, LS(N7), RALT, LS(LA(N7)))
// ZMK_UNICODE_PAIR(__2_FSLH, N0, N0, N2, F, N0, N0, N5, C)
// #define _2_FSLH &__2_FSLH

#define CAPS_ &_caps_no LAYER_D1 0
// ZMK_HOLDTAP(__caps_, mo, __caps_)
#define _J_B2 &sl LAYER_B2
#define _J_C2 &sl LAYER_C2

ZMK_LAYER(_LAYER_A2,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _     _     _     _     _     _     _     _     _     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   _     _     _     _     _     _     _     _     _     FSLH_
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _     _     _                 _     _     DOT_
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     CAPS_ _SPC  _J_B2 _J_C2
//                  ╰─────┴─────┴─────┴─────╯
)
