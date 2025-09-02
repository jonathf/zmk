#define _HASH &kp HASH
#define _PARA &kp RA(SEMI)
#define _LDANG &kp RA(LBKT)
#define _RDANG &kp RA(RBKT)
#define _QMARK &kp QMARK

#define _HOME &kp HOME
#define _PG_DN &kp PG_DN
#define _PG_UP &kp PG_UP
#define _END &kp END
#define _PSCRN &kp PSCRN

#define _SEMI &holdtap_left RALT SEMI
#define _SQT &kp SQT
#define _LT &kp LT
#define _GT &kp GT
#define _AMPS &kp AMPS

#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGHT &kp RIGHT
#define _PRCNT &holdtap_right RALT PRCNT

#define _TILDE &holdtap_left LALT TILDE
#define _GRAVE &holdtap_left LCTRL GRAVE

// #define _ACUTE &holdtap_left LSHIFT RA(SQT)
ZMK_BEHAVIOR(__acute_nodead, macro,
  bindings = <&kp RA(SQT) &kp RA(SQT)>;
)
ZMK_HOLD_TAP(__acute
  bindings = <&kp>, <&__acute_nodead>;
)
#define _ACUTE &__acute LSHIFT 0

#define _EXCL &holdtap_right LCTRL EXCL
#define _PIPE &holdtap_right LALT PIPE

#define _JUMPA1 &to LAYER_A1

ZMK_LAYER(_LAYER_C1,
//  ╭────────┬────────┬────────┬────────┬────────╮ ╭────────┬────────┬────────┬────────┬────────╮
      _HASH    _PARA    _LDANG   _RDANG   _QMARK     _HOME    _PG_DN   _PG_UP   _END     _PSCRN
//  ├────────┼────────┼────────┼────────┼────────┤ ├────────┼────────┼────────┼────────┼────────┤
      _SEMI    _SQT     _LT      _GT      _AMPS      _LEFT    _DOWN    _UP      _RIGHT   _PRCNT
//  ╰────────┼────────┼────────┼────────┼────────╯ ╰────────┼────────┼────────┼────────┼────────╯
               _TILDE   _GRAVE   _ACUTE                       _        _EXCL    _PIPE
//           ╰────────┴────────┼────────┼────────╮ ╭────────┼────────┼────────┴────────╯
                                 _JUMPA1  _          _JUMPB1  _JUMPC1
//                             ╰────────┴────────╯ ╰────────┴────────╯
)
