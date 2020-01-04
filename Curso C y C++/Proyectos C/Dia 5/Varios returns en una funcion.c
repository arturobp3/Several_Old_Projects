#include <stdio.h>

int x, y, z;

int largo_de(int a, int b);

main(){
	
	puts("Introduzca dos valores enteros: \n");
	scanf("%d%d", &x, &y);
	
	z = largo_de(x,y);
	
	printf("\nEl valor mas grande es %d.\n", z);
	
	system("PAUSE");
	return 0;
}

int largo_de(int a, int b){
	
	if (a > b)
		return a;
	else 
		return b;
}