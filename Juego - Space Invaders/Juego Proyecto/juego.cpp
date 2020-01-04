#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale>
#include <stdio.h>


using namespace std;

const int ENTER = 13;
const int BORDES_MENU = 176;
const int laterales = 186;
const int superiorInferior = 205;
const int esquinaDchaArriba = 187;
const int esquinaDchaAbajo = 188;
const int esquinaIzqAbajo = 200;
const int esquinaIzqArriba = 201;
const int ANCHO_CONSOLA = 100;
const int ALTO_CONSOLA = 56;
const int flechaArriba = 72;
const int flechaAbajo = 80;
const int flechaDerecha = 77;
const int flechaIzquierda = 75;


void gotoxy(int x, int y);
void menu(int &alturaOpcion);
void ejecutarOpcion(int opcion);
void flechaMenu(int &alturaOpcion);
void marcoJuego(int xBordeIzq, int yBordeArriba, int yBordeAbajo, int caracterASCII_1, int caracterASCII_2, int caracterASCII_3, int caracterASCII_4
, int caracterASCII_5, int caracterASCII_6);
void opcionJugar();
void movimientoDerechaNave();

int main(){
	system("mode con: cols=101 lines=58"); //coloca la consola en un tamaño determinado
	int alturaOpcion;

	menu(alturaOpcion);
	
	ejecutarOpcion(alturaOpcion);

	return 0;
}

void gotoxy(int x, int y){

	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void menu(int &alturaOpcion){
	system("color 0B");
	marcoJuego(0, 0, ALTO_CONSOLA, BORDES_MENU, BORDES_MENU, BORDES_MENU, BORDES_MENU, BORDES_MENU, BORDES_MENU);

	gotoxy(2, 3); cout << "\t    //////////  //////////  //////////  //////////  //////////";
	gotoxy(2, 4); cout << "\t   //          //      //  //      //  //          //         ";
	gotoxy(2, 5); cout << "\t  //////////  //////////  //////////  //          //////////  ";
	gotoxy(2, 6); cout << "\t         //  //          //      //  //          //           ";
	gotoxy(2, 7); cout << "\t//////////  //          //      //  //////////  //////////    ";


	gotoxy(2, 10); cout << "      //////////  //////////  //////////   //////////  //         ////////// " << endl;
	gotoxy(2, 11); cout << "     //      //  //      //      //           //      //         //" << endl;
	gotoxy(2, 12); cout << "    /////////   //////////      //           //      //         //////////" << endl;
	gotoxy(2, 13); cout << "   //      //  //      //      //           //      //         //" << endl;
	gotoxy(2, 14); cout << "  //////////  //      //      //           //      /////////  ///////////" << endl;

	gotoxy(2, 23); cout << "\t JUGAR";
	gotoxy(2, 25); cout << "\t GUARDAR PUNTUACION EN ARCHIVO";
	gotoxy(2, 27); cout << "\t SALIR";

	gotoxy(2, 47); cout << "\tControles: ";
	gotoxy(2, 48); cout << "________________________";
	gotoxy(2, 49); cout << "[ " << char(24) << " ] - Mover Arriba";
	gotoxy(2, 50); cout << "[ " << char(25) << " ] - Mover Abajo";
	gotoxy(2, 51); cout << "[ " << char(27) << " ] - Mover Izquierda";
	gotoxy(2, 52); cout << "[ " << char(26) << " ] - Mover Derecha";
	gotoxy(2, 53); cout << "[ ESPACIO ] - Disparar";
	gotoxy(2, 54); cout << "[ ENTER ] - Seleccionar";

	gotoxy(50, 17); cout << "                 /"<< char(92);
	gotoxy(50, 18); cout << "                /  "<< char(92);
	gotoxy(50, 19); cout << "               /    "<< char(92);
	gotoxy(50, 20); cout << "              /      "<< char(92);
	gotoxy(50, 21); cout << "             /        "<< char(92);
	gotoxy(50, 22); cout << "            /          "<< char(92);
	gotoxy(50, 23); cout << "            '----------'";
	gotoxy(50, 24); cout << "            |__________| ";
	gotoxy(50, 25); cout << "            /----/" << char(92) << "----" << char(92);
	gotoxy(50, 26); cout << "           /|    ||    |" << char(92);
	gotoxy(50, 27); cout << "          //|____||____|" << char(92) << char(92);
	gotoxy(50, 28); cout << "         //  |   ||   |  " << char(92) << char(92);
	gotoxy(50, 29); cout << "        / |  |___||___|  | " << char(92);
	gotoxy(50, 30); cout << "        | |   '._||_.'   | |";
	gotoxy(50, 31); cout << "        | |    |_||_|    | |";
	gotoxy(50, 32); cout << "        | |  .'  ||  '.  | |";
	gotoxy(50, 33); cout << "        | | /    ||    "<<char(92) <<" | |";
	gotoxy(50, 34); cout << "        | ||     ||     || |";
	gotoxy(50, 35); cout << "        | ||     ||     || |";
	gotoxy(50, 36); cout << "        | | " << char(92) << "    ||    / | |";
	gotoxy(50, 37); cout << "        | |  '. _||_ .'  | |";
	gotoxy(50, 38); cout << "        | |  _   ||   _  | |";
	gotoxy(50, 39); cout << "        | | / " << char(92) << "_'||'_/ "<< char(92)<<" | |";
	gotoxy(50, 40); cout << "        | | " << char(92) << "_/ '||' " << char(92) << "_/ | |";
	gotoxy(50, 41); cout << "        | |     _||_     | |";
	gotoxy(50, 42); cout << "       /| |  .'  ||   '. | |" << char(92);
	gotoxy(50, 43); cout << "      /  .| /    ||     " << char(92) << " |. " << char(92);
	gotoxy(50, 44); cout << "     /   |||     ||     |||   " << char(92);
	gotoxy(50, 45); cout << "    /    |||     ||     |||    " << char(92);
	gotoxy(50, 46); cout << "   /     || " << char(92) << "    ||    / ||     " << char(92);
	gotoxy(50, 47); cout << "  /______/|_ '. _||_ .' _||" << char(92) << "_____" << char(92);
	gotoxy(50, 48); cout << "             _---||---_";
	gotoxy(50, 49); cout << "            /_'''||'''_" << char(92);
	gotoxy(50, 50); cout << "             /___||___" << char(92);
	gotoxy(50, 51); cout << "              /__||__" << char(92);
	gotoxy(50, 52); cout << "              '.''.'.'";
	gotoxy(50, 53); cout << "              '.''.'.'";
	gotoxy(50, 54); cout << "              '.''.'.'";
	gotoxy(50, 55); cout << "              '.''.'.'";


	flechaMenu(alturaOpcion);
}

void flechaMenu(int &alturaOpcion){

	bool gameover = false;
	int x = 7, y = 23; //COORDENADAS DONDE SE SITUA LA FLECHA
	gotoxy(x, y); cout << char(16); //Triangulo que muestra
	while (!gameover){

		Sleep(40); //hace que el movimiento se produzca más despacio

		if (_kbhit()){ //si hay una tecla pulsada

			char tecla = _getch(); //convierte la tecla en su codigo ascii
			gotoxy(x, y); cout << " ";

			if (tecla == flechaArriba) {
				y = y - 2;
				if (y < 23) y = 27; //sirve para que no se pase de las opciones del menu
			}
			else if (tecla == flechaAbajo){
				y = y + 2;
				if (y > 27) y = 23; //sirve para que no se pase de las opciones del menu
			}
			else if (tecla == ENTER) gameover = true;

			gotoxy(x, y); cout << char(16);
		}
	}
	alturaOpcion = y;
}

void ejecutarOpcion(int opcion){

	switch (opcion){
	case 23: system("cls"); opcionJugar(); cout << endl << endl; system("pause"); break;
	case 25: cout << " eyy buenas a todos"; break;
	case 27: break;
	}

}

void marcoJuego(int xBordeIzq, int yBordeArriba, int yBordeAbajo, int caracterASCII_1, int caracterASCII_2, int caracterASCII_3, int caracterASCII_4
, int caracterASCII_5, int caracterASCII_6){

	for (int x = 1; x < ANCHO_CONSOLA; x++){ //ARRIBA
		gotoxy(x, yBordeArriba); cout << char(caracterASCII_1);
	}
	gotoxy(0, 0); cout << char(caracterASCII_3); //esquina izquierda superior
	gotoxy(ANCHO_CONSOLA, 0); cout << char(caracterASCII_6);//esquina derecha superior

	
	for (int y = 1; y < yBordeAbajo; y++){ //IZQUIERDA
		gotoxy(xBordeIzq, y); cout << char(caracterASCII_2);
	}
	gotoxy(0, yBordeAbajo); cout << char(caracterASCII_4); //esquina izquierda inferior
	
	for (int y = 1; y < yBordeAbajo; y++){ //DERECHA
		gotoxy(ANCHO_CONSOLA, y); cout << char(caracterASCII_2); 
	}
	gotoxy(ANCHO_CONSOLA, yBordeAbajo); cout << char(caracterASCII_5); //esquina derecha inferior

	for (int x = 1; x < ANCHO_CONSOLA; x++){ //ABAJO
		gotoxy(x, yBordeAbajo); cout << char(caracterASCII_1);
	}


}

void opcionJugar(){
	system("color F");
	marcoJuego(0, 0, 38, superiorInferior, laterales, esquinaIzqArriba, esquinaIzqAbajo, esquinaDchaAbajo, esquinaDchaArriba);

}




