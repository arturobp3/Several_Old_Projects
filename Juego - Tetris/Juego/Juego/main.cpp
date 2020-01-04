#include <iostream>
#include "tablero.h"
#include "piezas.h"
#include <Windows.h>
#include <MMSystem.h>
using namespace std;

/*------------------------------------PIEZAS_H------------------------------------*/
/*--------------------------------------------------------------------------------*/
bool compruebaAbajo(const tTablero & tab, int x, int y);
bool desplazaAbajo(tTablero & tab, int filaInicial, int pieza);
bool leerPiezas(piezasTetris & hola);
void movimientoHaciaAbajo(tTablero & tab, int pieza);
int primeraCasillaPieza(const tTablero & tab, int filaInicial, int & finPieza);
/*--------------------------------------------------------------------------------*/


int main(){
	system("mode con: cols=64 lines=40"); //Cambia el tamaño de la consola
	
	system("color 70");
	tTablero tetris;
	piezasTetris piezas;
	int nivel = 0; //Introducir nivel a mano
	int pieza = 7, pieza2 = 7;
	int filaInicial = 2;

	if (leerTablero(tetris, nivel) && leerPiezas(piezas)){

		mostrarTablero(tetris);
		pieza = generarPiezaAleatoria();

		//PlaySound(TEXT("KS.wav"), NULL, SND_ASYNC);

		while (true){

			copiarPiezaTablero(tetris, piezas, pieza);     //Copia la pieza en la zona de aparicion
			copiarPiezaSiguiente(tetris, piezas, pieza2);  //Copia la pieza siguiente (La primera vez no copia nada)
			mostrarTablero(tetris);							//Muestra la primera
			
			pieza2 = generarPiezaAleatoria();				//genera la segunda y la copia
			while (pieza2 == pieza){						//Hace que dos piezas iguales no sean consecutivas
				pieza2 = generarPiezaAleatoria();
			}

			copiarPiezaSiguiente(tetris, piezas, pieza2);
			mostrarTablero(tetris);					//La muestra
		
			Sleep(1000);

		
													//EMPIEZA EL MOVIMIENTO HACIA ABAJO
			//WHILE NO SE PULSE NINGUNA TECLA, MOVER HACIA ABAJO
			desplazaAbajo(tetris, filaInicial, pieza);
			
			pieza = pieza2;
			pieza2 = 7;
			
		}
		
	}
	else cout << "No se ha podido cargar el escenario o las piezas" << endl << endl;

	system("pause");
	return 0;
}