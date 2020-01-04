#include <stdio.h>

unsigned char x;

main(){
	
	for (x = 180; x < 204; x++){
		
		printf("\nASCII code %d is character %c", x, x);
	}
	
	system("PAUSE");
}