#define _HASH &kp HASH
#define _PARA &kp RA(SEMI)
#define _LDAN &kp RA(LBKT)
#define _RDAN &kp RA(RBKT)
#define _QMRK &kp QMARK

#define _HOME &kp HOME
#define _PGDN &kp PG_DN
#define _PGUP &kp PG_UP
#define _END &kp END
#define _PSCR &kp PSCRN

#define _SEMI &holdtap_left RALT SEMI
#define _SQT &kp SQT
#define _LT &kp LT
#define _GT &kp GT
#define _AMPS &kp AMPS

#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGT &kp RIGHT
#define _PRCN &holdtap_right RALT PRCNT

#define _TILD &holdtap_left LALT TILDE
#define _GRAV &holdtap_left LCTRL GRAVE

ZMK_MACRO(__acute_nodead,
  bindings = <&kp RA(SQT) &kp RA(SQT)>;
)
ZMK_HOLD_TAP(__acute, _hold_tap_args(&kp, &__acute_nodead))
#define _ACUT &__acute LSHIFT 0

#define _EURO &holdtap_right LSHIFT RA(N5)
#define _EXCL &holdtap_right LCTRL EXCL
#define _PIPE &holdtap_right LALT PIPE

#define _J_A2 &to LAYER_A2


ZMK_LAYER(_LAYER_C1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   _HASH _PARA _LDAN _RDAN _QMRK _HOME _PGDN _PGUP _END  _PSCR
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   _SEMI _SQT  _LT   _GT   _AMPS _LEFT _DOWN _UP   _RIGT _PRCN
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         _TILD _GRAV _ACUT             _EURO _EXCL _PIPE
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     _J_A2 _     _J_B1 _J_C1
//                  ╰─────┴─────┴─────┴─────╯
)
