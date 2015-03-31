/*
** Game Name: Medal Of Honour 2010
** File Name: MedalOfHonour2010.h
** Author: smoochy (uc-forum.com)
** Description: Model Recognition for Model Of Honour 2010
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/

#ifndef __MOH_MODEL_REC_H__
#define __MOH_MODEL_REC_H__

#define COALITION ((g_Stride == 48 && g_NumVertices == 133 && g_primCount == 68 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 500 && g_primCount == 120 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 1662 && g_primCount == 1014 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 612 && g_primCount == 258 && g_startIndex == 3042) || (g_Stride == 48 && g_NumVertices == 268 && g_primCount == 299 && g_startIndex == 294) || (g_Stride == 48 && g_NumVertices == 329 && g_primCount == 98 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1927 && g_primCount == 788 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 500 && g_primCount == 120 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1330 && g_primCount == 843 && g_startIndex == 2418) || (g_Stride == 48 && g_NumVertices == 2053 && g_primCount == 806 && g_startIndex == 0) ||   (g_Stride == 48 && g_NumVertices == 476 && g_primCount == 450 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 180 && g_primCount == 80 && g_startIndex == 1350) ||  (g_Stride == 48 && g_NumVertices == 2269 && g_primCount == 1014 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1220 && g_primCount == 639 && g_startIndex == 3042) ||  (g_Stride == 48 && g_NumVertices == 853 && g_primCount == 299 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 884 && g_primCount == 618 && g_startIndex == 2688) ||  (g_Stride == 48 && g_NumVertices == 209 && g_primCount == 108 && g_startIndex == 1389) ||  (g_Stride == 48 && g_NumVertices == 2159 && g_primCount == 700 && g_startIndex == 663) ||  (g_Stride == 48 && g_NumVertices == 227 && g_primCount == 150 && g_startIndex == 1389) ||  (g_Stride == 48 && g_NumVertices == 2059 && g_primCount == 636 && g_startIndex == 663) || (g_Stride == 48 && g_NumVertices == 1343 && g_primCount == 1014 && g_startIndex == 1821) ||  (g_Stride == 48 && g_NumVertices == 2179 && g_primCount == 607 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 320 && g_primCount == 299 && g_startIndex == 1206) ||  (g_Stride == 48 && g_NumVertices == 1087 && g_primCount == 745 && g_startIndex == 2688) ||  (g_Stride == 48 && g_NumVertices == 183 && g_primCount == 106 && g_startIndex == 1035) ||  (g_Stride == 48 && g_NumVertices == 180 && g_primCount == 80 && g_startIndex == 1350) ||  (g_Stride == 48 && g_NumVertices == 1953 && g_primCount == 794 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 180 && g_primCount == 80 && g_startIndex == 1350) ||  (g_Stride == 48 && g_NumVertices == 2269 && g_primCount == 1014 && g_startIndex == 0) ||  (g_Stride == 64 && g_NumVertices == 8475 && g_primCount == 3891 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 9542 && g_primCount == 3384 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 4471 && g_primCount == 1832 && g_startIndex == 1647) ||  (g_Stride == 48 && g_NumVertices == 451 && g_primCount == 218 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 212 && g_primCount == 94 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 1738 && g_primCount == 1086 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 368 && g_primCount == 192 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 368 && g_primCount == 192 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 4436 && g_primCount == 1869 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 2777 && g_primCount == 740 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 206 && g_primCount == 152 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 5803 && g_primCount == 3212 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 3199 && g_primCount == 2011 && g_startIndex == 9636) ||   (g_Stride == 48 && g_NumVertices == 3932 && g_primCount == 2997 && g_startIndex == 8685) ||  (g_Stride == 48 && g_NumVertices == 6300 && g_primCount == 2895 && g_startIndex == 0) ||   (g_Stride == 48 && g_NumVertices == 10070 && g_primCount == 2964 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 1343 && g_primCount == 1014 && g_startIndex == 1821) || (g_Stride == 48 && g_NumVertices == 1330 && g_primCount == 843 && g_startIndex == 2418) ||  (g_Stride == 48 && g_NumVertices == 1662 && g_primCount == 1014 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 1513 && g_primCount == 1044 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 4746 && g_primCount == 1604 && g_startIndex == 1647) || (g_Stride == 64 && g_NumVertices == 9451 && g_primCount == 4779 && g_startIndex == 0) || (g_Stride == 64 && g_NumVertices == 2736 && g_primCount == 564 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 14173 && g_primCount == 6856 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 7828 && g_primCount == 5980 && g_startIndex == 20568) ||(g_Stride == 48 && g_NumVertices == 190 && g_primCount == 110 && g_startIndex == 0) ||  (g_Stride == 64 && g_NumVertices == 5483 && g_primCount == 5076 && g_startIndex == 8355) ||  (g_Stride == 64 && g_NumVertices == 8455 && g_primCount == 2785 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 4361 && g_primCount == 3212 && g_startIndex == 0) ||  (g_Stride == 48 && g_NumVertices == 1756 && g_primCount == 878 && g_startIndex == 9636) ||  (g_Stride == 48 && g_NumVertices == 2515 && g_primCount == 2014 && g_startIndex == 6651) || (g_Stride == 48 && g_NumVertices == 1012 && g_primCount == 806 && g_startIndex == 2526) || (g_Stride == 48 && g_NumVertices == 367 && g_primCount == 384 && g_startIndex == 978) || (g_Stride == 48 && g_NumVertices == 371 && g_primCount == 158 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2106 && g_primCount == 842 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1031 && g_primCount == 806 && g_startIndex == 2295) || (g_Stride == 48 && g_NumVertices == 322 && g_primCount == 359 && g_startIndex == 291) || (g_Stride == 48 && g_NumVertices == 419 && g_primCount == 97 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 718 && g_primCount == 300 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2006 && g_primCount == 765 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 5212 && g_primCount == 2420 && g_startIndex == 0) ||  (g_Stride == 64 && g_NumVertices == 11479 && g_primCount == 4952 && g_startIndex == 0) || (g_Stride == 64 && g_NumVertices == 5880 && g_primCount == 5138 && g_startIndex == 14856) || (g_Stride == 48 && g_NumVertices == 780 && g_primCount == 232 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 6668 && g_primCount == 2508 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 3631 && g_primCount == 3212 && g_startIndex == 7524) || (g_Stride == 64 && g_NumVertices == 5734 && g_primCount == 5138 && g_startIndex == 11424) || (g_Stride == 64 && g_NumVertices == 9869 && g_primCount == 3808 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2875 && g_primCount == 1872 && g_startIndex == 10224) || (g_Stride == 48 && g_NumVertices == 4939 && g_primCount == 3408 && g_startIndex == 0) ||(g_Stride == 48 && g_NumVertices == 4472 && g_primCount == 1752 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2576 && g_primCount == 2920 && g_startIndex == 5256) || (g_Stride == 48 && g_NumVertices == 1565 && g_primCount == 384 && g_startIndex == 16521) || (g_Stride == 48 && g_NumVertices == 16456 && g_primCount == 7856 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 8019 && g_primCount == 5980 && g_startIndex == 23568) || (g_Stride == 48 && g_NumVertices == 7156 && g_primCount == 3457 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 3524 && g_primCount == 2895 && g_startIndex == 10371) || (g_Stride == 48 && g_NumVertices == 12720 && g_primCount == 6174 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 6898 && g_primCount == 5476 && g_startIndex == 18522) || (g_Stride == 48 && g_NumVertices == 2605 && g_primCount == 2920 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 860 && g_primCount == 380 && g_startIndex == 8760) || (g_Stride == 48 && g_NumVertices == 7083 && g_primCount == 5152 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 3301 && g_primCount == 2895 && g_startIndex == 7626) || (g_Stride == 48 && g_NumVertices == 5662 && g_primCount == 2542 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2428 && g_primCount == 2920 && g_startIndex == 5148) || (g_Stride == 48 && g_NumVertices == 4210 && g_primCount == 1246 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 3097 && g_primCount == 418 && g_startIndex == 3738) || (g_Stride == 48 && g_NumVertices == 4245 && g_primCount == 2934 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 2472 && g_primCount == 536 && g_startIndex == 8802) )
#define OPFORCE   ((g_Stride == 48 && g_NumVertices == 6510 && g_primCount == 4563 && g_startIndex == 10152 || (g_Stride == 48 && g_NumVertices == 2297 && g_primCount == 2788 && g_startIndex == 2220) || (g_Stride == 48 && g_NumVertices == 3640 && g_primCount == 3246 && g_startIndex == 15456) || (g_Stride == 48 && g_NumVertices == 500 && g_primCount == 463 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1421 && g_primCount == 896 && g_startIndex == 2763) || (g_Stride == 48 && g_NumVertices == 1991 && g_primCount == 896 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 398 && g_primCount == 345 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 4408 && g_primCount == 2217 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 6638 && g_primCount == 6007 && g_startIndex == 7692) || (g_Stride == 48 && g_NumVertices == 2893 && g_primCount == 2644 && g_startIndex == 3606) || (g_Stride == 48 && g_NumVertices == 4840 && g_primCount == 4563 && g_startIndex == 10098) || (g_Stride == 48 && g_NumVertices == 2675 && g_primCount == 2788 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 4038 && g_primCount == 2217 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 482 && g_primCount == 463 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1792 && g_primCount == 896 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 6052 && g_primCount == 5782 && g_startIndex == 12156) ||  (g_Stride == 48 && g_NumVertices == 2563 && g_primCount == 3251 && g_startIndex == 1374) ||  (g_Stride == 48 && g_NumVertices == 1658 && g_primCount == 1990 && g_startIndex == 0) || (g_Stride == 64 && g_NumVertices == 2254 && g_primCount == 2881 && g_startIndex == 1692) || (g_Stride == 64 && g_NumVertices == 5512 && g_primCount == 5483 && g_startIndex == 14337) || (g_Stride == 48 && g_NumVertices == 2895 && g_primCount == 2217 && g_startIndex == 7143) || (g_Stride == 48 && g_NumVertices == 1163 && g_primCount == 791 && g_startIndex == 2364) || (g_Stride == 48 && g_NumVertices == 3028 && g_primCount == 2759 && g_startIndex == 5607) ||  (g_Stride == 64 && g_NumVertices == 5528 && g_primCount == 5623 && g_startIndex == 11673) || (g_Stride == 48 && g_NumVertices == 510 && g_primCount == 543 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 1409 && g_primCount == 836 && g_startIndex == 2571) ||(g_Stride == 48 && g_NumVertices == 430 && g_primCount == 516 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 432 && g_primCount == 412 && g_startIndex == 0) || (g_Stride == 48 && g_NumVertices == 3143 && g_primCount == 2759 && g_startIndex == 7260) || (g_Stride == 48 && g_NumVertices == 1165 && g_primCount == 791 && g_startIndex == 2382) || (g_Stride == 48 && g_NumVertices == 3420 && g_primCount == 2913 && g_startIndex == 6459) ))

#endif /* __MOH_MODEL_REC_H__ */  