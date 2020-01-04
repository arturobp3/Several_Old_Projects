#include <stdio.h>

int arreglo[6], x, numero;

void funcionEj6 (arreglo[], x);

main()
{
	//hace ciclo 6 veces o hasta que el ultimo elemento tecleado\
	sea 99
	
	for (x = 0; x < 6 && numero != 99; x++)
	{
		puts("Teclee un valor entero par o 99 para terminar");
		scanf("%d", &numero);
		
		while(numero % 2 == 1 && numero != 99)
		{
			printf("\n%d no es par, por favor teclee un numero par: ", numero);
			scanf("%d", &numero);
		}
		arreglo[x] = numero;	
	}
	for ( x = 0; x < 6 && arreglo[x] != 99; x++)
	{
		printf("\nEl valor tecleado es %d\n", arreglo[x]);
	
	}
	
	funcionEj6();
	system("PAUSE");
	
	return 0;
}

void funcionEj6 (arreglo[], x){
	
	printf("Los valores del arreglo son: %d\t", arreglo[x]);
}