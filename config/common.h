ZMK_HOLD_TAP(holdtap_left,
  flavor = "balanced";
  require-prior-idle-ms = <100>;
  tapping-term-ms = <200>;
  quick-tap-ms = <150>;
  bindings = <&kp>, <&kp>;
  hold-trigger-on-release;
  hold-trigger-key-positions = <_RIGHT_HAND>;
)
ZMK_HOLD_TAP(holdtap_right,
  flavor = "balanced";
  require-prior-idle-ms = <100>;
  tapping-term-ms = <200>;
  quick-tap-ms = <150>;
  bindings = <&kp>, <&kp>;
  hold-trigger-on-release;
  hold-trigger-key-positions = <_LEFT_HAND>;
)
ZMK_HOLD_TAP(holdtap,
  flavor = "balanced";
  require-prior-idle-ms = <100>;
  tapping-term-ms = <200>;
  quick-tap-ms = <150>;
  bindings = <&kp>, <&kp>;
)
