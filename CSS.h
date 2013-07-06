/*
** Game Name: Counter-strike Source (CSS)
** File Name: CSS.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Counter-strike Source
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/


#define PLAYERS (COUNTER_TERRORIST | TERRORISTS)

#define COUNTER_TERRORIST  (mStride == 64 && 
						   (NumVertices == 369 && primCount == 297)   ||  
						   (NumVertices == 513 && primCount == 451)   ||
						   (NumVertices == 899 && primCount == 910)   ||
						   (NumVertices == 1609 && primCount == 1794) ||
						   (NumVertices == 2487 && primCount == 3006) ||
						   (NumVertices == 324 && primCount == 372)   ||
						   (NumVertices == 466 && primCount == 550)   ||
						   (NumVertices == 811 && primCount == 989)   ||
						   (NumVertices == 1404 && primCount == 1919) ||
						   (NumVertices == 2196 && primCount == 3061) ||
						   (NumVertices == 409 && primCount == 433)   ||
						   (NumVertices == 499 && primCount == 533)   ||
						   (NumVertices == 929 && primCount == 1007)  ||
						   (NumVertices == 1498 && primCount == 1822) ||
						   (NumVertices == 2245 && primCount == 2998) ||
						   (NumVertices == 343 && primCount == 344)	  ||
						   (NumVertices == 475 && primCount == 510)   ||
						   (NumVertices == 814 && primCount == 945)   ||
						   (NumVertices == 1424 && primCount == 1858) ||
						   (NumVertices == 2130 && primCount == 3004))


#define TERRORISTS         (mStride == 64 && 
						   (NumVertices == 368 && primCount == 377)   ||
						   (NumVertices == 563 && primCount == 590)   ||
						   (NumVertices == 873 && primCount == 986)   ||
						   (NumVertices == 1510 && primCount == 1871) ||
						   (NumVertices == 2274 && primCount == 3070) ||
						   (NumVertices == 389 && primCount == 386)   ||
						   (NumVertices == 526 && primCount == 594)   ||
						   (NumVertices == 911 && primCount == 996)   ||
						   (NumVertices == 1588 && primCount == 2013) ||
						   (NumVertices == 2261 && primCount == 3003) ||
						   (NumVertices == 323 && primCount == 338)   ||
						   (NumVertices == 454 && primCount == 519)   ||
						   (NumVertices == 735 && primCount == 899)   ||
						   (NumVertices == 1311 && primCount == 1812) ||
   						   (NumVertices == 1992 && primCount == 2996) ||
   						   (NumVertices == 408 && primCount == 344)	  ||
   						   (NumVertices == 554 && primCount == 509)   ||
   						   (NumVertices == 835 && primCount == 899)   ||
   						   (NumVertices == 1488 && primCount == 1819) ||
   						   (NumVertices == 2292 && primCount == 3015))