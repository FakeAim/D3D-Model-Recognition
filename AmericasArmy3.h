/*
** Game Name: Americas Army 3 
** File Name: AmericasArmy3.h
** Author: HOOAH07 (uc-forum.com)
** Description: Model Recognition for Americas Army 3 (aa3)
** 				Players are all drawn on the same stride, the game has multiple
** 				DOF (Depths of field) and so there are multiple values per player. 
*/

#define Door (NumVertices == 115 && PrimitiveCount == 76)
#define Smoke (NumVertices == 323)//this is not full smoke this is only the dome around the smoke

 
////// ENEMY //////
#define EnemyLegs (Stride == 32 && NumVertices == 1455)
#define Helmet (Stride == 32 && NumVertices == 177)
#define Eyes (Stride == 32 && NumVertices == 242)
#define Mouth (Stride == 32 && NumVertices == 756)
#define Boots (Stride == 32 && NumVertices == 1819)
#define Armor (Stride == 32 && NumVertices == 4261)
#define Arms (Stride == 32 && NumVertices == 2317)
#define Hands (Stride == 32 && NumVertices == 3429)
#define Radio (Stride == 32 && NumVertices == 1018)
#define Belt (Stride == 32 && NumVertices == 827)
 

 
#define EnemyBody ( Helmet || Eyes || Mouth || Boots || Armor || Hands )//enemy
#define Clothes ( Arms || EnemyLegs || Radio )//enemy
 
//// Both ////
#define Mag (Stride == 32 && NumVertices == 182)////BOTH enemy and friendly
#define Head (Stride == 32 && (NumVertices == 1996 || NumVertices == 2136 || NumVertices == 1240))////BOTH enemy and friendly // Need do all other heads though
 
#define EnemyFriendly ( Mag || Belt || Head ) ////BOTH enemy and friendly
 
////FRIENDLY////
#define BACKPACK (Stride == 32 && (NumVertices == 50 || NumVertices == 82))
#define GLASSES (Stride == 32 && (NumVertices == 492 || NumVertices == 360 || NumVertices == 224))
#define TOPBODY (Stride == 32 && (NumVertices == 949 || NumVertices == 774 || NumVertices == 432 || NumVertices == 296))
#define TROUSERS (Stride == 32 && (NumVertices == 1348 || NumVertices == 1075 || NumVertices == 621 || NumVertices == 456))
#define HELMET (Stride == 32 && (NumVertices == 1675 || NumVertices == 1297 || NumVertices == 962 || NumVertices == 663))
#define BOOTS (Stride == 32 && (NumVertices == 1692 || NumVertices == 1367 || NumVertices == 807 || NumVertices == 550))
#define KNEEPADS (Stride == 32 && (NumVertices == 2202 || NumVertices == 1843 || NumVertices == 769)) /// needs finishing
#define HANDS (Stride == 32 && (NumVertices == 3314 || NumVertices == 2609)) /// needs finishing
#define ARMOR (Stride == 32 && (NumVertices == 4076 || NumVertices == 3234 || NumVertices == 1825 || NumVertices == 1115)) 
#define BOTTOMARMS (Stride == 32 && (NumVertices == 3655 || NumVertices == 2934)) ///needs finishing
#define Friendly ( BACKPACK || BOTTOMARMS || TOPBODY || TROUSERS || HELMET || BOOTS || KNEEPADS || HANDS || ARMOR )
 
 
//// Friendly guns ////
#define FriendlyGuns (Stride == 32 && (NumVertices == 116 || NumVertices == 79 || NumVertices == 60 || NumVertices == 96 || NumVertices == 66 || NumVertices == 134 || NumVertices == 444 || NumVertices == 701 || NumVertices == 715 || NumVertices == 1116 || NumVertices == 764 || NumVertices == 996 || NumVertices == 1548 || NumVertices == 1245 || NumVertices == 1055 || NumVertices == 1831 || NumVertices == 2060 || NumVertices == 2541 || NumVertices == 4634 || NumVertices == 4461 || NumVertices == 5334 || NumVertices == 4917 || NumVertices == 2863 || NumVertices == 2600 || NumVertices == 5146 || NumVertices == 1318))//// M16/320 needs finishing
 #define Scope (Stride == 32 && (NumVertices == 1872 || NumVertices == 1220 || NumVertices == 1200 || NumVertices == 614))
 
#define MySoldier1 (Stride == 32 && (NumVertices == 97 || NumVertices == 194 || NumVertices == 249 || NumVertices == 390))/// My Arms
#define MySoldier2 (Stride == 32 && (NumVertices == 1589 || NumVertices == 361 || NumVertices == 533)) // My boots and hands