#include <stdio.h>

int x = 1, y = 2;

void demo(void);

main(){
	
	printf("Antes de llamar a demo(), x = %d e y = %d\n", x, y);
	demo();
	printf("Despues de llamar a demo(), x = %d e y = %d\n", x, y);
	
	system("PAUSE");
	return 0;
}

void demo(void){
	
	int x = 48, y = 23;
	
	printf("Llamando a demo(), x = %d e y = %d\n", x, y);
}
