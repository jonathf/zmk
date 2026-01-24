/*
Main numerical layer.

Assuming US-international keyboard layout.
*/
#define _STAR &kp STAR
#define _AT &kp AT
#define _LBRC &kp LBRC
#define _RBRC &kp RBRC
#define _EQ &kp EQUAL

ZMK_MOD_MORPH(__plus,
  bindings = <&kp PLUS>, <&kp TILDE>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _PLUS &__plus
ZMK_MOD_MORPH(__n7,
  bindings = <&kp N7>, <&kp PIPE>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N7 &__n7
ZMK_MOD_MORPH(__n8,
  bindings = <&kp N8>, <&kp AMPS>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N8 &__n8
ZMK_MOD_MORPH(__n9,
  bindings = <&kp N9>, <&kp PRCNT>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N9 &__n9
ZMK_MOD_MORPH(__n0,
  bindings = <&kp N0>, <&kp UNDER>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N0 &__n0

// ZMK_BEHAVIOR(__comma, mod_morph,
//   bindings = <&holdtap_left RALT COMMA>, <&kp SEMI)>;
//   mods = <(MOD_LSFT|MOD_RSFT)>;
// )
// #define _COMA &__comma
#define _COMA &holdtap_left RALT COMMA
#define _DQT &kp DQT
#define _LPAR &kp LPAR
#define _RPAR &kp RPAR
#define _DOLL &holdtap_left LGUI DOLLAR

ZMK_MOD_MORPH(__dash,
  bindings = <&holdtap_right LGUI MINUS>, <&kp CARET>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _DASH &__dash

ZMK_MOD_MORPH(__n4,
  bindings = <&kp N4>, <&kp STAR>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N4 &__n4
ZMK_MOD_MORPH(__n5,
  bindings = <&kp N5>, <&kp HASH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N5 &__n5
ZMK_MOD_MORPH(__n6,
  bindings = <&kp N6>, <&kp DOLLAR>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N6 &__n6

#define _UNDR &holdtap_right RALT UNDER

#define _CART &holdtap_left LALT CARET
#define _LBKT &holdtap_left LCTRL LBKT
#define _RBKT &holdtap_left LSHIFT RBKT

ZMK_MOD_MORPH(__n1,
  bindings = <&holdtap_right LSHIFT N1>, <&kp FSLH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N1 &__n1

ZMK_MOD_MORPH(__n2,
  bindings = <&holdtap_right LCTRL N2>, <&kp QMARK>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N2 &__n2

ZMK_MOD_MORPH(__n3,
  bindings = <&holdtap_right LALT N3>, <&kp BSLH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _N3 &__n3

ZMK_LAYER(_LAYER_B1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _ _     _AT   _LBRC _RBRC _EQ   _PLUS _N7   _N8   _N9   _N0   _
//                                ~     |     &     %     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _ _COMA _DQT  _LPAR _RPAR _DOLL _DASH _N4   _N5   _N6   _UNDR _
//                                ^     *     #     $
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _ _     _CART _LBKT _RBKT _     _     _N1   _N2   _N3   _     _
//                                      /     ?     \
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _SPC  _     _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)

