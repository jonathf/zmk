#pragma once

#define _STAR &kp STAR
#define _AT &kp AT
#define _LBRC &kp LBRC
#define _RBRC &kp RBRC
#define _EQUAL &kp EQUAL

#define _PLUS &kp PLUS
#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9
#define _N0 &kp N0

ZMK_MOD_PAIR(__COMMA, COMMA, RALT, SEMI)
#define _COMMA &__COMMA
#define _DQT &kp DQT
#define _LPAR &kp LPAR
#define _RPAR &kp RPAR
#define _DOLLAR &hml LGUI DOLLAR

#define _MINUS &hmr LGUI MINUS
#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6
#define _UNDER &hmr RALT UNDER

#define _CARET &hml LALT CARET
#define _LBKT &hml LCTRL LBKT
#define _RBKT &hml LSHIFT RBKT

#define _N1 &kp N1
#define _N2 &kp N2
#define _N3 &kp N3

#define _SPACE &hold_tap LA(LC(LGUI)) SPACE

ZMK_LAYER(LAYER1,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _STAR    _AT      _LBRC    _RBRC    _EQUAL     _PLUS    _N7      _N8      _N9     _N0
      _COMMA   _DQT     _LPAR    _RPAR    _DOLLAR    _MINUS   _N4      _N5      _N6     _UNDER
               _CARET   _LBKT    _RBKT                        _N1      _N2      _N3
//           ╰────────┴────────┼────────┼────────┤ ├────────┼────────┼────────┴────────╯
                                 _        _SPACE     _        _
)
