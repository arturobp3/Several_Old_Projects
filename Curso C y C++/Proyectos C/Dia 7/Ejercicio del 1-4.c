#include <stdio.h>

char x, z;
int y;
int entero;

main()
{
	printf("Esto es una prueba\n");
	puts("Esto es una prueba\n");
	
	scanf("%c%d%c", &x, &y, &z);
	
	printf("Introduce un valor entero: \n");
	scanf("%d", &entero);
	
	while (entero % 2 != 0)
	{
		printf("Su numero elegido: %d, es un numero impar.\n", entero);
		printf("Por favor, teclee un numero par\n");
		scanf("%d", &entero);	
	}
		
	printf("Su valor elegido es %d", entero);
	
	
	
	
	
	
	
}