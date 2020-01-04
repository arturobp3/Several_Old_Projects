#include <stdio.h>

int count;

main(){
	
	for (count = 1; count <= 20; count++) //para decrementar seria: count = 100; count > 0; count--
										//para aumentar o disminuir de 5 en 5, por ejemplo, se pone count += 5, count -=5
		
		printf("\n%d", count);
	
	system("PAUSE");
	return 0;
}