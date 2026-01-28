/*
Combos triggered by pushing two (or more) keys at the same time.

Adjecent pairs
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
             Q    X                 ins  del
             esc  tab 4tb           cr   bs   4bs
             Z    Å                 Æ    Ø
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
*/
#pragma once

ZMK_COMBO(_Q_COMBO,     &kp Q,      LT2 LT3, LAYER_ALL)
ZMK_COMBO(_X_COMBO,     &kp X,      LT1 LT2, LAYER_ALL)

ZMK_BEHAVIOR(multi_tab, macro,
    bindings = <&macro_tap &kp TAB &kp TAB &kp TAB &kp TAB>;
)

ZMK_COMBO(_BKSP_COMBO,  &kp BKSP,   RM2 RM3, LAYER_ALL)
ZMK_COMBO(_DEL_COMBO,   &kp DEL,    RT2 RT3, LAYER_ALL)
ZMK_COMBO(_INS_COMBO,   &kp INS,    RT1 RT2, LAYER_ALL)

ZMK_COMBO(_ESC_COMBO,   &kp ESC,    LM2 LM3, LAYER_ALL)
ZMK_COMBO(_MTAB_COMBO,  &multi_tab, LM0 LM1, LAYER_ALL)
ZMK_COMBO(_TAB_COMBO,   &kp TAB,    LM1 LM2, LAYER_ALL)
ZMK_COMBO(_ENTER_COMBO, &kp ENTER , RM1 RM2, LAYER_ALL)
ZMK_BEHAVIOR(multi_bksp, macro,
    bindings = <&macro_tap &kp BKSP &kp BKSP &kp BKSP &kp BKSP>;
)
ZMK_COMBO(_MBKSP_COMBO, &multi_bksp, RM3 RT4, LAYER_ALL)

ZMK_COMBO(_Z_COMBO,     &kp Z,      LB2 LB3, LAYER_ALL)
ZMK_COMBO(_AA_US_COMBO, &kp RA(W),  LB1 LB2, LAYER_US)
ZMK_COMBO(_AA_NO_COMBO, &kp LBKT,   LB1 LB2, LAYER_NO)

ZMK_COMBO(_AE_US_COMBO, &kp RA(Z),  RB1 RB2, LAYER_US)
ZMK_COMBO(_AE_NO_COMBO, &kp SQT,    RB1 RB2, LAYER_NO)
ZMK_COMBO(_OE_US_COMBO, &kp RA(L),  RB2 RB3, LAYER_US)
ZMK_COMBO(_OE_NO_COMBO, &kp SEMI,   RB2 RB3, LAYER_NO)

/*
Cross combos
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮

     RALT               GUI GUI                 RALT
         LALT CTRL SHFT         SHFT CTRL LALT
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
*/

ZMK_COMBO(_GUI_COMBO,   &kp LGUI,   RM0 LM0, LAYER_ALL)
ZMK_COMBO(_SHIFT_COMBO, &kp LSHIFT, RB2 LB2, LAYER_ALL)
ZMK_COMBO(_CTRL_COMBO,  &kp LCTRL,  RB2 LB2, LAYER_ALL)
ZMK_COMBO(_LALT_COMBO,  &kp LALT,   RB3 LB3, LAYER_ALL)
ZMK_COMBO(_RALT_COMBO,  &kp RALT,   RM4 LM4, LAYER_ALL)
