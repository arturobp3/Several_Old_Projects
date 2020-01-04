#include <stdio.h>
#include <stdlib.h>

int random[10][10][10];

int a, b, c;

main() 
{
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for(c = 0; c < 10; c++)
			{
				random[a][b][c] = rand();  //el ciclo va sumando c's y añadiendo a cada c un valor aleatorio\
											cuando termina el ciclo c, empieza el b, y cuando termina, empieza el a.
			}
		}
	}
	
	for (a = 0; a < 10; a++)
	{
		for(b = 0; b < 10; b++)
		{
			for(c = 0; c < 10; c++)
			{
				printf("\nrandom[%d][%d][%d] = ", a, b, c);
				printf("%d", random[a][b][c]);
			}
			
			puts("\n\nPulsa cualquier tecla para continuar...");
			getch();
		}
	}
	
	getchar();
	getchar();
	
	return 0;
}