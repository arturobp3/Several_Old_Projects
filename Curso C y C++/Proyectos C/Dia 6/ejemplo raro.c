#include <stdio.h>

int valor[10];
int contador, numero = 0;
main(){
for (contador = 0; contador < 10 && numero != 99; contador ++)
	
		puts("Teclee un numero, 99 para terminar");
		scanf("%d", &numero);
		valor[contador] = numero;
		
		system("PAUSE");
		return 0;

}