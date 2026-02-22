/*
Main navigation layer.

Assuming US-international keyboard layout.
*/
#define _EXCL &kp EXCL
#define _LDAN &kp RA(LBKT)
#define _RDAN &kp RA(RBKT)
#define _QMRK &kp QMARK

#define _HOME &kp HOME
#define _PGDN &kp PG_DN
#define _PGUP &kp PG_UP
#define _END &kp END

#define _SEMI &holdtap_left RALT SEMI
#define _SQT &kp SQT
#define _LT &kp LT
#define _GT &kp GT
#define _AMPS &holdtap_right LGUI AMPS

#define _LEFT &holdtap_right LGUI LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGT &kp RIGHT

#define _TILD &holdtap_left LALT TILDE
#define _GRAV &holdtap_left LCTRL GRAVE
ZMK_MACRO(__acute_nodead,
  bindings = <&kp RA(SQT) &kp RA(SQT)>;
)
ZMK_HOLD_TAP(__acute, _hold_tap_args(&kp, &__acute_nodead))
#define _ACUT &__acute LSHIFT 0


ZMK_LAYER(_LAYER_C,                                             TOP_START_PADDING
//      ╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
         _EXCL _LDAN _RDAN _QMRK _HOME _PGDN _PGUP _END         TOP_END_PADDING MIDDLE_START_PADDING
//╭─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────╮
   _SEMI _SQT  _LT   _GT   _AMPS _LEFT _DOWN _UP   _RIGT _      MIDDLE_END_PADDING BOTTOM_START_PADDING
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _TILD _GRAV _ACUT    _PAD     _     _     _            BOTTOM_END_PADDING THUMB_START_PADDING
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _CAPS _SPC  _J_B  _J_C                     THUMB_END_PADDING
//                  ╰─────┴─────┴─────┴─────╯
)
