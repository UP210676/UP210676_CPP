#include <bits/stdc++.h>     //Esta libreria carga todas las librerias estandar
using namespace std; 

//el funcionamiento puede no ser el deseado si se utiliza windows. Programado en Linux.


//____________________________________ Usuario vs IA_______________________________________________-

//Definición de constantes en la macro 

#define Computadora 1 
#define Humano 2 
#define tamano 3 // tamano del tablero

// Definición de fichas de jugador 

#define MovComputadora 'O' 
#define MovHumanoo 'X' 

// Muestra el estado del juego 
void MostrarTablero(char tablero[][tamano]) 
{ 
	
	printf(" %c | %c | %c \n", tablero[0][0], tablero[0][1], tablero[0][2]); 
	printf("-----------\n"); 
	printf(" %c | %c | %c \n", tablero[1][0], tablero[1][1], tablero[1][2]); 
	printf("-----------\n"); 
	printf(" %c | %c | %c \n\n", tablero[2][0], tablero[2][1], tablero[2][2]);  
} 

// Función para mostrar las reglas del juego
void instrucciones_inicio() 
{ 
	printf("\nCoordenadas del tablero\n\n"); 
	
	printf("1 | 2 | 3 \n"); 
	printf("-----------\n"); 
	printf("4 | 5 | 6 \n"); 
	printf("-----------\n"); 
	printf("7 | 8 | 9 \n\n"); 
} 


// Iniciar el juego
void Iniciar(char tablero[][tamano]) 
{	
	//Imprimir el tablero
	for (int i=0; i<tamano; i++) 
	{ 
		for (int j=0; j<tamano; j++) 
			tablero[i][j] = ' '; 
	} 
} 

// Imprimir el ganador del juego
void EncontrarGanador(int Turno) 
{ 
	if (Turno == Humano)    // si el turno actual al terminar el juego es del
					    	// humano entonces él ha ganado y viceversa 
		 printf("¡Le has ganado a la computadora!\n");
		
	else
		 printf("Eres un perdedor, la computadora gano\n"); 
} 

// Regresa verdadero sí una fila se completa con el mismo símbolo
bool filacompleta(char tablero[][tamano])
{ 
	for (int i=0; i<tamano; i++) 
	{ 
		if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2] && tablero[i][0] != ' ') 
			return (true); 
	} 
	return(false); 
} 

/// Regresa verdadero sí una columna se completa con el mismo símbolo  
bool columnacompleta(char tablero[][tamano]) 
{ 
	for (int i=0; i<tamano; i++) 
	{ 
		if (tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i] && tablero[0][i] != ' ') 
			return (true); 
	} 
	return(false); 
} 

// Regresa verdadero sí una diagonal se completa con el mismo símbolo 
bool diagonalcompleta(char tablero[][tamano]) 
{ 
	if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[0][0] != ' ') 
		return(true); 
	if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[0][2] != ' ') 
		return(true); 
	return(false); 
} 

// Regresa verdadero si el juego ha terminado
bool FinDelJuego(char tablero[][tamano]) 
{ 
	return(filacompleta(tablero) || columnacompleta(tablero) || diagonalcompleta(tablero) ); 
}

// Minimax
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
							tablero[i][j] = MovComputadora; 
							movimiento = minimax(tablero, movimientos + 1, false); //recursividad 
							tablero[i][j] = ' '; //deshacer el movimiento
							if(movimiento > mejormov) 
							{
								mejormov = movimiento;
							}
						}
					}
				}
				return mejormov;
			}
			else
			{
				mejormov = 999;
				for (int i = 0; i < tamano; i++)
				{
					for (int j = 0; j < tamano; j++)
					{
						if (tablero[i][j] == ' ')
						{
							tablero[i][j] = MovHumanoo;
							movimiento = minimax(tablero, movimientos + 1, true);
							tablero[i][j] = ' ';
							if (movimiento < mejormov)
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

// Calcular mejor movimiento llamando a algorítmo minimax. Da la coordenada a colocar par la variable 
// "n" en la función void "jugar gato"
int MejorMovimiento(char tablero[][tamano], int numerodejuegos)
{
	int fila = -1, columna = -1;
	int movimiento = 0, mejormov = -999;
	for (int i = 0; i < tamano; i++)
	{
		for (int j = 0; j < tamano; j++)
		{
			if (tablero[i][j] == ' ') 
			{
				tablero[i][j] = MovComputadora; 
				movimiento = minimax(tablero, numerodejuegos+1, false);
				tablero[i][j] = ' ';
				if(movimiento > mejormov)
				{
					mejormov = movimiento;
					fila = i;
					columna = j;
				}
			}
		}
	}
	return fila * 3 + columna;
}

void JugarGato(int Turno)
{ 
	char tablero[tamano][tamano]; 
	int numerodejuegos = 0, x = 0, y = 0;

	Iniciar(tablero);
	instrucciones_inicio(); 
	
	// calcular si se puede seguir jugando
	while (FinDelJuego(tablero) == false && numerodejuegos != 9) 
	{ 
		int n;
		if (Turno == Computadora) //inseta el movimiento de la computadora
		{
			n = MejorMovimiento(tablero, numerodejuegos); //valor arrojado de la función "MejorMovimiento"
			// Traducción de la coordenada
			x = n / tamano;
			y = n % tamano;
			tablero[x][y] = MovComputadora; 
			system("clear");
			MostrarTablero(tablero);
			numerodejuegos ++; 
			Turno = Humano;
		} 
		
		else if (Turno == Humano) 
		{
			printf("\n\nIntroduce la casilla = ");
			scanf("%d",&n);
			n--;
			x = n / tamano;
			y = n % tamano; 
			if(tablero[x][y] == ' ' && n<9 && n>=0)
			{
				tablero[x][y] = MovHumanoo; 
				system("clear");
				MostrarTablero(tablero); 
				numerodejuegos ++; 
				Turno = Computadora;
			}
			else if(tablero[x][y] != ' ' && n<9 && n>=0) //calcula si la casilla esta vacia o usada
			{
				printf("\nPosicion ocupada");
			}
			else if(n<0 || n>8)  //calcular valores incorrectos 
			{
				printf("Valor incorrecto, ingresa otro\n");
			}
		} 
	} 

	// se terminaron las casillas disponibles 
	if (FinDelJuego(tablero) == false && numerodejuegos == tamano * tamano) 
		printf("Nadie ha ganado\n"); 
	else
	{ 
		// Alterna los turnos y declara quiuen gano 
		if (Turno == Computadora) 
			Turno = Humano; 
		else if (Turno == Humano) 
			Turno = Computadora; 
		
		EncontrarGanador(Turno); 
	} 
} 


//_____________________________________________Usuario vs Usuario________________________________________

int PlayerTurn = 0;
char GameArea[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int SelectPlay()
{
    int Play;
    do
    {
        
        cout << "Player " << PlayerTurn % 2 + 1 << " turn: \n";
        cin >> Play;
    } while (Play < 0 || Play > 9);
    return Play;
}

bool CheckValidPlay(int Play)
{
    int row = Play / 10, col = Play - 1;
    if (GameArea[row][col] == 'X' || GameArea[row][col] == 'O')
    {
        return true; // Significa que la casilla esta ocupada
    }
    else
    {
        return false;
    }
}

void PlayReplacement(int Play)
{
    if (PlayerTurn % 2 == 0)
    {
        int row = Play / 10, col = Play - 1;
        GameArea[row][col] = 'X';
    }
    else
    {
        int row = Play / 10, col = Play - 1;
        GameArea[row][col] = 'O';
    }
}

void Tab(int)
{
    int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                if (GameArea[x][y] == 'X')
                {
                    cout << "\033[0;34m" << GameArea[x][y] << "\033[0m";
                }else if (GameArea[x][y] == 'O')
                {
                    cout << "\033[0;31m" << GameArea[x][y] << "\033[0m";
                } else
                {
                    cout << GameArea[x][y];
                }
                
                
                
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
}

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
        else if ((GameArea[position][0] == GameArea[position][1]) && (GameArea[position][0] == GameArea[position][2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((GameArea[position][position] == GameArea[position + 1][position + 1]) && (GameArea[position][position] == GameArea[position + 2][position + 2]))
        {
            VerifyWinner = true;
            break;
        }
        else if ((GameArea[2][0] == GameArea[1][1]) && (GameArea[2][0] == GameArea[0][2]))
        {
            VerifyWinner = true;
            break;
        }
    }
    return VerifyWinner;
}


// __________________________________________ Función Main________________________________________________



int main() 
{ 
	char cont='y';
	int vs;

        printf("¿Contra quién quieres jugar?: Jugador (1) Computadora (2):  ");
	 	scanf(" %i", &vs);
		system("clear");

        if (vs == 1)
        {
            int board, play, GameMode, CPU;
            bool playocuppied = true, winner = false;
            Tab(board);
        
            system("clear");
            Tab(board);
            do
            {
                play = SelectPlay();
                playocuppied = CheckValidPlay(play);
                if (playocuppied == true)
                {
                    do
                    {
                        cout << "Invalid play. Try again\n";
                        break;
                    } while (playocuppied == true);
                }
                else if (playocuppied == false)
                {
                    system("clear");
                    PlayReplacement(play);
                    Tab(board);
                    PlayerTurn++;
                }
                winner = CheckWinner(winner);
            } while (winner == false && PlayerTurn < 9);
            if (PlayerTurn < 9)
            {
                if (PlayerTurn % 2 == 0)
                {
                    cout << "\033[0;31m-PLAYER 2 WINS-\033[0m\n";
                }
                else
                {
                    cout << "\033[0;34m-PLAYER 1 WINS-\033[0m\n";
                }
            }
            else
            {
                cout << "\033[0;33m----DRAW----\033[0m\n";
            }
        
        }
        else
        {
            do 
            {
                char eleccion;
                int vs;
                        printf("¿Quieres empezar primero? (y/n) ");
                scanf(" %c", &eleccion);
                system("clear");

                if(eleccion=='n')
                    JugarGato(Computadora);
                else if(eleccion=='y')
                    JugarGato(Humano);
                else
                    printf("Seleccion invalida\n"); 
            
                printf("\n¿Quieres salir del programa?(y/n) : ");
                scanf(" %c", &cont);
                system("clear");
            } while(cont=='n');
        }
	return (0); 
} 