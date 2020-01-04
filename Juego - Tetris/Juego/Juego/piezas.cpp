
//Bibliotecas para generar numero
#include "tablero.h"
#include "piezas.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int primeraCasillaPieza(const tTablero & tab, int filaInicial, int & finPieza);


bool leerPiezas(piezasTetris & hola){

	string nombre = "piezas.txt";
	ifstream archivo;
	archivo.open(nombre);

	if (archivo.is_open()){

		int pieza = 0;
		int i = 0, j = 0;
		char numero = ' ';

		archivo.get(numero);
		
		while(pieza < MAX_P && !archivo.eof()){
			i = 0;

			while (i < 2 && !archivo.eof()){

				j = 0;

				while (j < 4 && !archivo.eof()){

					if (numero == '0') hola[pieza][i][j] = Espacio;
					else if (numero == '2') hola[pieza][i][j] = O;
					else if (numero == '3') hola[pieza][i][j] = I;
					else if (numero == '4') hola[pieza][i][j] = S;
					else if (numero == '5') hola[pieza][i][j] = Z;
					else if (numero == '6') hola[pieza][i][j] = J;
					else if (numero == '7') hola[pieza][i][j] = L;
					else if (numero == '8') hola[pieza][i][j] = T;

					j++;
					archivo.get(numero);
				}
				i++;
				archivo.get(numero);
			}
			pieza++;
		}


		archivo.close();
		return true;
	}
	else return false;

}

int generarPiezaAleatoria(){

	int pieza;

	int num;

	srand(time(NULL));

	pieza = rand() % 7; //Devuelve un numero aleatorio entre 0 y 6

	return pieza;
}

//Fila inicial simboliza la fila de abajo de la zona de aparicion

bool compruebaAbajo(const tTablero & tab, int x, int y, int finPieza){
	bool encontrado = false;

	while (y <= finPieza && !encontrado){
		if (tab.tablero[x + 1][y] != Espacio) encontrado = true;
		y++;
	}
	
	return encontrado;
}

bool desplazaAbajo(tTablero & tab, int filaInicial, int pieza){

	bool movTerminado;
	int finPieza;

	int i = filaInicial; int j = primeraCasillaPieza(tab, filaInicial, finPieza);

		if (!compruebaAbajo(tab, i, j, finPieza)){ //Si no se ha encontrado nada

			while (i >= filaInicial - 1){

				j = 8; //En 8 comienza la zona aparicion

				while (j < 12){  //en 12 termina la zona de aparicion
					if (tab.tablero[i][j] == (pieza + 2)){
						tab.tablero[i + 1][j] = tab.tablero[i][j];
						tab.tablero[i][j] = Espacio;
					}
					j++;
				}

				i--;
			}

			Sleep(100); //VARIA LA VELOCIDAD DE BAJADA (EL NIVEL)
			filaInicial++;
			mostrarTablero(tab);

			
			movTerminado = desplazaAbajo(tab, filaInicial, pieza);
		}

		else movTerminado = true;

	return movTerminado;
}

//Dada una pieza devuelve la primera casilla de esa pieza de la filaInicial y el numero en el que termina
int primeraCasillaPieza(const tTablero & tab, int filaInicial, int & finPieza){

	int primera;
	int j = 8; //Empieza en 8 la zona de aparicion
	bool encontrado = false;

	while (j < 12 && !encontrado){
		if (tab.tablero[filaInicial][j] == Espacio) j++;
		else{
			primera = j;
			while (j <= 12 && !encontrado){
				if (tab.tablero[filaInicial][j] == Espacio || tab.tablero[filaInicial][j] == Pared){
					finPieza = j - 1;
					encontrado = true;
				}
				else j++;
			}
		}
	}

	return primera;
}

