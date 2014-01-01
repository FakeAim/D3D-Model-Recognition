/*
** Game Name: Red Orchestra
** File Name: RedOrchestra.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Red Orchestra: Ostfront 41-45
**  			The players are all drawn on the same stride, so it is possible
** 				to wall hack both teams using the single stride. 
**			
**			Despite the difference in the Unreal Engine Versions (Unreal Engine 2.5 vs Unreal Engine 3)
**			the players are still drawn on the same stride. 
*/

#define PLAYERS (mStride == 32 || mStride == 40)