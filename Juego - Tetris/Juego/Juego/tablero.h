#ifndef TABLERO_H
#define TABLERO_H

#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include "piezas.h"
using namespace std;

const int MAX_F = 100;
const int MAX_C = 100;
const int MAX_P = 8;

typedef enum tCasilla {Espacio, Pared, O, I, S, Z, L, J, T, Fondo};
typedef enum tColores{
	Negro, Azul, Verde, Cian, Rojo, Morado, Amarillo, Gris, GrisOscuro, AzulOscuro, VerdeClaro,
	AzulClaro, RojoClaro, Rosa, AmarilloClaro, Blanco
};
typedef tCasilla tablero[MAX_F][MAX_C];
typedef tCasilla piezasTetris[MAX_P][2][4]; //Array donde se guardan las piezas

typedef struct{
	tablero tablero;
	int nivel;
	int puntuacion;
	int lineasHechas;
	int filas, columnas;
}tTablero;



bool leerTablero(tTablero & tab, int nivel);
void mostrarTablero(const tTablero & tab);
void colorFondo(int colorFondo, int colorPlano);
void gotoxy(int x, int y);
void copiarPiezaTablero(tTablero & tab, piezasTetris & p, int pieza);
void zonaAparicion(tTablero & tab, piezasTetris & p, int pieza);
void copiarPiezaSiguiente(tTablero & tab, piezasTetris & p, int pieza);

#endif