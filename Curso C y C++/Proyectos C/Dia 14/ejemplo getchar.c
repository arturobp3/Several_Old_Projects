#include <stdio.h>

main(){
	int ch;
	
	while ((ch = getchar()) != '\n'){
		putchar(ch);
	}
	
	system("PAUSE");
}