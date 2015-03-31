/*
** Game Name: Call Of Duty 4 Modern Warfare
** File Name: COD4.h
** Author: Zoom (uc-forum.com)
** Description: Model Recognition for COD4
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/



#define Spetznas ( Spetznas_Assault || Spetznas_SpecOps || Spetznas_Gunner || \
				Spetznas_Demolition || Spetznas_Sniper || Spetznas_Sniper2 )

#define Sas ( Sas_Assault || Sas_SpecOps || Sas_Gunner || Sas_Demo || \
				Sas_Sniper1 || Sas_Sniper2 )

#define Opfor_Assualt \
((NumVertices == 776  && PrimitiveCount == 1212 ) || \
(NumVertices == 440  && PrimitiveCount == 616 ) || \
(NumVertices == 1252  && PrimitiveCount == 1160 ) || \
(NumVertices == 470  && PrimitiveCount == 352 ) || \
(NumVertices == 202  && PrimitiveCount == 324 ) || \
(NumVertices == 282  && PrimitiveCount == 376 ) || \
(NumVertices == 125  && PrimitiveCount == 160 ) || \
(NumVertices == 153  && PrimitiveCount == 190 ) || \
(NumVertices == 3124 && PrimitiveCount == 4132 ) || \
(NumVertices == 1970  && PrimitiveCount == 2186 ) || \
( NumVertices == 112 && PrimitiveCount == 96 ) || \
( NumVertices == 142 && PrimitiveCount == 132 ) || \
( NumVertices == 544 && PrimitiveCount == 696 ) || \
( NumVertices == 842 && PrimitiveCount == 1276 ) || \
( NumVertices == 780 && PrimitiveCount == 780 ) || \
( NumVertices == 151 && PrimitiveCount == 118 ))

#define Opfor_SpecOps \
((NumVertices == 3531 && PrimitiveCount == 4526 ) || \
(NumVertices == 2188 && PrimitiveCount == 2386 ) || \
(NumVertices == 830 && PrimitiveCount == 1206 ) || \
(NumVertices == 491 && PrimitiveCount == 700 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 103 && PrimitiveCount == 130 ) || \
(NumVertices == 1325 && PrimitiveCount == 1194 ) || \
(NumVertices == 499 && PrimitiveCount == 352 ) || \
( NumVertices == 422 && PrimitiveCount == 584 ) || \
( NumVertices == 760 && PrimitiveCount == 1192 ) || \
( NumVertices == 504 && PrimitiveCount == 536 ) || \
( NumVertices == 174 && PrimitiveCount == 182 ))

#define Opfor_Gunner \
((NumVertices == 251 && PrimitiveCount == 304 ) || \
(NumVertices == 155 && PrimitiveCount == 138 ) || \
(NumVertices == 2715 && PrimitiveCount == 3588 ) || \
(NumVertices == 1620 && PrimitiveCount == 1886 ) || \
(NumVertices == 928 && PrimitiveCount == 1392 ) || \
(NumVertices == 602 && PrimitiveCount == 800 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 943 && PrimitiveCount == 908 ) || \
(NumVertices == 441 && PrimitiveCount == 308 ) || \
( NumVertices == 767 && PrimitiveCount == 1192 ) || \
( NumVertices == 429 && PrimitiveCount == 584 ) || \
( NumVertices == 119 && PrimitiveCount == 86 ) || \
( NumVertices == 622 && PrimitiveCount == 612 ))

#define Opfor_Demolition \
((NumVertices == 2816 && PrimitiveCount == 3642 ) || \
(NumVertices == 1773 && PrimitiveCount == 2022 ) || \
(NumVertices == 808 && PrimitiveCount == 1220 ) || \
(NumVertices == 540 && PrimitiveCount == 812 ) || \
(NumVertices == 280 && PrimitiveCount == 376 ) || \
(NumVertices == 152 && PrimitiveCount == 190 ) || \
(NumVertices == 793 && PrimitiveCount == 796 ) || \
(NumVertices == 486 && PrimitiveCount == 412 ) || \
(NumVertices == 237 && PrimitiveCount == 216 ) || \
(NumVertices == 95 && PrimitiveCount == 58 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 1150 && PrimitiveCount == 1086 ) || \
(NumVertices == 435 && PrimitiveCount == 320 ) || \
( NumVertices == 648 && PrimitiveCount == 744 ) || \
( NumVertices == 95 && PrimitiveCount == 94 ) || \
( NumVertices == 760 && PrimitiveCount == 1192 ) || \
( NumVertices == 422 && PrimitiveCount == 584 ))

#define Opfor_Sniper \
((NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 890  && PrimitiveCount == 1390 ) || \
(NumVertices == 539  && PrimitiveCount == 760 ) || \
(NumVertices == 52  && PrimitiveCount == 28 ) || \
(NumVertices == 2818  && PrimitiveCount == 3672 ) || \
(NumVertices == 1715  && PrimitiveCount == 1950 ) || \
(NumVertices == 250  && PrimitiveCount == 304 ) || \
(NumVertices == 281  && PrimitiveCount == 376 ) || \
(NumVertices == 150  && PrimitiveCount == 142 ) || \
(NumVertices == 153  && PrimitiveCount == 190 ) || \
(NumVertices == 150  && PrimitiveCount == 142 ) || \
(NumVertices == 1101  && PrimitiveCount == 1066 ) || \
(NumVertices == 481  && PrimitiveCount == 350 ) || \
( NumVertices == 602 && PrimitiveCount == 692 ) || \
( NumVertices == 135 && PrimitiveCount == 116 ) || \
( NumVertices == 760 && PrimitiveCount == 1192 ) || \
( NumVertices == 422 && PrimitiveCount == 584 ))

#define MarineSas1_Assault \
((NumVertices == 356 && PrimitiveCount == 262 ) || \
(NumVertices == 686 && PrimitiveCount == 952 ) || \
(NumVertices == 301 && PrimitiveCount == 192 ) || \
(NumVertices == 568 && PrimitiveCount == 698 ) || \
(NumVertices == 110 && PrimitiveCount == 122 ) || \
(NumVertices == 66 && PrimitiveCount == 64 ) || \
(NumVertices == 1001 && PrimitiveCount == 964 ) || \
(NumVertices == 1092 && PrimitiveCount == 1402 ) || \
(NumVertices == 552 && PrimitiveCount == 452 ) || \
(NumVertices == 638 && PrimitiveCount == 738 ) || \
(NumVertices == 1144 && PrimitiveCount == 814 ) || \
(NumVertices == 2613 && PrimitiveCount == 3248 ) || \
(NumVertices == 713 && PrimitiveCount == 496 ) || \
(NumVertices == 1842 && PrimitiveCount == 1978 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 34 && PrimitiveCount == 30 ) || \
(NumVertices == 25 && PrimitiveCount == 22 ) || \
(NumVertices == 385 && PrimitiveCount == 196 ) || \
(NumVertices == 1034 && PrimitiveCount == 904 ) || \
(NumVertices == 447 && PrimitiveCount == 312 ) || \
( NumVertices == 455 && PrimitiveCount == 448 ) || \
( NumVertices == 281 && PrimitiveCount == 220 ) || \
( NumVertices == 180 && PrimitiveCount == 118 ) || \
( NumVertices == 248 && PrimitiveCount == 176 ) || \
( NumVertices == 1021 && PrimitiveCount == 922 ) || \
( NumVertices == 114 && PrimitiveCount == 162 ) || \
( NumVertices == 151 && PrimitiveCount == 130 ) || \
( NumVertices == 28 && PrimitiveCount == 28 ))

#define MarineSas1_SpecOps \
((NumVertices == 599 && PrimitiveCount == 418 ) || \
(NumVertices == 855 && PrimitiveCount == 1100 ) || \
(NumVertices == 296 && PrimitiveCount == 188 ) || \
(NumVertices == 834 && PrimitiveCount == 770 ) || \
(NumVertices == 233 && PrimitiveCount == 330 ) || \
(NumVertices == 976 && PrimitiveCount == 1372 ) || \
(NumVertices == 142 && PrimitiveCount == 174 ) || \
(NumVertices == 513 && PrimitiveCount == 674 ) || \
(NumVertices == 623 && PrimitiveCount == 592 ) || \
(NumVertices == 3790 && PrimitiveCount == 4078 ) || \
(NumVertices == 165 && PrimitiveCount == 146 ) || \
(NumVertices == 2784 && PrimitiveCount == 2384 ) || \
(NumVertices == 34 && PrimitiveCount == 30 ) || \
(NumVertices == 25 && PrimitiveCount == 22 ) || \
(NumVertices == 1572 && PrimitiveCount == 1166 ) || \
(NumVertices == 634 && PrimitiveCount == 372 ) || \
( NumVertices == 183 && PrimitiveCount == 112 ) || \
( NumVertices == 49 && PrimitiveCount == 50 ) || \
( NumVertices == 40 && PrimitiveCount == 40 ) || \
( NumVertices == 795 && PrimitiveCount == 704 ) || \
( NumVertices == 150 && PrimitiveCount == 96 ))

#define MarineSas1_Gunner \
((NumVertices == 394 && PrimitiveCount == 274 ) || \
(NumVertices == 716 && PrimitiveCount == 962 ) || \
(NumVertices == 283 && PrimitiveCount == 170 ) || \
(NumVertices == 596 && PrimitiveCount == 704 ) || \
(NumVertices == 275 && PrimitiveCount == 322 ) || \
(NumVertices == 127 && PrimitiveCount == 124 ) || \
(NumVertices == 178 && PrimitiveCount == 166 ) || \
(NumVertices == 3597 && PrimitiveCount == 4280 ) || \
(NumVertices == 2301 && PrimitiveCount == 2364 ) || \
(NumVertices == 828 && PrimitiveCount == 1300 ) || \
(NumVertices == 493 && PrimitiveCount == 688 ) || \
(NumVertices == 1341 && PrimitiveCount == 1132 ) || \
(NumVertices == 580 && PrimitiveCount == 380 ) || \
( NumVertices == 802 && PrimitiveCount == 800 ) || \
( NumVertices == 193 && PrimitiveCount == 140 ))

#define MarineSas1_Demolition \
((NumVertices == 367 && PrimitiveCount == 298 ) || \
(NumVertices == 686 && PrimitiveCount == 952 ) || \
(NumVertices == 308 && PrimitiveCount == 212 ) || \
(NumVertices == 568 && PrimitiveCount == 698 ) || \
(NumVertices == 306 && PrimitiveCount == 274 ) || \
(NumVertices == 4050 && PrimitiveCount == 4486 ) || \
(NumVertices == 2540 && PrimitiveCount == 2444 ) || \
(NumVertices == 689 && PrimitiveCount == 1172 ) || \
(NumVertices == 356 && PrimitiveCount == 566 ) || \
(NumVertices == 6 && PrimitiveCount == 2 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 1488 && PrimitiveCount == 1114 ) || \
(NumVertices == 592 && PrimitiveCount == 374 ) || \
( NumVertices == 628 && PrimitiveCount == 670 ) || \
( NumVertices == 105 && PrimitiveCount == 74 ))

#define Marine_Sniper \
((NumVertices == 213 && PrimitiveCount == 282 ) || \
(NumVertices == 874 && PrimitiveCount == 1228 ) || \
(NumVertices == 106 && PrimitiveCount == 114 ) || \
(NumVertices == 537 && PrimitiveCount == 698 ) || \
(NumVertices == 681 && PrimitiveCount == 588 ) || \
(NumVertices == 2516 && PrimitiveCount == 2940 ) || \
(NumVertices == 337 && PrimitiveCount == 240 ) || \
(NumVertices == 1726 && PrimitiveCount == 1760 ) || \
(NumVertices == 822 && PrimitiveCount == 1084 ) || \
(NumVertices == 562 && PrimitiveCount == 632 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 1020 && PrimitiveCount == 872 ) || \
(NumVertices == 587 && PrimitiveCount == 370 ) || \
( NumVertices == 204 && PrimitiveCount == 172 ) || \
( NumVertices == 63 && PrimitiveCount == 62 ) || \
( NumVertices == 140 && PrimitiveCount == 104 ) || \
( NumVertices == 53 && PrimitiveCount == 50 ) || \
( NumVertices == 635 && PrimitiveCount == 654 ) || \
( NumVertices == 137 && PrimitiveCount == 100 ))

#define Sas_Assault \
(( NumVertices == 154 && PrimitiveCount == 140 ) || \
( NumVertices == 3935 && PrimitiveCount == 5226 ) || \
( NumVertices == 2640 && PrimitiveCount == 3070 ) || \
( NumVertices == 960 && PrimitiveCount == 1072 ) || \
( NumVertices == 418 && PrimitiveCount == 636 ) || \
( NumVertices == 475 && PrimitiveCount == 486 ) || \
( NumVertices == 212 && PrimitiveCount == 288 ) || \
( NumVertices == 585 && PrimitiveCount == 440 ) || \
( NumVertices == 214 && PrimitiveCount == 202 ) || \
( NumVertices == 1373 && PrimitiveCount == 1256 ) || \
( NumVertices == 132 && PrimitiveCount == 130 ) || \
( NumVertices == 90 && PrimitiveCount == 140 ) || \
( NumVertices == 118 && PrimitiveCount == 120 ))

#define Sas_SpecOps \
(( NumVertices == 131 && PrimitiveCount == 122 ) || \
( NumVertices == 3585 && PrimitiveCount == 4858 ) || \
( NumVertices == 2525 && PrimitiveCount == 3022 ) || \
( NumVertices == 591 && PrimitiveCount == 740 ) || \
( NumVertices == 418 && PrimitiveCount == 672 ) || \
( NumVertices == 255 && PrimitiveCount == 282 ) || \
( NumVertices == 153 && PrimitiveCount == 182 ) || \
( NumVertices == 90 && PrimitiveCount == 140 ) || \
( NumVertices == 14 && PrimitiveCount == 12 ) || \
( NumVertices == 182 && PrimitiveCount == 186 ) || \
( NumVertices == 695 && PrimitiveCount == 478 ) || \
( NumVertices == 132 && PrimitiveCount == 130 ) || \
( NumVertices == 118 && PrimitiveCount == 120 ) || \
( NumVertices == 1498 && PrimitiveCount == 1304 ))

#define Sas_Gunner \
(( NumVertices == 136 && PrimitiveCount == 124 ) || \
( NumVertices == 3716 && PrimitiveCount == 5064 ) || \
( NumVertices == 2578 && PrimitiveCount == 2994 ) || \
( NumVertices == 260 && PrimitiveCount == 250 ) || \
( NumVertices == 491 && PrimitiveCount == 756 ) || \
( NumVertices == 182 && PrimitiveCount == 154 ) || \
( NumVertices == 234 && PrimitiveCount == 328 ) || \
( NumVertices == 24 && PrimitiveCount == 22 ) || \
( NumVertices == 24 && PrimitiveCount == 22 ) || \
( NumVertices == 166 && PrimitiveCount == 128 ) || \
( NumVertices == 568 && PrimitiveCount == 470 ) || \
( NumVertices == 1412 && PrimitiveCount == 1330 ) || \
( NumVertices == 132 && PrimitiveCount == 130 ) || \
( NumVertices == 118 && PrimitiveCount == 120 ))

#define Sas_Demo \
(( NumVertices == 494 && PrimitiveCount == 544 ) || \
( NumVertices == 174 && PrimitiveCount == 218 ) || \
( NumVertices == 1000 && PrimitiveCount == 1164 ) || \
( NumVertices == 425 && PrimitiveCount == 636 ) || \
( NumVertices == 133 && PrimitiveCount == 122 ) || \
( NumVertices == 3562 && PrimitiveCount == 4784 ) || \
( NumVertices == 2509 && PrimitiveCount == 2954 ) || \
( NumVertices == 292 && PrimitiveCount == 296 ) || \
( NumVertices == 628 && PrimitiveCount == 450 ) || \
( NumVertices == 1402 && PrimitiveCount == 1164 ) || \
( NumVertices == 132 && PrimitiveCount == 130 ) || \
( NumVertices == 118 && PrimitiveCount == 120 ))

#define Sas_Sniper1 \
((NumVertices == 438 && PrimitiveCount == 376 ) || \
(NumVertices == 2334 && PrimitiveCount == 2826 ) || \
(NumVertices == 177 && PrimitiveCount == 120 ) || \
(NumVertices == 1615 && PrimitiveCount == 1706 ) || \
(NumVertices == 822 && PrimitiveCount == 1084 ) || \
(NumVertices == 562 && PrimitiveCount == 632 ) || \
(NumVertices == 698 && PrimitiveCount == 1200 ) || \
(NumVertices == 357 && PrimitiveCount == 566 ) || \
(NumVertices == 49 && PrimitiveCount == 50 ) || \
(NumVertices == 470 && PrimitiveCount == 506 ) || \
(NumVertices == 71 && PrimitiveCount == 50 ) || \
(NumVertices == 1021 && PrimitiveCount == 872 ) || \
(NumVertices == 541 && PrimitiveCount == 366 ) || \
( NumVertices == 204 && PrimitiveCount == 172 ) || \
( NumVertices == 140 && PrimitiveCount == 104 ))

#define Sas_Sniper2 \
(( NumVertices == 314 && PrimitiveCount == 294 ) || \
( NumVertices == 544 && PrimitiveCount == 832 ) || \
( NumVertices == 236 && PrimitiveCount == 198 ) || \
( NumVertices == 298 && PrimitiveCount == 420 ) || \
( NumVertices == 2460 && PrimitiveCount == 2882 ) || \
( NumVertices == 3667 && PrimitiveCount == 4952 ) || \
( NumVertices == 194 && PrimitiveCount == 142 ) || \
( NumVertices == 552 && PrimitiveCount == 452 ) || \
( NumVertices == 1479 && PrimitiveCount == 1402 ) || \
( NumVertices == 118 && PrimitiveCount == 120 ) || \
( NumVertices == 136 && PrimitiveCount == 124 ))

#define Spetznas_Assault \
((NumVertices == 4358 && PrimitiveCount == 4864 ) || \
(NumVertices == 3278 && PrimitiveCount == 3188 ) || \
(NumVertices == 892 && PrimitiveCount == 1108 ) || \
(NumVertices == 584 && PrimitiveCount == 568 ) || \
(NumVertices == 783 && PrimitiveCount == 1168 ) || \
(NumVertices == 503 && PrimitiveCount == 704 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 103 && PrimitiveCount == 130 ) || \
(NumVertices == 1633 && PrimitiveCount == 1332 ) || \
(NumVertices == 840 && PrimitiveCount == 618 ) || \
( NumVertices == 625 && PrimitiveCount == 612 ) || \
( NumVertices == 288 && PrimitiveCount == 260 ))

#define Spetznas_SpecOps \
((NumVertices == 424 && PrimitiveCount == 346 ) || \
(NumVertices == 4242 && PrimitiveCount == 5028 ) || \
(NumVertices == 323 && PrimitiveCount == 260 ) || \
(NumVertices == 2391 && PrimitiveCount == 2488 ) || \
(NumVertices == 793 && PrimitiveCount == 834 ) || \
(NumVertices == 409 && PrimitiveCount == 588 ) || \
(NumVertices == 592 && PrimitiveCount == 532 ) || \
(NumVertices == 274 && PrimitiveCount == 350 ) || \
(NumVertices == 796 && PrimitiveCount == 1036 ) || \
(NumVertices == 607 && PrimitiveCount == 512 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 26 && PrimitiveCount == 24 ) || \
(NumVertices == 26 && PrimitiveCount == 24 ) || \
(NumVertices == 425 && PrimitiveCount == 316 ) || \
(NumVertices == 1689 && PrimitiveCount == 1422 ) || \
(NumVertices == 384 && PrimitiveCount == 250 ) || \
(NumVertices == 969 && PrimitiveCount == 708 ) || \
( NumVertices == 625 && PrimitiveCount == 612 ) || \
( NumVertices == 288 && PrimitiveCount == 260 ) || \
( NumVertices == 553 && PrimitiveCount == 544 ) || \
( NumVertices == 163 && PrimitiveCount == 116 ))

#define Spetznas_Gunner \
((NumVertices == 4270 && PrimitiveCount == 4804 ) || \
(NumVertices == 2755  && PrimitiveCount == 2494 ) || \
(NumVertices == 231  && PrimitiveCount == 244 ) || \
(NumVertices == 125  && PrimitiveCount == 142 ) || \
(NumVertices == 880  && PrimitiveCount == 1108 ) || \
(NumVertices == 584  && PrimitiveCount == 568 ) || \
(NumVertices == 745  && PrimitiveCount == 1216 ) || \
(NumVertices == 540  && PrimitiveCount == 812 ) || \
(NumVertices == 98  && PrimitiveCount == 144 ) || \
(NumVertices == 1317  && PrimitiveCount == 1054 ) || \
(NumVertices == 809  && PrimitiveCount == 590 ) || \
( NumVertices == 553 && PrimitiveCount == 544 ) || \
( NumVertices == 163 && PrimitiveCount == 116 ) || \
( NumVertices == 773 && PrimitiveCount == 828 ) || \
( NumVertices == 286 && PrimitiveCount == 300 ))

#define Spetznas_Demolition \
((NumVertices == 267  && PrimitiveCount == 186 ) || \
(NumVertices == 3891  && PrimitiveCount == 4598 ) || \
(NumVertices == 263  && PrimitiveCount == 178 ) || \
(NumVertices == 2510  && PrimitiveCount == 2470 ) || \
(NumVertices == 793 && PrimitiveCount == 834 ) || \
(NumVertices == 409 && PrimitiveCount == 588 ) || \
(NumVertices == 592 && PrimitiveCount == 532 ) || \
(NumVertices == 274 && PrimitiveCount == 350 ) || \
(NumVertices == 529  && PrimitiveCount == 540 ) || \
(NumVertices == 353  && PrimitiveCount == 346 ) || \
(NumVertices == 796 && PrimitiveCount == 1036 ) || \
(NumVertices == 607 && PrimitiveCount == 512 ) || \
(NumVertices == 26 && PrimitiveCount == 24 ) || \
(NumVertices == 26 && PrimitiveCount == 24 ) || \
(NumVertices == 14 && PrimitiveCount == 12 ) || \
(NumVertices == 90 && PrimitiveCount == 140 ) || \
(NumVertices == 171  && PrimitiveCount == 114 ) || \
(NumVertices == 1398  && PrimitiveCount == 1176 ) || \
(NumVertices == 384 && PrimitiveCount == 250 ) || \
(NumVertices == 994  && PrimitiveCount == 714 ) || \
( NumVertices == 625 && PrimitiveCount == 612 ) || \
( NumVertices == 288 && PrimitiveCount == 260 ) || \
( NumVertices == 425 && PrimitiveCount == 316 ) || \
( NumVertices == 163 && PrimitiveCount == 116 ) || \
( NumVertices == 553 && PrimitiveCount == 544 ))

#define Spetznas_Sniper \
((NumVertices == 212  && PrimitiveCount == 146 ) || \
(NumVertices == 3254  && PrimitiveCount == 4122 ) || \
(NumVertices == 166  && PrimitiveCount == 128 ) || \
(NumVertices == 1730  && PrimitiveCount == 1938 ) || \
(NumVertices == 796  && PrimitiveCount == 1036 ) || \
(NumVertices == 607  && PrimitiveCount == 512 ) || \
(NumVertices == 498  && PrimitiveCount == 840 ) || \
(NumVertices == 327  && PrimitiveCount == 500 ) || \
(NumVertices == 102  && PrimitiveCount == 144 ) || \
(NumVertices == 1111  && PrimitiveCount == 986 ) || \
(NumVertices == 724  && PrimitiveCount == 562 ) || \
( NumVertices == 545 && PrimitiveCount == 560 ) || \
( NumVertices == 189 && PrimitiveCount == 172 ))

#define Spetznas_Sniper2 \
(( NumVertices == 388 && PrimitiveCount == 322 ) || \
( NumVertices == 3326 && PrimitiveCount == 4336 ) || \
( NumVertices == 182 && PrimitiveCount == 154 ) || \
( NumVertices == 2140 && PrimitiveCount == 2310 ) || \
( NumVertices == 146 && PrimitiveCount == 214 ) || \
( NumVertices == 690 && PrimitiveCount == 1074 ) || \
( NumVertices == 91 && PrimitiveCount == 114 ) || \
( NumVertices == 446 && PrimitiveCount == 632 ) || \
( NumVertices == 146 && PrimitiveCount == 116 ) || \
( NumVertices == 1315 && PrimitiveCount == 1170 ) || \
( NumVertices == 726 && PrimitiveCount == 556 ) || \
( NumVertices == 651 && PrimitiveCount == 702 ) || \
( NumVertices == 201 && PrimitiveCount == 170 ) || \
( NumVertices == 796 && PrimitiveCount == 1036 ) || \
( NumVertices == 607 && PrimitiveCount == 512 ))

#define Sniper_Camouflage \
(( NumVertices == 2578 && PrimitiveCount == 2192 ) || \
( NumVertices == 398 && PrimitiveCount == 410 ) || \
( NumVertices == 2388 && PrimitiveCount == 2040 ) || \
( NumVertices == 222 && PrimitiveCount == 298 ) || \
( NumVertices == 1186 && PrimitiveCount == 1184 ) || \
( NumVertices == 71 && PrimitiveCount == 66 ) || \
( NumVertices == 339 && PrimitiveCount == 248 ) || \
( NumVertices == 482 && PrimitiveCount == 476 ) || \
( NumVertices == 428 && PrimitiveCount == 446 ) || \
( NumVertices == 2328 && PrimitiveCount == 1992 ) || \
( NumVertices == 132 && PrimitiveCount == 158 ) || \
( NumVertices == 153 && PrimitiveCount == 194 ) || \
( NumVertices == 349 && PrimitiveCount == 254 ))

#define Cobra_Helicopter \
((NumVertices == 2335 && PrimitiveCount == 2166 ) || \
(NumVertices == 275 && PrimitiveCount == 182 ) || \
(NumVertices == 323 && PrimitiveCount == 306 ) || \
(NumVertices == 961 && PrimitiveCount == 656 ) || \
(NumVertices == 278 && PrimitiveCount == 184 ))

#define Mi28_Helicopter \
((NumVertices == 902 && PrimitiveCount == 664 ) || \
(NumVertices == 219 && PrimitiveCount == 118 ) || \
(NumVertices == 1724 && PrimitiveCount == 1466 ) || \
(NumVertices == 3437 && PrimitiveCount == 2646 ) || \
(NumVertices == 32 && PrimitiveCount == 18 ))