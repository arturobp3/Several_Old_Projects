//demuestra el uso de enunciados if

#include <stdio.h>


int x,y;

main(){
	//recibe los dos valores que se han de probar
	
	printf("\nIntroduzca un valor entero para x: ");
	scanf("%d", &x);
	printf("\nIntroduzca un valor entero para y: ");
	scanf("%d", &y);
	
	//prueba los valores e imprime el resultado
	
	if (x == y)
		printf("x es igual que y");
	if (x > y)
		printf("x es mayor que y");
	if (x < y)
		printf("x es menor que y");
	
	getchar();
	getchar();
	
	return 0;
}