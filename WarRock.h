/*
** Game Name: WarRock
** File Name: WarRock.h
** Author: Calvin Hartwell, SimPle01
** Description: Model Recognition for WarRock
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/

#define EffectsAndSmoke(Stride == 24)
#define Ground (Stride == 28)
#define Weapon (Stride == 32)
#define Player (Stride == 36)
#define Walls (Stride == 40)
#define Vehicles (Stride == 44)