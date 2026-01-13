/*
Main QWERTY layer.

Assuming US-international keyboard layout.
*/
#define _A &holdtap_left RALT A
#define _W &layertap_left LAYER_E1 W
#define _E &kp E
#define _R &kp R
#define _T &kp T

#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &layertap_right LAYER_D1 O
#define _P &kp P

#define _X &holdtap_left RALT X
#define _S &kp S
#define _D &kp D
#define _F &kp F
#define _G &holdtap_left LGUI G

#define _H &holdtap_right LGUI H
#define _J &kp J
#define _K &kp K
#define _L &kp L
ZMK_MOD_MORPH(__fslh,
  bindings = <&holdtap_right RALT FSLH>, <&kp BSLH>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _FSLH &__fslh

#define _C &holdtap_left LALT C
#define _V &holdtap_left LCTRL V
#define _B &holdtap_left LSHIFT B

#define _N &holdtap_right LSHIFT N
#define _M &holdtap_right LCTRL M
ZMK_MOD_MORPH(__dot,
  bindings = <&holdtap_right LALT DOT>, <&kp LS(SEMI)>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _DOT &__dot

// #define _CAPS &_caps_us LAYER_D1 0
ZMK_HOLD_TAP(_caps, _hold_tap_args(&kp, &_caps_us))
#define _CAPS &_caps LA(LC(LGUI)) 0

// #define _SPC &holdtap LA(LC(LGUI)) SPACE
#define _SPC &holdtap LSHIFT SPACE

#define _J_B1 &sl LAYER_B1
#define _J_C1 &sl LAYER_C1

ZMK_LAYER(_LAYER_A1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _  _     _W    _E    _R    _T    _Y    _U    _I    _O    _P    _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _  _A    _S    _D    _F    _G    _H    _J    _K    _L    _FSLH _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _  _     _C    _V    _B    _     _     _N    _M    _DOT  _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _SPC  _J_B1 _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)
