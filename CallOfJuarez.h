/*
** Game Name: Call Of Juarez (COJ)
** File Name: CallOfJuarez.h
** Author: Calvin Hartwell (http://FakeAim.com)
** Description: Model Recognition for Call of Juarez, a Techland built Western Game. 
**  	
*/


#define SCOPE_REMOVAL ((primCount == 552) && (NumVertices==510))

#define PLAYERS (mStride == 8 && (riflelawmen1 || riflelawmen2 || riflelawmen3 || riflelawmen4
								  || gunslingerlawmen1  || gunslingerlawmen2 || gunslingerlawmen3
								  || gunslingerlawmen4  || gunslingerlawmen5 || gunslingeroutlaws1 
								  || gunslingeroutlaws2 || gunslingeroutlaws3 || gunslingeroutlaws4
								  || gunslingeroutlaws5 || rifleoutlaw1 || rifleoutlaw2 || rifleoutlaw3 
								  || rifleoutlaw4))

#define riflelawmen1 (NumVertices == 733 || NumVertices == 1962)// head boddy
#define riflelawmen2 (NumVertices == 551 || NumVertices == 1584)// head boddy
#define riflelawmen3 (NumVertices == 387 || NumVertices == 1163)// head boddy
#define riflelawmen4 (NumVertices == 201 || NumVertices == 698)// head boddy
#define gunslingerlawmen1 (NumVertices == 744 || NumVertices == 2318)// head boddy
#define gunslingerlawmen2 (NumVertices == 1818)// headintheoneabove boddy
#define gunslingerlawmen3 (NumVertices == 425 || NumVertices == 1342)// head boddy
#define gunslingerlawmen4 (NumVertices == 215 || NumVertices == 868)// head boddy
#define gunslingerlawmen5 (NumVertices == 2044)
//---------------------------------------------------------------------------------
#define gunslingeroutlaws1 (NumVertices == 826 || NumVertices == 3167)// head boddy
#define gunslingeroutlaws2 (NumVertices == 675 || NumVertices == 2434)// head boddy
#define gunslingeroutlaws3 (NumVertices == 520 || NumVertices == 1762)// head boddy
#define gunslingeroutlaws4 (NumVertices == 263 || NumVertices == 1016)// head boddy
#define gunslingeroutlaws5 ((NumVertices == 681 || NumVertices == 733 || NumVertices == 2044 || NumVertices == 558 || NumVertices == 1618 || NumVertices == 294 || NumVertices == 924 || NumVertices == 148 || NumVertices == 649)) 
#define rifleoutlaw1 (NumVertices == 683 || NumVertices == 1889 || NumVertices == 48 || NumVertices == 32)// head boddy fedder1 fedder2
#define rifleoutlaw2 (NumVertices == 481 || NumVertices == 1521)// head boddy
#define rifleoutlaw3 (NumVertices == 312 || NumVertices == 1196)// head boddy
#define rifleoutlaw4 (NumVertices == 166 || NumVertices == 697)// head bodd