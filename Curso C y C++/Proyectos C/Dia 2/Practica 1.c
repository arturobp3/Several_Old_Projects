//programa que calcula el producto de dos numeros
#include <stdio.h>
int a,b,c;
int product(int x, int y);

main(){

//pide un numero para sacarlo por la pantalla. Scanf registra los datos del teclado
	printf("Introduzca un numero entre el 1 y el 100: ");
	scanf("%d", &a);
	
	printf("Introduzca otro numero entre el 1 y el 100: ");
	scanf("%d", &b);
	
	//calcula y despliega el producto
	c = product(a, b);
	printf("\n%d times %d = %d", a, b, c);
	
	getchar();
	getchar();
	return 0;
}
	
	//funcion que regresa el prodcuto de sus dos argumentos
	int product(int x, int y){
		return(x * y);
	}
	
	
	
