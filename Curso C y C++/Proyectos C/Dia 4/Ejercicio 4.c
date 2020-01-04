#include <stdio.h>

int x,y;

main(){
	
	y = 5;
	
	printf("\nIntroduzca un numero entero del 1 al 100: \n");
	scanf("%d", &x);
	
	if ( (x >= 1) && (x <= 20) ) {
		y = x;
		printf("y, por tanto, vale: %d", y);
	}
	else {
		y = y;
		printf("y, vale lo mismo: %d", y);
	}
	
	getchar();
	getchar();
	
	return 0;	
}