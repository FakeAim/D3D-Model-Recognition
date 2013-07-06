/*
** Game Name: Rising Storm (Red Orchestra 2 Total Conversion / Mod)
** File Name: RisingStorm.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Rising Storm, a red orchestra 2 total conversion/mod. 
**  			The players are all drawn on the same stride, so it is possible
** 				to wall hack both teams using the single stride. 
*/

#define PLAYERS (mStride == 32 || mStride == 40)