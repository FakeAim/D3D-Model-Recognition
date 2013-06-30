/*
** Game Name: Day Of Defeat Source / DODS
** File Name: DayOfDefeatSource.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Day Of Defeat Source 
*/

#define ALLIED_PLAYERS ( mStride == 64 && (GARAND_PLAYER || THOMPSON_PLAYER || SNIPER_PLAYER || MG_PLAYER || BAR_PLAYER || BAZOOKA_PLAYER)) 
#define GARAND_PLAYER ((NumVertices == 75  && primCount == 96) || (NumVertices == 628 && primCount == 670) || (NumVertices == 976 && primCount == 1348) || (NumVertices == 843 && primCount == 960) || (NumVertices == 976 && primCount == 1348) || (NumVertices == 1509 && primCount == 1348) || (NumVertices == 1509 && primCount == 1564) || (NumVertices == 976 && primCount == 1348) || (NumVertices == 546 && primCount == 658)) 
#define THOMPSON_PLAYER ((NumVertices == 75 && primCount == 96) || (NumVertices == 471  && primCount == 604) ||  (NumVertices == 2084 && primCount == 572) || (NumVertices == 2084 && primCount == 655) || (NumVertices == 297 && primCount == 325) || (NumVertices == 1027 && primCount == 1422) || (NumVertices == 571 && primCount == 700) || (NumVertices == 1503 && primCount == 1697) || (NumVertices == 388 && primCount == 470) || (NumVertices == 571 && primCount == 700) || (NumVertices == 1027 && primCount == 1422) || (NumVertices == 571 && primCount == 700))
#define SNIPER_PLAYER ((NumVertices == 2077 && primCount == 1808) || (NumVertices == 437 && primCount == 590) || (NumVertices == 1507 && primCount == 1720) || (NumVertices == 341 && primCount == 434) || (NumVertices == 187 && primCount == 222) || (NumVertices == 341 && primCount == 434)  || (NumVertices == 1052 && primCount == 1466) || (NumVertices == 341 && primCount == 434) || (NumVertices == 585 && primCount == 720) || (NumVertices == 185 && primCount == 140)  || (NumVertices == 341 && primCount == 434))
#define BAR_PLAYER ((NumVertices == 709 && primCount == 830) || (NumVertices == 2032 && primCount == 104) || (NumVertices == 2032 && primCount == 401) ||  (NumVertices == 2032 && primCount == 630) ||  (NumVertices == 2032 && primCount == 1719) ||  (NumVertices == 442 && primCount == 458) ||  (NumVertices == 990 && primCount == 1364) ||  (NumVertices == 2032 && primCount == 1719) ||  (NumVertices == 1487 && primCount == 528) ||  (NumVertices == 1487 && primCount == 1588) || (NumVertices == 546 && primCount == 660))
#define MG_PLAYER ((NumVertices == 323  && primCount == 500) || (NumVertices == 515 && primCount == 715) || (NumVertices == 2514 && primCount == 2427) || (NumVertices == 2047 && primCount == 503) || (NumVertices == 2047 && primCount == 1888) || (NumVertices == 1499 && primCount == 1704) || (NumVertices == 1035 && primCount == 1436)  || (NumVertices == 582 && primCount == 718) || (NumVertices == 222 && primCount == 270) || (NumVertices == 102 && primCount == 122) || (NumVertices == 347 && primCount == 456)) 
#define BAZOOKA_PLAYER ((NumVertices == 529 && primCount == 624) || (NumVertices == 2469 && primCount == 2148) || (NumVertices == 222 && primCount == 270)  || (NumVertices == 388 && primCount == 450)  || (NumVertices == 294 && primCount == 318)  || (NumVertices == 159 && primCount == 153) || (NumVertices == 1445 && primCount == 433) || (NumVertices == 1445 && primCount == 1629) || (NumVertices == 159 && primCount == 153) || (NumVertices == 975 && primCount == 1315) || (NumVertices == 159 && primCount == 153) || (NumVertices == 556 && primCount == 672)) 

#define AXIS_PLAYERS ( mStride == 64 && (KAR98_PLAYER || MP40_PLAYER || STG44_PLAYER || KAR98SCOPE_PLAYER || PANZERFAUST_PLAYER || MG42_PLAYER)) 								
#define KAR98_PLAYER ((NumVertices == 130 && primCount == 148) || (NumVertices == 2153 && primCount == 389 ) || (NumVertices == 2153 && primCount == 548 ) || (NumVertices == 2153 && primCount == 1938) || (NumVertices == 1872 && primCount == 2193 ) || (NumVertices == 1431 && primCount == 1653 ) || (NumVertices == 1613 && primCount == 452 ) || (NumVertices == 1613 && primCount == 1750) || (NumVertices == 579 && primCount == 668) || (NumVertices == 1096 && primCount == 1454) || (NumVertices == 590 && primCount == 550)) 
#define MP40_PLAYER ((NumVertices == 2161 && primCount == 148) || (NumVertices == 2161 && primCount == 304) || (NumVertices == 2161 && primCount == 678) || (NumVertices == 2161 && primCount == 2042) || (NumVertices == 1690 && primCount == 1979) || (NumVertices == 941 && primCount == 1003) || (NumVertices == 1117 && primCount == 1480) || (NumVertices == 580 && primCount == 668)) 
#define STG44_PLAYER ((NumVertices == 130 && primCount == 148) || (NumVertices == 1565 && primCount == 1479) || (NumVertices == 1308  && primCount == 1414) || (NumVertices == 1565 && primCount == 483) || (NumVertices == 1112 && primCount == 1260) || (NumVertices == 686 && primCount == 708) || (NumVertices == 1055 && primCount == 1036) || (NumVertices == 686 && primCount == 708))
#define KAR98SCOPE_PLAYER ((NumVertices == 130 && primCount == 148) || (NumVertices == 990 && primCount == 1032) || (NumVertices == 2170 && primCount == 1996) || (NumVertices == 542 && primCount == 518) || (NumVertices == 583 && primCount == 672) || (NumVertices == 583 && primCount == 672) || (NumVertices == 1117 && primCount == 1480))
#define MG42_PLAYER  ((NumVertices == 1010 && primCount == 1010) || (NumVertices == 1671 && primCount == 1175) || (NumVertices == 1260 && primCount == 408)	 || (NumVertices == 1260 && primCount == 1024) || (NumVertices == 611 && primCount == 550)  || (NumVertices == 991 && primCount == 1140) || (NumVertices == 652 && primCount == 736))
#define PANZERFAUST_PLAYER  ((NumVertices == 922 && primCount == 1010) || (NumVertices == 2051 && primCount == 1675) || (NumVertices == 2051 && primCount == 402) || (NumVertices == 2051 && primCount == 770) || (NumVertices == 2051 && primCount == 770) || (NumVertices == 1567 && primCount == 508) || (NumVertices == 1567 && primCount == 1650) || (NumVertices == 1076 && primCount == 1430) || (NumVertices == 579 && primCount == 668))

#define GUNS ( mStride == 64 && (GARAND || THOMPSON || MP40 || MG42 || KAR98SCOPE || MG || BAZOOKA || BAR || SPRINGFIELD || KAR98 || STG44 || PANZERFAUST ))
#define GARAND ((NumVertices == 1310 && primCount == 1038 )) 
#define THOMPSON  ((NumVertices == 572 && primCount == 464 )) 
#define BAR ((NumVertices == 832 && primCount == 638 )) 
#define SPRINGFIELD ((NumVertices == 874 && primCount == 696 )) 
#define BAZOOKA ((NumVertices == 1963 && primCount == 1300 ))  
#define MG ((NumVertices == 753 && primCount == 613 )) 
#define KAR98  ((NumVertices == 881 && primCount == 715))
#define MP40 ((NumVertices == 756 && primCount == 612))
#define STG44 ((NumVertices == 617 && primCount == 507))
#define KAR98SCOPE ((NumVertices == 1219 && primCount == 993))
#define MG42 ((NumVertices == 872 && primCount == 730))
#define PANZERFAUST ((NumVertices == 2364 && primCount == 1545)) 

#define GRENADES (mStride == 64 && (AXIS_RIFLE_GRENADE || ALLIED_RIFLE_GRENADE || AXIS_GRENADE || ALLIED_RIFLE_GRENADE || ALLIED_GRENADE || ALLIED_SMOKE || AXIS_SMOKE))
#define AXIS_RIFLE_GRENADE  ((NumVertices == 96 && primCount == 98 )) 
#define AXIS_GRENADE  ((NumVertices == 230  && primCount == 260 ))
#define AXIS_SMOKE ((NumVertices == 227 && primCount == 260 ))
#define ALLIED_RIFLE_GRENADE  ((NumVertices == 165 && primCount == 150 ))
#define ALLIED_SMOKE	((NumVertices == 221 && primCount == 175 ))
#define ALLIED_GRENADE ((NumVertices == 160 && primCount == 146 ))