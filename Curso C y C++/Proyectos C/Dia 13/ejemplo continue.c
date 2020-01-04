//continue hace que el ciclo "pase" de aquello que le marcas. Se salta el resto del ciclo y vuelve al principio de el

#include <stdio.h>

main(){
	
	char buffer[81];
	int ctr;
	
	puts("Enter a line of text:");
	gets(buffer);
	
	for (ctr = 0; buffer[ctr] != '\0'; ctr++){
		
		if (buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i' || buffer[ctr] == 'o' || buffer[ctr] == 'u')
		{continue;}
	
		putchar(buffer[ctr]);
	}
	
	printf("\n");
	system("PAUSE");
}