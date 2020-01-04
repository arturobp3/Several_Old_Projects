#include <stdio.h>

int x,y;

main(){
	 printf("\nIntroduzca un valor entero para x: ");
	 scanf("%d", &x);
	 printf("\nIntroduzca un valor entero para y: ");
	 scanf("%d", &y);
	 
	 if (x == y)
		 printf("x es igual a y");
	 else
		 if (x > y)
			 printf("x es mayor a y");
		 else
			 printf("x es menor a y");
	
	getchar();
	getchar();
	
	return 0;
}