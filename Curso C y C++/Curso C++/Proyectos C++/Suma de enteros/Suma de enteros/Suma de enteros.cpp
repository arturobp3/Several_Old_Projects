//programa de suma que muestra el resultado en pantalla
#include "stdafx.h"
#include <iostream> //permite al programa realizar operaciones de entrada y de salida
using namespace std;

//declaracion de la funcion principal con la que comienza el programa
int main()
{
	//declaracion de variables con sus respectivos nombres. int indica un numero entero
	int numero1;
	int numero2;  //tambien pueden juntarse todos los nombres en una misma int separados con comas y al final un ;
	int suma;

	cout << "Introduzca un primer numero: \t";
	cin >> numero1; //cin sirve para introducir algun dato, en este caso se almacena en la variable numero1

	cout << "Introduzca un segundo numero: \t";
	cin >> numero2;

	suma = numero1 + numero2; //le damos a la variable suma un valor
	cout << "La suma es: " << suma << endl; // muestra la suma y, además, añadimos endl para terminar la linea y vacia el buffer de salida

	return 0;
}