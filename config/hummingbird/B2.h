#define _STAR_ &kp LS(BSLH)
#define _AT_ &kp BSLH
#define _LBRC_ &kp LA(LS(N8))
#define _RBRC_ &kp LA(LS(N9))
#define _EQUAL_ &kp LS(N0)

#define _PLUS_ &kp MINUS

#define _COMMA_ &holdtap_left RALT COMMA
// ZMK_MOD_PAIR(__COMMA_, COMMA, RALT, LS(COMMA))
// #define _COMMA_ &__COMMA_
#define _DQT_ &kp LS(N2)
#define _LPAR_ &kp LS(N8)
#define _RPAR_ &kp LS(N9)
#define _DOLLAR_ &holdtap_left LGUI LS(N4)

#define _MINUS_ &holdtap_right LGUI FSLH

// #define _CARET_ &hold_tap LALT LS(RBRC)
#define _CARET_ &holdtap_left LALT LS(LA(RBRC))
#define _LBKT_ &holdtap_left LCTRL LA(N8)
#define _RBKT_ &holdtap_left LSHIFT LA(N9)

#define _UNDER_ &holdtap_right RALT LS(FSLH)

ZMK_LAYER(_LAYER_B2,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _STAR_   _AT_     _LBRC_   _RBRC_   _EQUAL_    _PLUS_   _        _        _        _
//  ├────────┼────────┼────────┼────────┼────────┤ ├────────┼────────┼────────┼────────┼────────┤
      _COMMA_  _DQT_    _LPAR_   _RPAR_   _DOLLAR_   _MINUS_  _        _        _        _UNDER_
//  ╰────────┼────────┼────────┼────────┼────────╯ ╰────────┼────────┼────────┼────────┼────────╯
               _CARET_  _LBKT_   _RBKT_                       _        _        _
//           ╰────────┴────────┼────────┼────────╮ ╭────────┼────────┼────────┴────────╯
                                 _CAPS_   _SPACE     _JUMPB2  _JUMPC2
//                             ╰────────┴────────╯ ╰────────┴────────╯
)

