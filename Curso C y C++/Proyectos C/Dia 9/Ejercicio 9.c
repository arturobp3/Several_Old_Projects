#include <stdio.h>
#define MAX 5

int array1[MAX] = {1,2,3,4,5};
int array2[MAX] = {1,2,3,4,5};
int count;
int suma_arreglo(int x[], int y[], int w);
int total;

main()
{
	printf("\n================================================================================================\n");
	printf("\tArreglo 1\t\tArreglo 2\t\tArreglo 3(suma de 1 y 2)\n");
	printf("================================================================================================\n");
	
	
	for(count = 0; count < MAX; count++)
	{
		total = suma_arreglo(array1, array2, MAX);
		
		printf("\t%d\t\t\t%d\t\t\t%d\n", array1[count], array2[count], total);
	}
	
	system("PAUSE");
}

int suma_arreglo(int x[], int y[], int w)
{
	int count;
	int total = 0;
	
	for(count = 1; count <= 5; count++)
	{
		total = total + x[count];
	}
	for(count = 1; count <= 5; count++)
	{
		total = total + y[count];
	}
	
	return total;
	
	
}