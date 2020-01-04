#include <stdio.h>

#define MAX 5
int count;
int total;


int arreglo1[MAX] = {1,2,3,4,5};
int arreglo2[MAX] = {1,2,3,4,5};

int totarreglo(int x[], int y[], int z);

main(){
	
	total = totarreglo(arreglo1, arreglo2, MAX);
	printf("La suma de los elementos de los 2 arreglos es: %d\n", total);
	system("PAUSE");
}


int totarreglo(int x[], int y[], int z)
{
	int total;
	int totalarreglo1 = 0;
	int totalarreglo2 = 0;
	int count;
	
	for(count = 0; count < MAX; count++)
	{
		totalarreglo1 = totalarreglo1 + x[count];
	}
	for(count = 0; count < MAX; count++)
	{
		totalarreglo2 = totalarreglo2 + x[count];
	}
	
	total = totalarreglo1 + totalarreglo2;
	
	return total;
}