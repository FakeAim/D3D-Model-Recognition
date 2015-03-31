/*
** Game Name: Call Of Duty 4 Modern Warfare
** File Name: COD4.h
** Author: Zoom (uc-forum.com)
** Description: Model Recognition for COD4
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/


#define Opfor_Assualt \
((NumVertices == 776  && PrimitiveCount == 1212 && Stride == 32) || \
(NumVertices == 440  && PrimitiveCount == 616 && Stride == 32) || \
(NumVertices == 1252  && PrimitiveCount == 1160 && Stride == 32) || \
(NumVertices == 470  && PrimitiveCount == 352 && Stride == 32) || \
(NumVertices == 202  && PrimitiveCount == 324 && Stride == 32) || \
(NumVertices == 282  && PrimitiveCount == 376 && Stride == 32) || \
(NumVertices == 125  && PrimitiveCount == 160 && Stride == 32) || \
(NumVertices == 153  && PrimitiveCount == 190 && Stride == 32) || \
(NumVertices == 3124 && PrimitiveCount == 4132 && Stride == 32) || \
(NumVertices == 1970  && PrimitiveCount == 2186 && Stride == 32))

#define Opfor_SpecOps \
((NumVertices == 3531 && PrimitiveCount == 4526 && Stride == 32) || \
(NumVertices == 2188 && PrimitiveCount == 2386 && Stride == 32) || \
(NumVertices == 830 && PrimitiveCount == 1206 && Stride == 32) || \
(NumVertices == 491 && PrimitiveCount == 700 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 103 && PrimitiveCount == 130 && Stride == 32) || \
(NumVertices == 1325 && PrimitiveCount == 1194 && Stride == 32) || \
(NumVertices == 499 && PrimitiveCount == 352 && Stride == 32))

#define Opfor_Gunner \
((NumVertices == 251 && PrimitiveCount == 304 && Stride == 32) || \
(NumVertices == 155 && PrimitiveCount == 138 && Stride == 32) || \
(NumVertices == 2715 && PrimitiveCount == 3588 && Stride == 32) || \
(NumVertices == 1620 && PrimitiveCount == 1886 && Stride == 32) || \
(NumVertices == 928 && PrimitiveCount == 1392 && Stride == 32) || \
(NumVertices == 602 && PrimitiveCount == 800 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 943 && PrimitiveCount == 908 && Stride == 32) || \
(NumVertices == 441 && PrimitiveCount == 308 && Stride == 32))

#define Opfor_Demolition \
((NumVertices == 2816 && PrimitiveCount == 3642 && Stride == 32) || \
(NumVertices == 1773 && PrimitiveCount == 2022 && Stride == 32) || \
(NumVertices == 808 && PrimitiveCount == 1220 && Stride == 32) || \
(NumVertices == 540 && PrimitiveCount == 812 && Stride == 32) || \
(NumVertices == 280 && PrimitiveCount == 376 && Stride == 32) || \
(NumVertices == 152 && PrimitiveCount == 190 && Stride == 32) || \
(NumVertices == 793 && PrimitiveCount == 796 && Stride == 32) || \
(NumVertices == 486 && PrimitiveCount == 412 && Stride == 32) || \
(NumVertices == 237 && PrimitiveCount == 216 && Stride == 32) || \
(NumVertices == 95 && PrimitiveCount == 58 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 1150 && PrimitiveCount == 1086 && Stride == 32) || \
(NumVertices == 435 && PrimitiveCount == 320 && Stride == 32))

#define Opfor_Sniper \
((NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 890  && PrimitiveCount == 1390 && Stride == 32) || \
(NumVertices == 539  && PrimitiveCount == 760 && Stride == 32) || \
(NumVertices == 52  && PrimitiveCount == 28 && Stride == 32) || \
(NumVertices == 2818  && PrimitiveCount == 3672 && Stride == 32) || \
(NumVertices == 1715  && PrimitiveCount == 1950 && Stride == 32) || \
(NumVertices == 250  && PrimitiveCount == 304 && Stride == 32) || \
(NumVertices == 281  && PrimitiveCount == 376 && Stride == 32) || \
(NumVertices == 150  && PrimitiveCount == 142 && Stride == 32) || \
(NumVertices == 153  && PrimitiveCount == 190 && Stride == 32) || \
(NumVertices == 150  && PrimitiveCount == 142 && Stride == 32) || \
(NumVertices == 1101  && PrimitiveCount == 1066 && Stride == 32) || \
(NumVertices == 481  && PrimitiveCount == 350 && Stride == 32))

#define Marine_Assault \
((NumVertices == 356 && PrimitiveCount == 262 && Stride == 32) || \
(NumVertices == 686 && PrimitiveCount == 952 && Stride == 32) || \
(NumVertices == 301 && PrimitiveCount == 192 && Stride == 32) || \
(NumVertices == 568 && PrimitiveCount == 698 && Stride == 32) || \
(NumVertices == 110 && PrimitiveCount == 122 && Stride == 32) || \
(NumVertices == 66 && PrimitiveCount == 64 && Stride == 32) || \
(NumVertices == 1001 && PrimitiveCount == 964 && Stride == 32) || \
(NumVertices == 1092 && PrimitiveCount == 1402 && Stride == 32) || \
(NumVertices == 552 && PrimitiveCount == 452 && Stride == 32) || \
(NumVertices == 638 && PrimitiveCount == 738 && Stride == 32) || \
(NumVertices == 1144 && PrimitiveCount == 814 && Stride == 32) || \
(NumVertices == 2613 && PrimitiveCount == 3248 && Stride == 32) || \
(NumVertices == 713 && PrimitiveCount == 496 && Stride == 32) || \
(NumVertices == 1842 && PrimitiveCount == 1978 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 34 && PrimitiveCount == 30 && Stride == 32) || \
(NumVertices == 25 && PrimitiveCount == 22 && Stride == 32) || \
(NumVertices == 385 && PrimitiveCount == 196 && Stride == 32) || \
(NumVertices == 1034 && PrimitiveCount == 904 && Stride == 32) || \
(NumVertices == 447 && PrimitiveCount == 312 && Stride == 32))

#define Marine_SpecOps \
((NumVertices == 599 && PrimitiveCount == 418 && Stride == 32) || \
(NumVertices == 855 && PrimitiveCount == 1100 && Stride == 32) || \
(NumVertices == 296 && PrimitiveCount == 188 && Stride == 32) || \
(NumVertices == 834 && PrimitiveCount == 770 && Stride == 32) || \
(NumVertices == 233 && PrimitiveCount == 330 && Stride == 32) || \
(NumVertices == 976 && PrimitiveCount == 1372 && Stride == 32) || \
(NumVertices == 142 && PrimitiveCount == 174 && Stride == 32) || \
(NumVertices == 513 && PrimitiveCount == 674 && Stride == 32) || \
(NumVertices == 623 && PrimitiveCount == 592 && Stride == 32) || \
(NumVertices == 3790 && PrimitiveCount == 4078 && Stride == 32) || \
(NumVertices == 165 && PrimitiveCount == 146 && Stride == 32) || \
(NumVertices == 2784 && PrimitiveCount == 2384 && Stride == 32) || \
(NumVertices == 34 && PrimitiveCount == 30 && Stride == 32) || \
(NumVertices == 25 && PrimitiveCount == 22 && Stride == 32) || \
(NumVertices == 1572 && PrimitiveCount == 1166 && Stride == 32) || \
(NumVertices == 634 && PrimitiveCount == 372 && Stride == 32))

#define Marine_Gunner \
((NumVertices == 394 && PrimitiveCount == 274 && Stride == 32) || \
(NumVertices == 716 && PrimitiveCount == 962 && Stride == 32) || \
(NumVertices == 283 && PrimitiveCount == 170 && Stride == 32) || \
(NumVertices == 596 && PrimitiveCount == 704 && Stride == 32) || \
(NumVertices == 275 && PrimitiveCount == 322 && Stride == 32) || \
(NumVertices == 127 && PrimitiveCount == 124 && Stride == 32) || \
(NumVertices == 178 && PrimitiveCount == 166 && Stride == 32) || \
(NumVertices == 3597 && PrimitiveCount == 4280 && Stride == 32) || \
(NumVertices == 2301 && PrimitiveCount == 2364 && Stride == 32) || \
(NumVertices == 828 && PrimitiveCount == 1300 && Stride == 32) || \
(NumVertices == 493 && PrimitiveCount == 688 && Stride == 32) || \
(NumVertices == 1341 && PrimitiveCount == 1132 && Stride == 32) || \
(NumVertices == 580 && PrimitiveCount == 380 && Stride == 32))

#define Marine_Demolition \
((NumVertices == 367 && PrimitiveCount == 298 && Stride == 32) || \
(NumVertices == 686 && PrimitiveCount == 952 && Stride == 32) || \
(NumVertices == 308 && PrimitiveCount == 212 && Stride == 32) || \
(NumVertices == 568 && PrimitiveCount == 698 && Stride == 32) || \
(NumVertices == 306 && PrimitiveCount == 274 && Stride == 32) || \
(NumVertices == 4050 && PrimitiveCount == 4486 && Stride == 32) || \
(NumVertices == 2540 && PrimitiveCount == 2444 && Stride == 32) || \
(NumVertices == 689 && PrimitiveCount == 1172 && Stride == 32) || \
(NumVertices == 356 && PrimitiveCount == 566 && Stride == 32) || \
(NumVertices == 6 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 1488 && PrimitiveCount == 1114 && Stride == 32) || \
(NumVertices == 592 && PrimitiveCount == 374 && Stride == 32))

#define Marine_Sniper \
((NumVertices == 213 && PrimitiveCount == 282 && Stride == 32) || \
(NumVertices == 874 && PrimitiveCount == 1228 && Stride == 32) || \
(NumVertices == 106 && PrimitiveCount == 114 && Stride == 32) || \
(NumVertices == 537 && PrimitiveCount == 698 && Stride == 32) || \
(NumVertices == 681 && PrimitiveCount == 588 && Stride == 32) || \
(NumVertices == 2516 && PrimitiveCount == 2940 && Stride == 32) || \
(NumVertices == 337 && PrimitiveCount == 240 && Stride == 32) || \
(NumVertices == 1726 && PrimitiveCount == 1760 && Stride == 32) || \
(NumVertices == 822 && PrimitiveCount == 1084 && Stride == 32) || \
(NumVertices == 562 && PrimitiveCount == 632 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 1020 && PrimitiveCount == 872 && Stride == 32) || \
(NumVertices == 587 && PrimitiveCount == 370 && Stride == 32))

#define Spetznas_Assault \
((NumVertices == 4358 && PrimitiveCount == 4864 && Stride == 32) || \
(NumVertices == 3278 && PrimitiveCount == 3188 && Stride == 32) || \
(NumVertices == 892 && PrimitiveCount == 1108 && Stride == 32) || \
(NumVertices == 584 && PrimitiveCount == 568 && Stride == 32) || \
(NumVertices == 783 && PrimitiveCount == 1168 && Stride == 32) || \
(NumVertices == 503 && PrimitiveCount == 704 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 103 && PrimitiveCount == 130 && Stride == 32) || \
(NumVertices == 1633 && PrimitiveCount == 1332 && Stride == 32) || \
(NumVertices == 840 && PrimitiveCount == 618 && Stride == 32))

#define Spetznas_SpecOps \
((NumVertices == 424 && PrimitiveCount == 346 && Stride == 32) || \
(NumVertices == 4242 && PrimitiveCount == 5028 && Stride == 32) || \
(NumVertices == 323 && PrimitiveCount == 260 && Stride == 32) || \
(NumVertices == 2391 && PrimitiveCount == 2488 && Stride == 32) || \
(NumVertices == 793 && PrimitiveCount == 834 && Stride == 32) || \
(NumVertices == 409 && PrimitiveCount == 588 && Stride == 32) || \
(NumVertices == 592 && PrimitiveCount == 532 && Stride == 32) || \
(NumVertices == 274 && PrimitiveCount == 350 && Stride == 32) || \
(NumVertices == 796 && PrimitiveCount == 1036 && Stride == 32) || \
(NumVertices == 607 && PrimitiveCount == 512 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 26 && PrimitiveCount == 24 && Stride == 32) || \
(NumVertices == 26 && PrimitiveCount == 24 && Stride == 32) || \
(NumVertices == 425 && PrimitiveCount == 316 && Stride == 32) || \
(NumVertices == 1689 && PrimitiveCount == 1422 && Stride == 32) || \
(NumVertices == 384 && PrimitiveCount == 250 && Stride == 32) || \
(NumVertices == 969 && PrimitiveCount == 708 && Stride == 32))

#define Spetznas_HeavyGunner \
((NumVertices == 4270 && PrimitiveCount == 4804 && Stride == 32) || \
(NumVertices == 2755  && PrimitiveCount == 2494 && Stride == 32) || \
(NumVertices == 231  && PrimitiveCount == 244 && Stride == 32) || \
(NumVertices == 125  && PrimitiveCount == 142 && Stride == 32) || \
(NumVertices == 880  && PrimitiveCount == 1108 && Stride == 32) || \
(NumVertices == 584  && PrimitiveCount == 568 && Stride == 32) || \
(NumVertices == 745  && PrimitiveCount == 1216 && Stride == 32) || \
(NumVertices == 540  && PrimitiveCount == 812 && Stride == 32) || \
(NumVertices == 98  && PrimitiveCount == 144 && Stride == 32) || \
(NumVertices == 1317  && PrimitiveCount == 1054 && Stride == 32) || \
(NumVertices == 809  && PrimitiveCount == 590 && Stride == 32))

#define Spetznas_Demolition \
((NumVertices == 267  && PrimitiveCount == 186 && Stride == 32) || \
(NumVertices == 3891  && PrimitiveCount == 4598 && Stride == 32) || \
(NumVertices == 263  && PrimitiveCount == 178 && Stride == 32) || \
(NumVertices == 2510  && PrimitiveCount == 2470 && Stride == 32) || \
(NumVertices == 793 && PrimitiveCount == 834 && Stride == 32) || \
(NumVertices == 409 && PrimitiveCount == 588 && Stride == 32) || \
(NumVertices == 592 && PrimitiveCount == 532 && Stride == 32) || \
(NumVertices == 274 && PrimitiveCount == 350 && Stride == 32) || \
(NumVertices == 529  && PrimitiveCount == 540 && Stride == 32) || \
(NumVertices == 353  && PrimitiveCount == 346 && Stride == 32) || \
(NumVertices == 796 && PrimitiveCount == 1036 && Stride == 32) || \
(NumVertices == 607 && PrimitiveCount == 512 && Stride == 32) || \
(NumVertices == 26 && PrimitiveCount == 24 && Stride == 32) || \
(NumVertices == 26 && PrimitiveCount == 24 && Stride == 32) || \
(NumVertices == 14 && PrimitiveCount == 12 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 171  && PrimitiveCount == 114 && Stride == 32) || \
(NumVertices == 1398  && PrimitiveCount == 1176 && Stride == 32) || \
(NumVertices == 384 && PrimitiveCount == 250 && Stride == 32) || \
(NumVertices == 994  && PrimitiveCount == 714 && Stride == 32))

#define Spetznas_Sniper \
((NumVertices == 212  && PrimitiveCount == 146 && Stride == 32) || \
(NumVertices == 3254  && PrimitiveCount == 4122 && Stride == 32) || \
(NumVertices == 166  && PrimitiveCount == 128 && Stride == 32) || \
(NumVertices == 1730  && PrimitiveCount == 1938 && Stride == 32) || \
(NumVertices == 796  && PrimitiveCount == 1036 && Stride == 32) || \
(NumVertices == 607  && PrimitiveCount == 512 && Stride == 32) || \
(NumVertices == 498  && PrimitiveCount == 840 && Stride == 32) || \
(NumVertices == 327  && PrimitiveCount == 500 && Stride == 32) || \
(NumVertices == 102  && PrimitiveCount == 144 && Stride == 32) || \
(NumVertices == 1111  && PrimitiveCount == 986 && Stride == 32) || \
(NumVertices == 724  && PrimitiveCount == 562 && Stride == 32))

#define Sas_Assault \
((NumVertices == 356 && PrimitiveCount == 262 && Stride == 32) || \
(NumVertices == 686 && PrimitiveCount == 952 && Stride == 32) || \
(NumVertices == 301 && PrimitiveCount == 192 && Stride == 32) || \
(NumVertices == 568 && PrimitiveCount == 698 && Stride == 32) || \
(NumVertices == 110 && PrimitiveCount == 122 && Stride == 32) || \
(NumVertices == 66 && PrimitiveCount == 64 && Stride == 32) || \
(NumVertices == 1001 && PrimitiveCount == 964 && Stride == 32) || \
(NumVertices == 1092 && PrimitiveCount == 1402 && Stride == 32) || \
(NumVertices == 552 && PrimitiveCount == 452 && Stride == 32) || \
(NumVertices == 638 && PrimitiveCount == 738 && Stride == 32) || \
(NumVertices == 1144 && PrimitiveCount == 814 && Stride == 32) || \
(NumVertices == 2613 && PrimitiveCount == 3248 && Stride == 32) || \
(NumVertices == 713 && PrimitiveCount == 496 && Stride == 32) || \
(NumVertices == 1842 && PrimitiveCount == 1978 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 34 && PrimitiveCount == 30 && Stride == 32) || \
(NumVertices == 25 && PrimitiveCount == 22 && Stride == 32) || \
(NumVertices == 385 && PrimitiveCount == 196 && Stride == 32) || \
(NumVertices == 1034 && PrimitiveCount == 904 && Stride == 32) || \
(NumVertices == 447 && PrimitiveCount == 312 && Stride == 32) || \
(NumVertices == 1021 && PrimitiveCount == 922 && Stride == 32) || \
(NumVertices == 248 && PrimitiveCount == 176 && Stride == 32))

#define Sas_SpecOps \
((NumVertices == 599 && PrimitiveCount == 418 && Stride == 32) || \
(NumVertices == 855 && PrimitiveCount == 1100 && Stride == 32) || \
(NumVertices == 296 && PrimitiveCount == 188 && Stride == 32) || \
(NumVertices == 834 && PrimitiveCount == 770 && Stride == 32) || \
(NumVertices == 233 && PrimitiveCount == 330 && Stride == 32) || \
(NumVertices == 976 && PrimitiveCount == 1372 && Stride == 32) || \
(NumVertices == 142 && PrimitiveCount == 174 && Stride == 32) || \
(NumVertices == 513 && PrimitiveCount == 674 && Stride == 32) || \
(NumVertices == 623 && PrimitiveCount == 592 && Stride == 32) || \
(NumVertices == 3790 && PrimitiveCount == 4078 && Stride == 32) || \
(NumVertices == 165 && PrimitiveCount == 146 && Stride == 32) || \
(NumVertices == 2784 && PrimitiveCount == 2384 && Stride == 32) || \
(NumVertices == 49 && PrimitiveCount == 50 && Stride == 32) || \
(NumVertices == 34 && PrimitiveCount == 30 && Stride == 32) || \
(NumVertices == 1572 && PrimitiveCount == 1166 && Stride == 32) || \
(NumVertices == 634 && PrimitiveCount == 372 && Stride == 32) || \
(NumVertices == 795 && PrimitiveCount == 704 && Stride == 32) || \
(NumVertices == 150 && PrimitiveCount == 96 && Stride == 32))

#define Sas_Gunner \
((NumVertices == 394 && PrimitiveCount == 274 && Stride == 32) || \
(NumVertices == 716 && PrimitiveCount == 962 && Stride == 32) || \
(NumVertices == 275 && PrimitiveCount == 322 && Stride == 32) || \
(NumVertices == 127 && PrimitiveCount == 124 && Stride == 32) || \
(NumVertices == 178 && PrimitiveCount == 166 && Stride == 32) || \
(NumVertices == 3597 && PrimitiveCount == 4280 && Stride == 32) || \
(NumVertices == 2301 && PrimitiveCount == 2364 && Stride == 32) || \
(NumVertices == 828 && PrimitiveCount == 1300 && Stride == 32) || \
(NumVertices == 493 && PrimitiveCount == 688 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 802 && PrimitiveCount == 800 && Stride == 32) || \
(NumVertices == 193 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 1341 && PrimitiveCount == 1132 && Stride == 32) || \
(NumVertices == 580 && PrimitiveCount == 380 && Stride == 32))

#define Sas_Demolition \
((NumVertices == 367 && PrimitiveCount == 298 && Stride == 32) || \
(NumVertices == 686 && PrimitiveCount == 952 && Stride == 32) || \
(NumVertices == 308 && PrimitiveCount == 212 && Stride == 32) || \
(NumVertices == 568 && PrimitiveCount == 698 && Stride == 32) || \
(NumVertices == 306 && PrimitiveCount == 274 && Stride == 32) || \
(NumVertices == 4050 && PrimitiveCount == 4486 && Stride == 32) || \
(NumVertices == 2540 && PrimitiveCount == 2444 && Stride == 32) || \
(NumVertices == 689 && PrimitiveCount == 1172 && Stride == 32) || \
(NumVertices == 90 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 628 && PrimitiveCount == 670 && Stride == 32) || \
(NumVertices == 105 && PrimitiveCount == 74 && Stride == 32) || \
(NumVertices == 1488 && PrimitiveCount == 1114 && Stride == 32) || \
(NumVertices == 592 && PrimitiveCount == 374 && Stride == 32))

#define Sas_Sniper \
((NumVertices == 438 && PrimitiveCount == 376 && Stride == 32) || \
(NumVertices == 2334 && PrimitiveCount == 2826 && Stride == 32) || \
(NumVertices == 177 && PrimitiveCount == 120 && Stride == 32) || \
(NumVertices == 1615 && PrimitiveCount == 1706 && Stride == 32) || \
(NumVertices == 822 && PrimitiveCount == 1084 && Stride == 32) || \
(NumVertices == 562 && PrimitiveCount == 632 && Stride == 32) || \
(NumVertices == 698 && PrimitiveCount == 1200 && Stride == 32) || \
(NumVertices == 357 && PrimitiveCount == 566 && Stride == 32) || \
(NumVertices == 49 && PrimitiveCount == 50 && Stride == 32) || \
(NumVertices == 470 && PrimitiveCount == 506 && Stride == 32) || \
(NumVertices == 71 && PrimitiveCount == 50 && Stride == 32) || \
(NumVertices == 1021 && PrimitiveCount == 872 && Stride == 32) || \
(NumVertices == 541 && PrimitiveCount == 366 && Stride == 32))

#define Sniper_Camouflage \
((NumVertices == 2578  && PrimitiveCount == 2192 && Stride == 32) || \
(NumVertices == 398  && PrimitiveCount == 410 && Stride == 32) || \
(NumVertices == 2388  && PrimitiveCount == 2040 && Stride == 32) || \
(NumVertices == 222  && PrimitiveCount == 298 && Stride == 32) || \
(NumVertices == 1186  && PrimitiveCount == 1184 && Stride == 32) || \
(NumVertices == 71  && PrimitiveCount == 66 && Stride == 32) || \
(NumVertices == 339  && PrimitiveCount == 248 && Stride == 32))

#define Claymore_Mines \
((NumVertices == 262 && PrimitiveCount == 160 && Stride == 32) || \
(NumVertices == 469 && PrimitiveCount == 316 && Stride == 32) || \
(NumVertices == 68 && PrimitiveCount == 34 && Stride == 32) || \
(NumVertices == 627 && PrimitiveCount == 476 && Stride == 32))

#define C4_Charge \
((NumVertices == 1862 && PrimitiveCount == 1372 && Stride == 32) || \
(NumVertices == 40 && PrimitiveCount == 28 && Stride == 32) || \
(NumVertices == 500 && PrimitiveCount == 328 && Stride == 32))

#define Frag_Grenade \
((NumVertices == 321 && PrimitiveCount == 480 && Stride == 32) || \
(NumVertices == 374 && PrimitiveCount == 438 && Stride == 32) || \
(NumVertices == 30 && PrimitiveCount == 22 && Stride == 32))

#define Flash_Grenade \
((NumVertices == 194 && PrimitiveCount == 226 && Stride == 32) || \
(NumVertices == 275 && PrimitiveCount == 184 && Stride == 32) || \
(NumVertices == 341 && PrimitiveCount == 256 && Stride == 32) || \
(NumVertices == 196 && PrimitiveCount == 130 && Stride == 32) || \
(NumVertices == 50 && PrimitiveCount == 32 && Stride == 32))

#define Cobra_Helicopter \
((NumVertices == 2335 && PrimitiveCount == 2166 && Stride == 32) || \
(NumVertices == 275 && PrimitiveCount == 182 && Stride == 32) || \
(NumVertices == 323 && PrimitiveCount == 306 && Stride == 32) || \
(NumVertices == 961 && PrimitiveCount == 656 && Stride == 32) || \
(NumVertices == 278 && PrimitiveCount == 184 && Stride == 32) || \
(NumVertices == 64 && PrimitiveCount == 32 && Stride == 32) || \
(NumVertices == 36 && PrimitiveCount == 24 && Stride == 32) || \
(NumVertices == 76 && PrimitiveCount == 38 && Stride == 32))

#define Mi28_Helicopter \
((NumVertices == 902 && PrimitiveCount == 664 && Stride == 32) || \
(NumVertices == 219 && PrimitiveCount == 118 && Stride == 32) || \
(NumVertices == 1724 && PrimitiveCount == 1466 && Stride == 32) || \
(NumVertices == 3437 && PrimitiveCount == 2646 && Stride == 32) || \
(NumVertices == 32 && PrimitiveCount == 18 && Stride == 32))

#define M40A3_Sniper_handheld \
((NumVertices == 284 && PrimitiveCount == 272 && Stride == 32) || \
(NumVertices == 841 && PrimitiveCount == 648 && Stride == 32) || \
(NumVertices == 13 && PrimitiveCount == 12 && Stride == 32) || \
(NumVertices == 1024 && PrimitiveCount == 690 && Stride == 32) || \
(NumVertices == 45 && PrimitiveCount == 34 && Stride == 32))

#define M40A3_Sniper_ACOG_handheld \
((NumVertices == 739 && PrimitiveCount == 576 && Stride == 32) || \
(NumVertices == 284 && PrimitiveCount == 272 && Stride == 32) || \
(NumVertices == 1024 && PrimitiveCount == 690 && Stride == 32) || \
(NumVertices == 9 && PrimitiveCount == 8 && Stride == 32) || \
(NumVertices == 8 && PrimitiveCount == 6 && Stride == 32) || \
(NumVertices == 48 && PrimitiveCount == 30 && Stride == 32) || \
(NumVertices == 45 && PrimitiveCount == 34 && Stride == 32))

#define W1200_Shotgun_NOATTACH_handheld \
((NumVertices == 232 && PrimitiveCount == 184 && Stride == 32) || \
(NumVertices == 134 && PrimitiveCount == 112 && Stride == 32) || \
(NumVertices == 546 && PrimitiveCount == 444 && Stride == 32) || \
(NumVertices == 1204 && PrimitiveCount == 918 && Stride == 32) || \
(NumVertices == 190 && PrimitiveCount == 148 && Stride == 32))

#define W1200_Shotgun_REDDOT_handheld \
((NumVertices == 374 && PrimitiveCount == 286 && Stride == 32) || \
(NumVertices == 232 && PrimitiveCount == 184 && Stride == 32) || \
(NumVertices == 134 && PrimitiveCount == 112 && Stride == 32) || \
(NumVertices == 546 && PrimitiveCount == 444 && Stride == 32) || \
(NumVertices == 6 && PrimitiveCount == 4 && Stride == 32) || \
(NumVertices == 1204 && PrimitiveCount == 918 && Stride == 32) || \
(NumVertices == 190 && PrimitiveCount == 148 && Stride == 32))

#define M249SAW_NOATTACH_handheld \
((NumVertices == 1055 && PrimitiveCount == 728 && Stride == 32) || \
(NumVertices == 171 && PrimitiveCount == 120 && Stride == 32) || \
(NumVertices == 337 && PrimitiveCount == 248 && Stride == 32) || \
(NumVertices == 640 && PrimitiveCount == 524 && Stride == 32) || \
(NumVertices == 514 && PrimitiveCount == 434 && Stride == 32) || \
(NumVertices == 246 && PrimitiveCount == 216 && Stride == 32))

#define M249SAW_REDDOT_handheld \
((NumVertices == 374 && PrimitiveCount == 286 && Stride == 32) || \
(NumVertices == 1055 && PrimitiveCount == 728 && Stride == 32) || \
(NumVertices == 640 && PrimitiveCount == 524 && Stride == 32) || \
(NumVertices == 337 && PrimitiveCount == 248 && Stride == 32) || \
(NumVertices == 246 && PrimitiveCount == 216 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 6 && PrimitiveCount == 4 && Stride == 32))

#define M249SAW_GRIP_handheld \
((NumVertices == 1055 && PrimitiveCount == 728 && Stride == 32) || \
(NumVertices == 171 && PrimitiveCount == 120 && Stride == 32) || \
(NumVertices == 337 && PrimitiveCount == 248 && Stride == 32) || \
(NumVertices == 640 && PrimitiveCount == 524 && Stride == 32) || \
(NumVertices == 514 && PrimitiveCount == 434 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 171 && PrimitiveCount == 124 && Stride == 32) || \
(NumVertices == 246 && PrimitiveCount == 216 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32))

#define M249SAW_ACOG_handheld \
((NumVertices == 785 && PrimitiveCount == 606 && Stride == 32) || \
(NumVertices == 1055 && PrimitiveCount == 728 && Stride == 32) || \
(NumVertices == 640 && PrimitiveCount == 524 && Stride == 32) || \
(NumVertices == 337 && PrimitiveCount == 248 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 52 && PrimitiveCount == 32 && Stride == 32) || \
(NumVertices == 9 && PrimitiveCount == 8 && Stride == 32) || \
(NumVertices == 8 && PrimitiveCount == 6 && Stride == 32) || \
(NumVertices == 246 && PrimitiveCount == 216 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32))


#define MP5NAVY_NOATTACH_handheld \
((NumVertices == 1329 && PrimitiveCount == 1038 && Stride == 32) || \
(NumVertices == 164 && PrimitiveCount == 138 && Stride == 32) || \
(NumVertices == 468 && PrimitiveCount == 384 && Stride == 32))

#define MP5NAVY_SIL_handheld \
((NumVertices == 1367 && PrimitiveCount == 1068 && Stride == 32) || \
(NumVertices == 58 && PrimitiveCount == 56 && Stride == 32) || \
(NumVertices == 322 && PrimitiveCount == 264 && Stride == 32) || \
(NumVertices == 164 && PrimitiveCount == 138 && Stride == 32))

#define MP5NAVY_REDDOT_handheld \
((NumVertices == 1329 && PrimitiveCount == 1038 && Stride == 32) || \
(NumVertices == 164 && PrimitiveCount == 138 && Stride == 32) || \
(NumVertices == 299 && PrimitiveCount == 242 && Stride == 32) || \
(NumVertices == 374 && PrimitiveCount == 286 && Stride == 32) || \
(NumVertices == 299 && PrimitiveCount == 242 && Stride == 32) || \
(NumVertices == 202 && PrimitiveCount == 126 && Stride == 32) || \
(NumVertices == 468 && PrimitiveCount == 384 && Stride == 32) || \
(NumVertices == 6 && PrimitiveCount == 4 && Stride == 32))

#define MP5NAVY_ACOG_handheld \
((NumVertices == 640 && PrimitiveCount == 492 && Stride == 32) || \
(NumVertices == 202 && PrimitiveCount == 126 && Stride == 32) || \
(NumVertices == 1329 && PrimitiveCount == 1038 && Stride == 32) || \
(NumVertices == 164 && PrimitiveCount == 138 && Stride == 32) || \
(NumVertices == 468 && PrimitiveCount == 384 && Stride == 32) || \
(NumVertices == 9 && PrimitiveCount == 8 && Stride == 32) || \
(NumVertices == 8 && PrimitiveCount == 6 && Stride == 32) || \
(NumVertices == 48 && PrimitiveCount == 30 && Stride == 32))

#define M16A4_NOATTACH_handheld \
((NumVertices == 1600 && PrimitiveCount == 978 && Stride == 32) || \
(NumVertices == 188 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 775 && PrimitiveCount == 570 && Stride == 32))

#define M16A4_GL_handheld \
((NumVertices == 2122 && PrimitiveCount == 1430 && Stride == 32) || \
(NumVertices == 299 && PrimitiveCount == 224 && Stride == 32) || \
(NumVertices == 72 && PrimitiveCount == 94 && Stride == 32))

#define M16A4_SIL_handheld \
((NumVertices == 775 && PrimitiveCount == 570 && Stride == 32) || \
(NumVertices == 1764 && PrimitiveCount == 1070 && Stride == 32) || \
(NumVertices == 50 && PrimitiveCount == 40 && Stride == 32) || \
(NumVertices == 611 && PrimitiveCount == 478 && Stride == 32) || \
(NumVertices == 188 && PrimitiveCount == 140 && Stride == 32))

#define M16A4_REDDOT_handheld \
((NumVertices == 1600 && PrimitiveCount == 978 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 188 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 374 && PrimitiveCount == 286 && Stride == 32))

#define M16A4_ACOG_handheld \
((NumVertices == 1600 && PrimitiveCount == 978 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 4 && PrimitiveCount == 2 && Stride == 32) || \
(NumVertices == 188 && PrimitiveCount == 140 && Stride == 32) || \
(NumVertices == 374 && PrimitiveCount == 286 && Stride == 32) || \
(NumVertices == 739 && PrimitiveCount == 576 && Stride == 32) || \
(NumVertices == 9 && PrimitiveCount == 8 && Stride == 32) || \
(NumVertices == 8 && PrimitiveCount == 6 && Stride == 32) || \
(NumVertices == 48 && PrimitiveCount == 30 && Stride == 32))