#include <stdio.h>

char input[81], *ptr;

main(){
	
	puts("Enter text a line at a time, the press Enter.");
	puts("Enter a blank line when done.");
	
	//Hace ciclo mientras no se de una linea en blanco
	
	while( *(ptr = gets (input)) != NULL){
		printf("You entered %s\n", input);
	}
	
	puts("Thank you and good bye");
	
	system("PAUSE");
	
}