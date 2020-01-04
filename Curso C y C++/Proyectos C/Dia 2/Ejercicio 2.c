#include <stdio.h>

void display_line(void);

main(){
	display_line();
	printf("\n Teach YourselfC in 21 Days! \n");
	display_line();
	
	getchar();
	getchar();
	return 0;

}

void display_line(void){
	int counter;
	
	for( counter = 0; counter < 21; counter++)
		printf("*");
}

//enunciados: 6 7 8 10(return) 19 20
//variables: 17
//prototipos de funcion: 3
//definicion de funcion:16 hasta acabar funcion
//comentarios: 23 24 25 26 27
