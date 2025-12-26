/*
Main numerical layer.

Assuming US-international keyboard layout.
*/
#define _STAR &kp STAR
#define _AT &kp AT
#define _LBRC &kp LBRC
#define _RBRC &kp RBRC
#define _EQ &kp EQUAL

#define _PLUS &kp PLUS
#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9
#define _N0 &kp N0

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

#define _DASH &holdtap_right LGUI MINUS
#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6
#define _UNDR &holdtap_right RALT UNDER

#define _CART &holdtap_left LALT CARET
#define _LBKT &holdtap_left LCTRL LBKT
#define _RBKT &holdtap_left LSHIFT RBKT

#define _N1 &holdtap_right LSHIFT N1
#define _N2 &holdtap_right LCTRL N2
#define _N3 &holdtap_right LALT N3

ZMK_LAYER(_LAYER_B1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _ _     _AT   _LBRC _RBRC _EQ   _PLUS _N7   _N8   _N9   _N0   _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _ _COMA _DQT  _LPAR _RPAR _DOLL _DASH _N4   _N5   _N6   _UNDR _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _ _     _CART _LBKT _RBKT _     _     _N1   _N2   _N3   _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _SPC  _     _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)
