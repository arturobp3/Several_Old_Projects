#include <stdio.h>

unsigned int x, f;

unsigned int factorial (unsigned int a);

main(){
	
	puts("Introduce un valor entero entre 1 y 8: \n");
	scanf("%d", &x);
	
	if (x > 8 || x < 1){
		printf("Solo se pueden valores entre 1 y 8!!\n\n");
		system("PAUSE");
		return 0;
	}
	else {
		f = factorial(x);
		printf("El factorial de %d es %d\n\n", x, f);
	}
		
	system("PAUSE");
	return 0;
}

unsigned int factorial (unsigned int a){
	
	if (a == 1)
		return 1;
	else 
		a = a * factorial(a-1); //tambien se podia haber escrito\
								a *= factorial (a-1)
		return a;
		
}