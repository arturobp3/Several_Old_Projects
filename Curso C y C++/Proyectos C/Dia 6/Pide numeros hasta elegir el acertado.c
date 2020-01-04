//pide numeros al usuario hasta que se teclea 7

#include <stdio.h>

int num;

main(){
	
	for (num = 0; num != 7; )
		scanf("%d", &num);
	
	printf("\nPor finnn has acertado!!");
	
	system ("PAUSE");
	return 0;
}