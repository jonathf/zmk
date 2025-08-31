/*
Pairs:
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
        Q         4tb               ins  del
             esc  tab               cr   bs   4bs
             Z    Å                 Æ    Ø
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
Cross:
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮

     RALT               GUI GUI                 RALT
         LALT CTRL SHFT         SHFT CTRL LALT
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
*/
#pragma once

#define COMBO(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    / { \
      combos { \
        compatible = "zmk,combos"; \
        combo_ ## name { \
            timeout-ms = <combo_timeout>; \
            bindings = <combo_bindings>; \
            key-positions = <keypos>; \
            layers = <combo_layers>; \
        }; \
      }; \
    };

/ {
  macros {
    multi_bksp: multi_bksp {
      compatible = "zmk,behavior-macro";
      label = "MULTI_BKSP";
      #binding-cells = <0>;
      bindings = <&macro_tap &kp BKSP &kp BKSP &kp BKSP &kp BKSP>;
    };
    multi_tab: multi_tab {
      compatible = "zmk,behavior-macro";
      label = "MULTI_TAB";
      #binding-cells = <0>;
      bindings = <&macro_tap &kp TAB &kp TAB &kp TAB &kp TAB>;
    };
  };
};
ZMK_COMBO(_MULTI_BKSP_COMBO, &multi_bksp,_MR4 _UR5, LAYER_ALL)
ZMK_COMBO(_MULTI_TAB_COMBO,  &multi_tab, _UL2 _UL3, LAYER_ALL)


ZMK_COMBO(_Q_US_COMBO,  &kp Q,      _UL3 _UL4, LAYER_US)
ZMK_COMBO(_Q_NO_COMBO,  &kp Q,      _UL3 _UL4, LAYER_NO)

ZMK_COMBO(_Z_US_COMBO,  &kp Z,      _LL3 _LL4, LAYER_US)
ZMK_COMBO(_Z_NO_COMBO,  &kp Z,      _LL3 _LL4, LAYER_NO)

ZMK_COMBO(_AA_US_COMBO, &kp RA(W),  _LL2 _LL3, LAYER_US)
ZMK_COMBO(_AA_NO_COMBO, &kp LBKT,   _LL2 _LL3, LAYER_NO)
ZMK_COMBO(_AE_US_COMBO, &kp RA(Z),  _LR2 _LR3, LAYER_US)
ZMK_COMBO(_AE_NO_COMBO, &kp SQT,    _LR2 _LR3, LAYER_NO)
ZMK_COMBO(_OE_US_COMBO, &kp RA(L),  _LR3 _LR4, LAYER_US)
ZMK_COMBO(_OE_NO_COMBO, &kp SEMI,   _LR3 _LR4, LAYER_NO)

ZMK_COMBO(_ESC_COMBO,   &kp ESC,    _ML3 _ML4, LAYER_ALL)
ZMK_COMBO(_TAB_COMBO,   &kp TAB,    _ML2 _ML3, LAYER_ALL)

ZMK_COMBO(_BKSP_COMBO,  &kp BKSP,  _MR3 _MR4, LAYER_ALL)
ZMK_COMBO(_DEL_COMBO,   &kp DEL,    _UR3 _UR4, LAYER_ALL)
ZMK_COMBO(_INS_COMBO,   &kp INS,    _UR2 _UR3, LAYER_ALL)
ZMK_COMBO(_ENTER_COMBO, &kp ENTER, _MR2 _MR3, LAYER_ALL)

ZMK_COMBO(_GUI_COMBO,   &kp LGUI,   _MR1 _ML1, LAYER_ALL)
ZMK_COMBO(_SHIFT_COMBO, &kp LSHIFT, _LR2 _LL2, LAYER_ALL)
ZMK_COMBO(_CTRL_COMBO,  &kp LCTRL,  _LR3 _LL3, LAYER_ALL)
ZMK_COMBO(_LALT_COMBO,  &kp LALT,   _LR4 _LL4, LAYER_ALL)
ZMK_COMBO(_RALT_COMBO,  &kp RALT,   _MR5 _ML5, LAYER_ALL)
