/*
Common definitions.
*/
#define _ &none

#define _LEFT_HAND \
  LT0 LT1 LT2 LT3 LT4 \
  LM0 LM1 LM2 LM3 LM4 \
  LB1 LB2 LB3
#define _RIGHT_HAND \
  RT0 RT1 RT2 RT3 RT4 \
  RM0 RM1 RM2 RM3 RM4 \
  RB1 RB2 RB3

#define LAYER_A1 0
#define LAYER_A2 1
#define LAYER_B1 2
#define LAYER_B2 3
#define LAYER_C1 4
#define LAYER_C2 5
#define LAYER_D1 6
#define LAYER_E1 7

#define LAYER_US 0 2 4
#define LAYER_NO 1 3 5
#define LAYER_ALL 0 1 2 3 4 5 6 7

#define _hold_tap_args(bind1, bind2) \
    flavor = "balanced"; \
    require-prior-idle-ms = <100>; \
    tapping-term-ms = <200>; \
    quick-tap-ms = <150>; \
    bindings = <bind1>, <bind2>;

ZMK_HOLD_TAP(layertap_left, _hold_tap_args(&mo, &kp)
  hold-trigger-on-release;
  hold-trigger-key-positions = <_RIGHT_HAND>;
)
ZMK_HOLD_TAP(layertap_right, _hold_tap_args(&mo, &kp)
  hold-trigger-on-release;
  hold-trigger-key-positions = <_LEFT_HAND>;
)
ZMK_HOLD_TAP(holdtap, _hold_tap_args(&kp, &kp))
ZMK_HOLD_TAP(holdtap_left,
  _hold_tap_args(&kp, &kp)
  hold-trigger-on-release;
  hold-trigger-key-positions = <_RIGHT_HAND>;
)
ZMK_HOLD_TAP(holdtap_right,
  _hold_tap_args(&kp, &kp)
  hold-trigger-on-release;
  hold-trigger-key-positions = <_LEFT_HAND>;
)

ZMK_CAPS_WORD(__caps_us,
  continue-list = <UNDER MINUS BKSP DEL>;
)
ZMK_CAPS_WORD(__caps_no,
  continue-list = <FSLH LS(FSLH) BKSP DEL>;
)
ZMK_HOLD_TAP(_caps_us, _hold_tap_args(&mo, &__caps_us))
ZMK_HOLD_TAP(_caps_no, _hold_tap_args(&mo, &__caps_no))
