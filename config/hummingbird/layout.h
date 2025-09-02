/*
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
      0    1    2    3    4  5    6    7    8    9
     10   11   12   13   14 15   16   17   18   19
          20   21   22           23   24   25
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
                    26   27 28   29
*/
#pragma once

#define _UL5 0
#define _UL4 1
#define _UL3 2
#define _UL2 3
#define _UL1 4
#define _UR1 5
#define _UR2 6
#define _UR3 7
#define _UR4 8
#define _UR5 9

#define _ML5 10
#define _ML4 11
#define _ML3 12
#define _ML2 13
#define _ML1 14
#define _MR1 15
#define _MR2 16
#define _MR3 17
#define _MR4 18
#define _MR5 19

#define _LL4 20
#define _LL3 21
#define _LL2 22
#define _LR2 23
#define _LR3 24
#define _LR4 25

#define _TL2 26
#define _TL1 27
#define _TR1 28
#define _TR2 29

#define _LEFT_HAND \
  _UL1 _UL2 _UL3 _UL4 _UL5 \
  _ML1 _ML2 _ML3 _ML4 _ML5 \
  _LL2 _LL3 _LL4
#define _RIGHT_HAND \
  _UR1 _UR2 _UR3 _UR4 _UR5 \
  _MR1 _MR2 _MR3 _MR4 _MR5 \
  _LR2 _LR3 _LR4

#define LAYER_A1 0
#define LAYER_A2 0
#define LAYER_B1 0
#define LAYER_B2 0
#define LAYER_C1 0
#define LAYER_C2 0
#define LAYER_D1 0
#define LAYER_E1 0

#define LAYER_US 0 2 4
#define LAYER_NO 1 3 5
#define LAYER_ALL 0 1 2 3 4 5 6 7
