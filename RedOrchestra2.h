/*
** Game Name: Red Orchestra 2
** File Name: RedOrchestra2.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Red Orchestra 2
**  			The players are all drawn on the same stride, so it is possible
** 				to wall hack both teams using the single stride. 
*/

#define PLAYERS (mStride == 32 || mStride == 40)