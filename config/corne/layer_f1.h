
#define _TILD &kp TILDE
#define _PIPE &kp PIPE
#define _AMPS &kp AMPS
#define _PRCN &kp PRCNT

#define _CART &holdtap_left LGUI CARET
#define _STAR &kp STAR
#define _HASH &kp HASH
#define _DOLL &kp DOLLAR
#define _UNDR &holdtap_right RALT UNDER

#define _FSLH &holdtap_right LSHIFT FSLH
#define _QMRK &holdtap_right LCTRL QMARK
#define _BSLH &holdtap_right LALT BSLH


ZMK_LAYER(_LAYER_F1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _ _     _     _     _     _     _TILD _PIPE _AMPS _PRCN _     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _ _     _     _     _     _     _CART _STAR _HASH _DOLL _UNDR _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _ _     _     _     _     _     _     _FSLH _QMRK _BSLH _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _     _J_B1 _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)

