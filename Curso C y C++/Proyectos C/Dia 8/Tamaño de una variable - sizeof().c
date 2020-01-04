#include <stdio.h>

int intarray[100];
float floatarray[100];
double doublearray[100];

main()
{
	printf("Tamaño de la variable INT = %d bytes\n\n", sizeof(int));
	printf("Tamaño de la variable SHORT = %d bytes\n\n", sizeof(short));
	printf("Tamaño de la variable LONG = %d bytes\n\n", sizeof(long));
	printf("Tamaño de la variable FLOAT = %d bytes\n\n", sizeof(float));
	printf("Tamaño de la variable DOUBLE = %d bytes\n\n", sizeof(double));
	
	printf("El tamaño del array intarray es = %d bytes\n", sizeof(intarray));
	printf("El tamaño del array floatarray es = %d bytes\n", sizeof(floatarray));
	printf("El tamaño del array doublearray es = %d bytes\n", sizeof(doublearray));
	
	system("PAUSE");
	
	return 0;
}