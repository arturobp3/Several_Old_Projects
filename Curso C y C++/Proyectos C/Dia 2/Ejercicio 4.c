#include <stdio.h>
#include <string.h>

main(){
	char buffer[256];
	
	printf("Introduzca su nombre y presione <Enter>:\n");
	gets(buffer);
	
	printf( "\nYour name has %d characters and spaces!",
					strlen( buffer));
	

	getchar();
	getchar();
	return 0;
}