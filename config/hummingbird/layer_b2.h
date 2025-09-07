/*
Alternate numerical layer.

Assuming Norwegian keyboard layout.
*/
#define STAR_ &kp LS(BSLH)
#define AT_ &kp BSLH
#define LBRC_ &kp LA(LS(N8))
#define RBRC_ &kp LA(LS(N9))
#define EQ_ &kp LS(N0)

#define PLUS_ &kp MINUS
#define N7_ &kp KP_N7
#define N8_ &kp KP_N8
#define N9_ &kp KP_N9
#define N0_ &kp KP_N0

#define COMA_ &holdtap_left RALT COMMA
#define DQT_ &kp LS(N2)
#define LPAR_ &kp LS(N8)
#define RPAR_ &kp LS(N9)
#define DOLL_ &holdtap_left LGUI LS(N4)

#define DASH_ &holdtap_right LGUI FSLH
#define N4_ &kp KP_N4
#define N5_ &kp KP_N5
#define N6_ &kp KP_N6
#define UNDR_ &holdtap_right RALT LS(FSLH)

#define CART_ &holdtap_left LALT LS(LA(RBRC))
#define LBKT_ &holdtap_left LCTRL LA(N8)
#define RBKT_ &holdtap_left LSHIFT LA(N9)

#define N1_ &holdtap_right LSHIFT KP_N1
#define N2_ &holdtap_right LCTRL KP_N2
#define N3_ &holdtap_right LALT KP_N3

ZMK_LAYER(_LAYER_B2,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
   STAR_ AT_   LBRC_ RBRC_ EQ_   PLUS_ N7_   N8_   N9_   N0_
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
   COMA_ DQT_  LPAR_ RPAR_ DOLL_ DASH_ N4_   N5_   N6_   UNDR_
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
         CART_ LBKT_ RBKT_             N1_   N2_   N3_
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
                     CAPS_ _SPC  _J_B2 _J_C2
//                  ╰─────┴─────┴─────┴─────╯
)
