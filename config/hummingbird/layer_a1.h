#define _A &kp A
#define _W &kp W
#define _E &kp E
#define _R &kp R
#define _T &kp T

#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &kp O
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
  bindings = <&holdtap_right RALT DOT>, <&kp LS(SEMI)>;
  mods = <(MOD_LSFT|MOD_RSFT)>;
)
#define _DOT &__dot

ZMK_CAPS_WORD(__caps,
  continue-list = <UNDER MINUS BKSP DEL>;
)
ZMK_HOLD_TAP(_caps,
    flavor="tap-preferred";
    tapping-term-ms=<200>;
    quick-tap-ms=<100>;
    global-quick-tap;
    hold-trigger-on-release;
    bindings = <&mo>, <&__caps>;
    require-prior-idle-ms=<80>;
)
#define _CAPS &_caps LAYER_D1 0
#define _SPC &holdtap LA(LC(LGUI)) SPACE
#define _J_B1 &sl LAYER_B1
#define _J_C1 &sl LAYER_C1

ZMK_LAYER(_LAYER_A1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _A    _W    _E    _R    _T    _Y    _U    _I    _O    _P
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   _X    _S    _D    _F    _G    _H    _J    _K    _L    _FSLH
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _C    _V    _B                 _N    _M    _DOT
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _CAPS _SPC  _J_B1 _J_C1
//                  ╰─────┴─────┴─────┴─────╯
)
