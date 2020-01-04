#include <stdio.h>

int a,b;

main(){
	
	a = b = 5;
	
	printf("\n%d  %d", a--, --b);  //cuando es a--, el numero decrece despues de ser impreso
	printf("\n%d  %d", a--, --b);
	printf("\n%d  %d", a--, --b);
	printf("\n%d  %d", a--, --b);
	printf("\n%d  %d", a--, --b);
	printf("\n%d  %d", a--, --b);
	
	getchar();
	getchar();
	
	return 0;
}