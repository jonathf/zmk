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

ZMK_LAYER(_LAYER_D1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
_TS      _HASH _EURO _     _     _     _     _     _         _TE
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
_MS _    _STAR _BSLH _FSLH _UNDR _     _     _     _    _PARA _ME
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
_BS      _PRCN _PIPE _CUTE     _BM     _     _     _         _BE
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _HS   _CAPS _SPC  _J_B1 _J_C1 _HE
//                  ╰─────┴─────┴─────┴─────╯
)
