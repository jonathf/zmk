/*
Main navigation layer.

Assuming US-international keyboard layout.
*/
#define _HASH &kp HASH
#define _LDAN &kp RA(LBKT)
#define _RDAN &kp RA(RBKT)

#define _HOME &kp HOME
#define _PGDN &kp PG_DN
#define _PGUP &kp PG_UP
#define _END &kp END

#define _SEMI &holdtap_left RALT SEMI
#define _SQT &kp SQT
#define _LT &kp LT
#define _GT &kp GT

#define _LEFT &holdtap_right LGUI LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGT &kp RIGHT

#define _GRAV &holdtap_left LCTRL GRAVE
ZMK_MACRO(__acute_nodead,
  bindings = <&kp RA(SQT) &kp RA(SQT)>;
)
ZMK_HOLD_TAP(__acute, _hold_tap_args(&kp, &__acute_nodead))
#define _ACUT &__acute LSHIFT 0


ZMK_LAYER(_LAYER_C1,
//      ╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _     _HASH _LDAN _RDAN _     _HOME _PGDN _PGUP _END  _
//╭─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────╮
   _SEMI _SQT  _LT   _GT   _     _LEFT _DOWN _UP   _RIGT _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
   _     _     _GRAV _ACUT _     _     _     _     _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _CAPS _SPC  _     _     _J_B1 _J_C1
//            ╰─────┴─────┴─────┴─────┴─────┴─────╯
)
