//Las expresiones relacionales (es decir, las que relacionan dos numeros. Ej: 5 < 5)\
no solo se dan en condicionales, sino tambien pueden darse en enunciados. Ejemplo:

#include <stdio.h>

int a;

main(){
	
	a = (5 == 5); // es cierto, por lo tanto = 1
	printf("\na = (5 == 5)\na = %d", a);
	
	a = (5 != 5); //es falso, por lo tanto = 0
	printf("\na = (5 != 5)\na = %d", a);
	
	a = (12 == 12) + (5 != 1); // 1 + 1
	printf("\na = (12 == 12) + (5 != 1) \na = %d", a);
	
	getchar();
	getchar();
	
	return 0;
	
}