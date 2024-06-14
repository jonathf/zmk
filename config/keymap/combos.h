#pragma once

#define _combo_q(layer, key) ZMK_COMBO(_Q_ ## layer, key, _UL3 _UL4, layer)
_combo_q(0, _Q)
_combo_q(1, _1_EXCL)
_combo_q(2, _1_PIPE)
_combo_q(4, _Q)
_combo_q(5, _0_EXCL)
_combo_q(6, _1_PIPE)

#define _combo_z(layer, key) ZMK_COMBO(_Z_ ## layer, key, _LL3 _LL4, layer)
_combo_z(0, &kp Z)
_combo_z(1, &kp LS(N5))
_combo_z(4, &kp Z)
_combo_z(5, &kp PRCNT)

#define _combo_aa(layer, key) ZMK_COMBO(_AA_ ## layer, key, _UL2 _UL3, layer)
_combo_aa(0, _1_AA)
_combo_aa(4, _0_AA)

#define _combo_oe(layer, key) ZMK_COMBO(_OE_ ## layer, key, _LR3 _LR4, layer)
_combo_oe(0, _1_OE)
_combo_oe(4, _0_OE)

#define _combo_ae(layer, key) ZMK_COMBO(_AE_ ## layer, key, _LR2 _LR3, layer)
_combo_ae(0, _1_AE)
_combo_ae(4, _0_AE)

ZMK_COMBO(_ESC,   &kp ESC,    _ML3 _ML4, 0 4)
ZMK_COMBO(_TAB,   &kp TAB,    _ML2 _ML3, 0 4)
ZMK_COMBO(_INS,   &kp INS,    _UR2 _UR3, 0 4)
ZMK_COMBO(_DEL,   &kp DEL,    _UR3 _UR4, 0 4)
ZMK_COMBO(_BKSP,  &kp BKSP,   _MR3 _MR4, 0 4)
ZMK_COMBO(_ENTER, &kp ENTER,  _MR2 _MR3, 0 4)
