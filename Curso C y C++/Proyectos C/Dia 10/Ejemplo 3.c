#include <stdio.h>

char input[81];

main(){
	
	puts("Introduzca algun texto, luego presione Enter: ");
	
	gets(input);
	
	printf("Has introducido %s\n", input);
	
	system("PAUSE");
}