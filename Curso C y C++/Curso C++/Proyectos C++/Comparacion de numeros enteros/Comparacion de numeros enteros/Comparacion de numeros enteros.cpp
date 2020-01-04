#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {

	int numero1;
	int numero2;

	cout << "Introduzca dos numeros:\t";
	cin >> numero1 >> numero2;

	if (numero1 > numero2)
		cout << numero1 << " Es mayor que " << numero2 << endl;

	if (numero1 < numero2)
		cout << numero1 << " Es menor que " << numero2 << endl;

	if (numero1 >= numero2)
		cout << numero1 << " Es mayor o igual que " << numero2 << endl;

	if (numero1 <= numero2)
		cout << numero1 << " Es menor o igual que " << numero2 << endl;

	if (numero1 == numero2)
		cout << numero1 << " Es igual a " << numero2 << endl;

	if (numero1 != numero2)
		cout << numero1 << " Es distinto de " << numero2 << endl;
		
	return 0;
}
