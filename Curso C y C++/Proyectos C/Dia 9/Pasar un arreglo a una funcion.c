//Paso de un arreglo a una funcion

#include <stdio.h>

#define MAX 10

int array[MAX], count;

int largest (int x[], int y);

main()
{
	//recibe del teclado MAX valores
	
	for(count = 0; count < MAX; count++)
	{
		printf("Introduce un valor entero: ");
		scanf("%d", &array[count]);
	}
	//llama a la funcion y despliega el valor de retorno
	
	printf("\n\nEl valor mas grande = %d", largest(array, MAX));
	
	system("PAUSE");
}

int largest(int x[], int y)
{
	int count, biggest = -12000;
	
	for(count = 0; count < y; count++)
	{
		if(x[count] > biggest)
			biggest = x[count];
	}
	return biggest;
}