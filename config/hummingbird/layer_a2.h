#define DOT_ &holdtap_right LALT DOT

ZMK_MOD_MORPH(__fslh_,
  bindings = <&holdtap_right RALT LS(N7)>, <&kp LS(LA(N7))>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define FSLH_ &__fslh_

#define CAPS_ &_caps_no LAYER_D1 0
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
