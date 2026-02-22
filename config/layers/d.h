#define _HASH &kp HASH
#define _EURO &kp RA(N5)
#define _PIPE &kp PIPE
#define _PRCN &kp PRCNT

ZMK_MOD_MORPH(__fslh,
  bindings = <&kp FSLH>, <&kp BSLH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _FSLH &__fslh
#define _BSLH &holdtap_right LSHIFT BSLH
#define _UNDR &holdtap_left LGUI UNDER

#define _DOT &__dot
#define _STAR &kp STAR
#define _PARA &holdtap_right RALT RA(SEMI)

#define _CUTE &holdtap_left LSHIFT RA(SQT)

ZMK_LAYER(_LAYER_D,                                             TOP_START_PADDING
//      ╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
         _HASH _EURO _     _     _     _     _     _            TOP_END_PADDING MIDDLE_START_PADDING
//╭─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────╮
   _     _STAR _BSLH _FSLH _UNDR _     _     _     _     _PARA  MIDDLE_END_PADDING BOTTOM_START_PADDING
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _PRCN _PIPE _CUTE    _PAD     _     _     _            BOTTOM_END_PADDING THUMB_START_PADDING
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _CAPS _SPC  _J_B  _J_C                     THUMB_END_PADDING
//                  ╰─────┴─────┴─────┴─────╯
)
