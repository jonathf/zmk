#define STAR_ &kp LS(BSLH)
#define AT_ &kp BSLH
#define LBRC_ &kp LA(LS(N8))
#define RBRC_ &kp LA(LS(N9))
#define EQ_ &kp LS(N0)

#define PLUS_ &kp MINUS

#define COMA_ &holdtap_left RALT COMMA
// ZMK_MOD_PAIR(__COMMA_, COMMA, RALT, LS(COMMA))
// #define _COMMA_ &__COMMA_
#define DQT_ &kp LS(N2)
#define LPAR_ &kp LS(N8)
#define RPAR_ &kp LS(N9)
#define DOLL_ &holdtap_left LGUI LS(N4)

#define DASH_ &holdtap_right LGUI FSLH

// #define _CARET_ &hold_tap LALT LS(RBRC)
#define CART_ &holdtap_left LALT LS(LA(RBRC))
#define LBKT_ &holdtap_left LCTRL LA(N8)
#define RBKT_ &holdtap_left LSHIFT LA(N9)

#define UNDR_ &holdtap_right RALT LS(FSLH)

ZMK_LAYER(_LAYER_B2,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   STAR_ AT_   LBRC_ RBRC_ EQ_   PLUS_ _     _     _     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   COMA_ DQT_  LPAR_ RPAR_ DOLL_ DASH_ _     _     _     UNDR_
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         CART_ LBKT_ RBKT_             _     _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     CAPS_ _SPC  _J_B2 _J_C2
//                  ╰─────┴─────┴─────┴─────╯
)
