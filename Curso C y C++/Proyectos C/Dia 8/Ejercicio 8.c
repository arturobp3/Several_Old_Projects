#include <stdio.h>
#include <stdlib.h>

int random[1000];
int a;
int promedio;
int total;
int contador;

main()
{
	for (a = 0; a < 1000; a++)
	{
		random[a] = rand();
		
		total = total + random[a]; // total += random[a];
	}
	
	promedio = total / 1000;
	
	printf("La media del valor asignado a las 1000 variables es: %d\n", promedio);
	
	for(a = 0; a < 1000; a++)
	{
		for(contador = 0; contador < 10; contador++)
		{
			printf("\nrandom[%d] = ", a);
			printf("%d", random[a]);
		}
		system("PAUSE");
	}
	

	
}

