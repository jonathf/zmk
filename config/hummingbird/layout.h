/*
╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
 0    1    2    3    4  5    6    7    8    9
10   11   12   13   14 15   16   17   18   19
     20   21   22           23   24   25
╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
               26   27 28   29
*/
#pragma once

#define _LEFT_HAND \
  _UL1 _UL2 _UL3 _UL4 _UL5 \
  _ML1 _ML2 _ML3 _ML4 _ML5 \
  _LL2 _LL3 _LL4
#define _RIGHT_HAND \
  _UR1 _UR2 _UR3 _UR4 _UR5 \
  _MR1 _MR2 _MR3 _MR4 _MR5 \
  _LR2 _LR3 _LR4

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
