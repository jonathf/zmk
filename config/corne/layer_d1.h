#define _EURO &kp RA(N5)
#define _TILD &kp TILDE
#define _PIPE &kp PIPE
#define _AMPS &kp AMPS
#define _PRCN &kp PRCNT

#define _CART &holdtap_right LGUI CARET
#define _FSLH &kp FSLH
#define _STAR &kp STAR
#define _DOLL &kp DOLLAR
#define _PARA &holdtap_right RALT RA(SEMI)

#define _CUTE &holdtap_left LSHIFT RA(SQT)
#define _BSLH &holdtap_right LSHIFT BSLH
#define _HASH &holdtap_right LCTRL HASH

ZMK_LAYER(_LAYER_D1,
//╭─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────╮
 _ _     _     _EURO _     _     _TILD _PIPE _AMPS _PRCN _     _
//├─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┼─────┤
 _ _     _     _     _     _     _CART _FSLH _STAR _DOLL _PARA _
//╰─────┼─────┼─────┼─────┼─────┴─────┼─────┼─────┼─────┼─────╯
 _ _     _     _     _CUTE _     _     _BSLH _HASH _     _     _
//      ╰─────┴─────┼─────┼─────┬─────┼─────┼─────┴─────╯
               _     _CAPS _SPC  _J_B1 _J_C1 _
//                  ╰─────┴─────┴─────┴─────╯
)
