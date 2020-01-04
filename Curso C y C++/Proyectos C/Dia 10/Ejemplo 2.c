#include <stdio.h>

char *mensaje1 = "C";
char *mensaje2 = "Es";
char *mensaje3 = "El mejor";

char *banco = "Banco S.A";
char *nombre = "Juan Pérez";
int saldo = 1000;

main(){
	
	puts(mensaje1);
	puts(mensaje2);
	puts(mensaje3);
	
	printf("El saldo en %s de %s es %d. ", banco, nombre, saldo);
	
	system("PAUSE");
}