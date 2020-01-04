#include "tablero.h"


bool leerTablero (tTablero & tab, int nivel){

	string nombre = "tablero.txt";
	ifstream archivo;
	tab.filas = 0, tab.columnas = 0;
	char numero = ' ';

	archivo.open(nombre);
	if (archivo.is_open()){
		int i = 0;

		archivo.get(numero);
		while (!archivo.eof() && numero != '\n'){
			tab.filas = i;
			int j = 0;

			while (!archivo.eof() && numero != '\n'){

				if (numero == '0') tab.tablero[i][j] = Espacio;
				else if (numero == '1') tab.tablero[i][j] = Pared;
				else if (numero == '2') tab.tablero[i][j] = O;
				else if (numero == '3') tab.tablero[i][j] = I;
				else if (numero == '4') tab.tablero[i][j] = S;
				else if (numero == '5') tab.tablero[i][j] = Z;
				else if (numero == '6') tab.tablero[i][j] = L;
				else if (numero == '7') tab.tablero[i][j] = J;
				else if (numero == '8') tab.tablero[i][j] = T;
				else if (numero == '9') tab.tablero[i][j] = Fondo;

				j++;

				archivo.get(numero);
			}
			tab.columnas = j;
			i++;

			archivo.get(numero);
		}
		
		tab.filas++;
		tab.nivel = nivel;
		tab.puntuacion = 0;
		tab.lineasHechas = 0;

		archivo.close();
		return true;
	}

	else return false;

}

void mostrarTablero(const tTablero & tab){

	gotoxy(0, 0); //UTILIZARLO A MODO DE LIMPIEZA DE PANTALLA

	for (int i = 0; i < tab.filas; i++){
		for (int j = 0; j < tab.columnas; j++){
			if (tab.tablero[i][j] == Espacio){
				colorFondo(Negro, Blanco);
				cout << "  ";
			}

			else if (tab.tablero[i][j] == Fondo){
				colorFondo(Gris, Blanco);
				cout << "  ";
			}

			else if (tab.tablero[i][j] == O){
				colorFondo(AmarilloClaro, Amarillo);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == I){
				colorFondo(AzulClaro, Azul);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == S){
				colorFondo(Rojo, RojoClaro);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == Z){
				colorFondo(Verde, VerdeClaro);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == L){
				colorFondo(GrisOscuro, Negro);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == J){
				colorFondo(Blanco, GrisOscuro);
				cout << "[]";
			}

			else if (tab.tablero[i][j] == T){
				colorFondo(Rosa, Negro);
				cout << "[]";
			}

			else if(tab.tablero[i][j] == Pared){ 
				colorFondo(Cian, Azul);
				cout << (char)177 << (char)177;
			}
			
		}
		cout << endl;
	}

	gotoxy(47, 4); colorFondo(Negro, Blanco); cout << "SIGUIENTE";
	gotoxy(46, 17); cout << "PUNTUACION";  gotoxy(51, 19); cout << tab.puntuacion;
	gotoxy(49, 26); cout << "NIVEL"; gotoxy(51, 28); cout << tab.nivel;
	colorFondo(Gris, Negro);
	cout << "\n\n\n\n\n\n\n";

	colorFondo(Gris, Negro);
}

void colorFondo(int colorFondo, int colorPlano) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, colorPlano | (colorFondo << 4));
}

void gotoxy(int x, int y){

	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void copiarPiezaTablero(tTablero & tab, piezasTetris & p, int pieza){

	int fila = 1, columna;

	for (int i = 0; i < 2; i++){
		columna = 8;
		for (int j = 0; j < 4; j++){
			tab.tablero[fila][columna] = p[pieza][i][j];
			columna++;
		}
		fila++;
	}

}

void copiarPiezaSiguiente(tTablero & tab, piezasTetris & p, int pieza){

	int fila = 7, columna;

	for (int i = 0; i < 2; i++) {
		columna = 23;
		for (int j = 0; j < 4; j++){
			tab.tablero[fila][columna] = p[pieza][i][j];
			columna++;
		}
		fila++;
	}
}

void zonaAparicion(tTablero & tab, piezasTetris & p, int pieza){

	copiarPiezaTablero(tab, p, pieza);
}