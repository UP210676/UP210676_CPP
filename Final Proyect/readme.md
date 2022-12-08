# Cat Game || Tic Tac Toe || Xs and Os

[Code](https://github.com/UP210676/UP210676_CPP/blob/main/Final%20Proyect/GatoGame.cpp)

Is a pencil and paper game between two players: O and X, who alternately mark the spaces on a 3×3 board.

## Code final proyect
As a final project for our c++ code studies we chose to make the classic gato or tictactoe. To add some more fun we decided to make two game modes: "Player vs Player" and "Player vs PC".

We use the C++ language and the game is played on console drawn with characters; matrices to create the playing area, everything is handled by functions and a recursive function in the case of "Player vs IA" which needs the "minimax" algorithm. This readme will not delve into the subject.

<br>
<br>

---
 
 ## Player vs Player code
 My colleague Axel Saucedo made the code for this part of the program, in the end thanks to lack of time we were unable to make both programs look the same, however they work correctly. 
 As will be seen later in the flowchart, this is the part with fewer functions and a more linear flow.
 
 ---

 From this point on, the functions within the program are explained in descending order (order within the code, not flow).

 ---

 In the following code, you can see the part of the code that creates the "play area" or it can also be understood as the playable squares. This was created so that from now on using other functions you can manipulate the board as a row and column.
 ```c++
char GameArea[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
```

This incomplete part of the function that checks for the end of the game is the most important part of the code. By means of conditional ifs with comparisons, matches are sought in the following manner: line, diagonal and horizontal. If one is true, return true (see the [code](https://github.com/UP210676/UP210676_CPP/blob/main/Final%20Proyect/GatoGame.cpp) to read the complete function).

``` c++
bool CheckWinner(int Play)
{
    bool VerifyWinner = false;
    for (int position = 0; position < 3; position++)
    {
        if ((GameArea[0][position] == GameArea[1][position]) && (GameArea[0][position] == GameArea[2][position]))
        {
            VerifyWinner = true;
            break;
        }
```

<br>
<br>

# Player vs IA code
For the realization of this code, on my part, Axel Gutiérrez was very similar. The most noticeable difference is the implementation of the minimax algorithm. With it, it will be possible to find the best positions to beat the user and basically create an invincible AI.

---

The following image shows how the algorithm works as a tree of possibilities that are generated from a play. The machine reads the play and calculates the possibilities, discarding the ones that will grant victory to the player and as a last step and to add more intelligence to the program, discarding the longest paths to create a more efficient AI.

![alt text](https://upload.wikimedia.org/wikipedia/commons/6/6f/Minimax.svg)
![alt text](https://www.researchgate.net/publication/262672371/figure/fig1/AS:393455625883662@1470818539933/Game-tree-for-Tic-Tac-Toe-game-using-MiniMax-algorithm.png)

<br>

>If you want to go deeper into the topic, we recommend reading the following [website](https://www.geeksforgeeks.org/minimax-algorithm-in-game-theory-set-3-tic-tac-toe-ai-finding-optimal-move/) [And this PDF in spanish](http://www.itnuevolaredo.edu.mx/takeyas/apuntes/Inteligencia%20Artificial/Apuntes/IA/Minimax.pdf). The topic is complex enough to dedicate an entire section, so we won't delve into it.


<br>

In code it can be exemplified with the following form ( the "max" part extracted from the code of this same repository)

``` c++
int minimax(char tablero[][tamano], int movimientos, bool isAI)
{
	int movimiento = 0;
	int mejormov = 0;
	if (FinDelJuego(tablero) == true)
	{
		if (isAI == true)	
			return -1;
		if (isAI == false)
			return +1;
	}
	else
	{
		if(movimientos < 9)
		{
			if(isAI == true)
			{
				mejormov = -999;
				for(int i=0; i<tamano; i++)  
				{
					for(int j=0; j<tamano; j++)
					{
						if (tablero[i][j] == ' ')
						{
							tablero[i][j] = MovComputadora; 
							movimiento = minimax(tablero, movimientos + 1, false); // recursion
							tablero[i][j] = ' '; 
							if(movimiento > mejormov) 
							{
								mejormov = movimiento;
							}
						}
					}
				}
				return mejormov;
			}
            		}
		else
		{
			return 0;
		}
	}
}
```

This logarithmic function is called by another function called:
 ``` c++
int BestMove(char board[][size], int numberofgames)
```
which places and calculates where to make the play on the game board.

---

Considering that the rest of the functions and methods are already committed in the code and that the ones not mentioned are much easier to understand, we end the reamde here.

---
<br>
<br>

##  Authors and acknowledgment
Player vs Player code by Axel Emir Saucedo Zermeño <br>
Player vs IA code by Axel Gutierrez Rodriguez

